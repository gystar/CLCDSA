#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    int n,i,j,m=-1;
    char a[100][100];
    int b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(strcmp(a[i],a[j])==0)
                b[i]++;
        }
    }
    for(i=0;i<n;i++){
        if(m<b[i]){
            m = b[i];
            j = i;
        }
    }
    printf("%s\n",a[j]);
} 