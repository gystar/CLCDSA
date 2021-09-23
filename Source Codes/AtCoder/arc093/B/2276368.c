i,j=99;main(a){for(;j>98?j=!puts("98 99"-!!i),i++%49||~scanf("%d",&a):1;)putchar((~i*++j%2&&a-->1)^i>47?46:35);} ./Main.c:1:1: warning: data definition has no type or storage class
 i,j=99;main(a){for(;j>98?j=!puts("98 99"-!!i),i++%49||~scanf("%d",&a):1;)putchar((~i*++j%2&&a-->1)^i>47?46:35);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘j’ [-Wimplicit-int]
 i,j=99;main(a){for(;j>98?j=!puts("98 99"-!!i),i++%49||~scanf("%d",&a):1;)putchar((~i*++j%2&&a-->1)^i>47?46:35);}
   ^
./Main.c:1:8: warning: return type defaults to ‘int’ [-Wimplicit-int]
 i,j=99;main(a){for(;j>98?j=!puts("98 99"-!!i),i++%49||~scanf("%d",&a):1;)putchar((~i*++j%2&&a-->1)^i>47?46:35);}
        ^
