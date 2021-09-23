#include <stdio.h>

int main(){
    int t,n,m,i,j=0;
    
    scanf("%d%d",&t,&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);
    int b[m];
  	for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
  
    for(i=0;i<m;i++){
        while(1){
            if(b[i]<a[j] || j>=n){
                puts("no");
                return 0;
            }else if(b[i]>=a[j] && b[i]<=a[j]+t){
                j++;
              	break;
            }
            j++;
            
        }
    }
    
    puts("yes");
    return 0;
} 