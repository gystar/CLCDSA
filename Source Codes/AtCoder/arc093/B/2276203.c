a;main(b){
	scanf("%d%d",&a,&b);
	puts("99 99");
	for(int i=0;i<99;i++)
	{
		for(int j=0;j<99;j++)
		{
			putchar((i%2|j%2||(i<49?b--:a--)<2)^i>48?'.':'#');
		}
		puts("");
	}
} ./Main.c:1:1: warning: data definition has no type or storage class
 a;main(b){
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 a;main(b){
   ^
