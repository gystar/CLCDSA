#include <stdio.h>
#include <string.h>
int main(void){
    int n,a,b;
    scanf("%d %d %d\n",&n,&a,&b);
    int ans = 0;
    int plus;
    int *plusp;
    plusp = &plus;

    for(int i = 0;i<n;i++){
        char str[1024];    
        fgets(str,1024, stdin);
        // printf("%s",str);
        char *ptr;

        int *p;
        int tmp;
        p = &tmp;
        ptr = strtok(str," ,");
        // printf("%d\n",*p);

        int flag = 0;
        while(ptr != NULL){
            *plusp = 1;
            
            if(strstr(ptr,"West") == NULL){
                ptr = strtok(NULL, ", \n");
            }else{
                ptr = strtok(NULL, ", \n");
                *plusp *= -1;
            }
            flag++;

            if(flag % 2 != 0 && ptr != NULL){
                *p = atoi(ptr);
                if(*p < a){
                    *p = a;
                }else if(*p > b){
                    *p = b;
                }
                *p *= *plusp;
                ans += *p;
            }
        }
    }
    if(ans == 0){
        printf("0\n");
    }else if(ans < 0){
        printf("West %d\n",ans * -1);
    }else{
        printf("East %d\n",ans);
    }
} 