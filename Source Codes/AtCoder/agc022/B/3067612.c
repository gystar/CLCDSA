i=3;main(n,j){scanf("%d",&n);if(n==3)return!printf("2 3 25");for(;j=(n-i+1)/2*2,!(0<j&&j<5001&&i<15001);i+=3);for(i=n-j;i--;printf("%d ",2*i+2));for(;j--;printf("%d ",6*j+3));return 0;} ./Main.c:1:1: warning: data definition has no type or storage class
 i=3;main(n,j){scanf("%d",&n);if(n==3)return!printf("2 3 25");for(;j=(n-i+1)/2*2,!(0<j&&j<5001&&i<15001);i+=3);for(i=n-j;i--;printf("%d ",2*i+2));for(;j--;printf("%d ",6*j+3));return 0;}
 ^
./Main.c:1:1: warning: type defaults to �int� in declaration of �i� [-Wimplicit-int]
./Main.c:1:5: warning: return type defaults to �int� [-Wimplicit-int]
 i=3;main(n,j){scanf("%d",&n);if(n==3)return!printf("2 3 25");for(;j=(n-i+1)/2*2,!(0<j&&j<5001&&i<15001);i+=3);for(i=n-j;i--;printf("%d ",2*i+2));for(;j--;printf("%d ",6*j+3));return 0;}
     ^
