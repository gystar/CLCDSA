#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int main(void){
    int h,w,ans=0;
    scanf("%d%d",&h,&w);
    int c[10][10];
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            scanf("%d",&c[i][j]);
        }
    }
    for (int k=0; k<10; k++){
        for (int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                if (c[i][j]>c[i][k]+c[k][j]){
                    c[i][j]=c[i][k]+c[k][j];
                }
            }
        }
    }
    for (int i=0; i<h; i++){
        for (int i=0; i<w; i++){
            int a;
            scanf("%d",&a);
            if (a!=-1){
                ans+=c[a][1];
            }
        }
    }
    printf("%d\n",ans);
	return 0 ;
} 