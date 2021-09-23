#include <stdio.h>
   #include <stdlib.h>

    
   int main(){
       int H, W;
       scanf("%d %d", &H, &W);
       int h,w;
       scanf("%d %d", &h, &w);
       int ans;
       ans=H*W;
       ans-=h*W;
       ans-=w*H;
       ans+=h*w;
       printf("%d",ans);
       return 0;
   } 