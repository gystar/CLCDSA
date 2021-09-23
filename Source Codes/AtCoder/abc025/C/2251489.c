int b[2][3],c[3][2],m[3][3];
int f(int d){
	int s=0,u=0;
	if(d==9){
		for(int x=0;x<3;++x){
			for(int y=0;y<2;++y){
				if(m[y][x]==m[y+1][x]){
					s+=b[y][x];
				}
			}
		}
		for(int y=0;y<3;++y){
			for(int x=0;x<2;++x){
				if(m[y][x]==m[y][x+1]){
					s+=c[y][x];
				}
			}
		}
	}else{
		for(int y=0;y<3;++y){
			for(int x=0;x<3;++x){
				if(!m[y][x]){
					m[y][x]=d%2?-1:1;
					int t=f(d+1);
					m[y][x]=0;
					if(d%2){
						if(!u||t<s){
							s=t;
							u=1;
						}
					}else{
						if(!u||t>s){
							s=t;
							u=1;
						}
					}
				}
			}
		}
	}
	return s;
}
main(){
	int s=0;
	for(int y=0;y<2;++y){
		for(int x=0;x<3;++x){
			scanf("%d",b[y]+x);
			s+=b[y][x];
		}
	}
	for(int y=0;y<3;++y){
		for(int x=0;x<2;++x){
			scanf("%d",c[y]+x);
			s+=c[y][x];
		}
	}
	printf("%d\n%d\n",f(0),s-f(0));
} ./Main.c:43:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
