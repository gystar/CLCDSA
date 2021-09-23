#include <stdio.h>

    //standard
    #define max(p,q)((p)>(q)?(p):(q))
    #define min(p,q)((p)<(q)?(p):(q))
    #define abs(a) ((a)>(0)?(a):-(a))


    int main() {
        int h;
        int w;
        char a[9][9];

        //input
        scanf("%d",&h);
        scanf("%d",&w);

        int mark = 0;
        int flag = 0;

        //input
        int i;
        for (i=0;i<h;i++) {
          scanf("%s",a[i]);
         }


        //calculation
       for(i = 0; i < h; i++){
        	int j;
        	for(j = 0; j < w; j++){
        		if(a[i][j] == '#'){
        			if(j >= mark){
        				mark = max(mark,j);
        				if(i == h-1 && j == w-1){
        					printf("\nPossible");
        				}
        			}else{
        				flag++;
        				goto endloop;
        			}
        		}
            }
         }

        endloop:
			if(flag){
				printf("\nImpossible");
			}

        return 0;
    } 