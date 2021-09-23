#include <stdio.h>

int main(){
    int e[6],b,l[6],i,j,cnt=0,bb=0;

    for(i=0;i<6;i++){
        scanf("%d",&e[i]);
    }

    scanf("%d",&b);

    for(i=0;i<6;i++){
        scanf("%d",&l[i]);
    }

    for(i=0;i<6;i++){
        if(l[i]==b){bb=1;}
        for(j=0;j<6;j++){
            if(l[i]==e[j]){cnt++; break;}
        }
    }
    
    if(cnt==6){cnt++;}
    else if(cnt==5){if(bb){cnt++;}}
    else if(cnt<=2){printf("0\n"); return 0;}

    printf("%d\n",8-cnt);
    

    return 0;
} 