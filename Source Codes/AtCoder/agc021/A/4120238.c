#define n_max 20
#define max(a,b) a>b?a:b
#include <stdio.h>
int main(void){
    char n[n_max];
    for(int i=0;i<n_max;i++)
    {
        n[i] = 0;
    }
    gets(n);
    int len = getlength(n);
    
    int nonine = len-1;
    for(int i=0;i<len;i++)
    {
        if(n[i]!='9')
        {
            nonine = i;
            break;
        }
    }
    
    if(nonine==len-1)
    {
        printf("%d\n",max(9*nonine+(n[nonine]-'0'),9*(nonine-1)+(n[nonine-1]-'1')+9));
        return 0;
    }
    else if(countnine(n,len)==len-1)
    {
        printf("%d\n",9*(len-1)+n[nonine]-'0');
        return 0;
    }
    else
    {
        printf("%d\n",9*nonine+n[nonine]-'1'+9*(len-nonine-1));
        return 0;
    }
}

int getlength(char data[]){
    int i=0;
    while(data[i])
    {
        i++;
    }
    return i;
}

int countnine(char data[],int length){
    int i=0,count=0;
    while(i<length)
    {
        if(data[i]=='9')
        {
            count++;
        }
        i++;
    }
    return count;
} 