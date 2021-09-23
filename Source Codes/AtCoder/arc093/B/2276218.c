i,j;main(a){
	for(puts("98 99");i<98;i++)
	{
		i%49||scanf("%d",&a);
		for(int j=0;j<99;j++)
		{
			putchar((i%2|j%2||a--<2)^i>48?'#':'.');
		}
		puts("");
	}
} ./Main.c:1:1: warning: data definition has no type or storage class
 i,j;main(a){
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘j’ [-Wimplicit-int]
 i,j;main(a){
   ^
./Main.c:1:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 i,j;main(a){
     ^
