#include<stdio.h>

int main(){
  char buf[1024];
  int N;

  fgets(buf,sizeof(buf),stdin);
  sscanf(buf,"%d",&N);

  int *weight=(int *)malloc(sizeof(int)*N);

  int i=0;
  while(fgets(buf,sizeof(buf),stdin)){
    sscanf(buf,"%d",&weight[i]);
    i++;
  }

  //????????????????????????????
  //???????????????????????????
  int mount[N];
  int m=0;//???

  for(i=0; i<N; i++){
    //?????????-??????????????????
    int temp[m];
    //temp???????flag=0;
    int flag=0;

    for(int j=0; j<m; j++){
      temp[j]=mount[j]-weight[i];
      if(temp[j]>=0){
        flag=1;
      }
    }

    if(flag==0){
      mount[m]=weight[i];
      m++;
    }
    else{
      //??????????????
      int min_dif=1000000;
      int min_dif_n=0;
      for(int j=0; j<m; j++){
        if(temp[j]<min_dif && temp[j]>=0){
          min_dif=temp[j];
          min_dif_n=j;
        }
      }
      mount[min_dif_n]=weight[i];
    }
  }

  printf("%d\n",m);
} 