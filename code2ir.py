import logging
from os import curdir
from pathlib import Path
import os, sys
from re import split
import subprocess

logging.basicConfig(level=logging.DEBUG,#控制台打印的日志级别
                    filename='./outputs/code2ir.log',
                    filemode='a',##模式，有w和a，w就是写模式，每次都会重新写日志，覆盖之前的日志
                    #a是追加模式，默认如果不写的话，就是追加模式
                    format='%(asctime)s - %(pathname)s[line:%(lineno)d] - %(levelname)s: %(message)s'
                    #日志格式
                    )

current_dir =  Path(os.path.dirname(os.path.realpath(__file__)))
out_data_dir = current_dir / "data"
out_data_dir.mkdir(parents=True, exist_ok=True)
source_dir = current_dir / "Source Codes"
dataset_dirs = ["AtCoder", "CodeJamData"]

code_types = {"c":0, "cpp":1, "py":2, "java":3, "cs":4}
llvm_cmd_functions = [
    lambda x,y : "clang-10 -emit-llvm -S".split(" ")+ ["-c", x, "-o", y],#c
    lambda x,y : "clang-10 -emit-llvm -S".split(" ")+ ["-c", x, "-o", y],#c++
]

os.environ["PATH"] += ":/mnt/wanyao/guiyi/opt/llvm-10.0/bin"
#很多C文件中有warning,去掉最后的warning部分，可能会造成少数错误，但是已经很大程度上增加可编译通过的代码文件数量
c_warning_begin = b"./Main.c: In function" 

TIMEOUT = 60

def process_file(full_path:Path, out_file:Path):
    code_type = code_types.get(out_file.split('.')[-1], -1)
    if code_type <0 or code_type >= len(llvm_cmd_functions):
        logging.error(f"unsuported file type.")
        return
    
    #clang生成的有些有问题需要重新生成
    if code_type < 2 and out_file.is_file():
        with open(out_file, "rb+") as f:
            content = f.read()
            if len(content) > 500:
                return
            logging.debug("regenerate ir.")        
    
    with open(full_path, "rb+") as f:
        content = open(full_path, "rb+").read()
       
        if code_type == 0:#C code 
            index = content.find(c_warning_begin)
            if index > 0:
                logging.debug("truncate ending.")
                content = content[:index]
                f.seek(0)
                f.truncate()
                f.write(content)                    
       
        cmd = llvm_cmd_functions[code_type](str(full_path), str(out_file))
        print(f"cmd:{cmd}")
        process = subprocess.Popen(
        cmd,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        stdin=subprocess.PIPE,           
        )         

        _, stderr = process.communicate()       
        
        if process.returncode == 2:         
            logging.error(stderr.decode("utf-8").rstrip())
            return
            #raise ValueError(stderr.decode("utf-8").rstrip())
        elif process.returncode == 9 or process.returncode == -9:             
            logging.error("Time out")
            return
            #raise TimeoutError(f"Program graph construction exceeded {TIMEOUT} seconds")
        elif process.returncode:  
            logging.error(f"error code {process.returncode}")
            return
            #raise OSError(stderr.decode("utf-8").rstrip())

for dataset in dataset_dirs:
    dataset_dir = source_dir / dataset
    for sub_dir in os.listdir(dataset_dir):
        for question in os.listdir(dataset_dir/ sub_dir):
            for solution in os.listdir(dataset_dir/ f"{sub_dir}/{question}"):
                full_path = dataset_dir / f"{sub_dir}/{question}/{solution}"
                out_dir = out_data_dir / f"{dataset}/{sub_dir}_{question}"
                out_dir.mkdir(parents=True, exist_ok=True)
                out_file = out_dir/f"{solution}.ir"  
                logging.debug(f"processing {str(full_path)}")              
                process_file(full_path,out_file)
      

                