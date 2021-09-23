#include <stdlib.h>
#include <stdio.h>

int main()
{   int n,d,k;
    scanf("%d%d%d",&n,&d,&k);
    int l[d],r[d],s[k],t[k],present[k],flag[100]={0};
    for(int i=0;i<d;i++){
        scanf("%d%d",&l[i],&r[i]);
    }
    for(int i=0;i<k;i++){
        scanf("%d%d",&s[i],&t[i]);
        present[i]=s[i];
    }
    for(int i=0;i<d;i++){
        for(int j=0;j<k;j++){
            if(flag[j]==0&&present[j]>=l[i]&&present[j]<=r[i]){
                if(t[j]>=l[i]&&t[j]<=r[i]){
                    flag[j]=i+1;
                }else{
                    if(t[j]<l[i]){
                        present[j]=l[i];
                    }else{
                        present[j]=r[i];
                    }
                }
            }
        }
    }
    for(int i=0;i<k;i++){
        printf("%d\n",flag[i]);
    }
    
    return 0;
} 