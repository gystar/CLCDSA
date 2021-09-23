#include <stdio.h>

    //standard
    #define max(p,q)((p)>(q)?(p):(q))
    #define min(p,q)((p)<(q)?(p):(q))
    #define abs(a) ((a)>(0)?(a):-(a))



    int main() {
        int n;
        int ans = 0;
        char s[101];
        char t[101];

        //input
        scanf("%d",&n);
        scanf("%s",s);
        scanf("%s",t);

        //calculation
        int i;
        for(i =0; i < n; i++){
        	int count = 0;
        	int j;
        	for(j = 0; j < n-i; j++){
        		if(s[i+j] == t[j]){
        			count++;
        		}
        	}
        	ans = max(ans,count);
         }

        //Output
        printf("\n%d\n",2*n-ans);
        return 0;
    } 