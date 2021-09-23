#include <stdio.h>
#define MAX 50
//printf("1\n");

/*
 1.????????????????????????????

 */

int main(){
    int i,j,n,a[MAX],x,duo=0;
  //  printf("1\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]=0;// ???
    }
    for(i=0;i<n;i++){
        scanf("%d",&x);//??n??
        for(j=0;j<n;j++){//??????
            if(a[j]>=x){
                a[j]=x;
                break;
            }
            if(a[j]==0){//????????
                a[j]=x;
                duo++;
                break;
            }
        }
        
        
    }
    printf("%d\n",duo);
    return 0;
} 