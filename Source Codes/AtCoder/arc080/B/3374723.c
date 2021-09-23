#include <stdio.h>
#include <math.h>


int main(void)
{
	//?????
	int h,w,n;
	int a[10010];
	int i,j;
	int map[110][110];
	int mapx,mapy;
	int temp;
	
	//????????
	scanf("%d %d",&h,&w);
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	mapx=0;
	mapy=0;
	
	for(i=0;i<n;i++){
		temp=a[i];
		while(temp>0){
			map[mapx][mapy]=i+1;
//			printf("map[%d][%d]=%d\n",mapx,mapy,i+1);
			temp--;
			if(mapx%2==0&&mapy==w-1){
				mapx++;
			}else if(mapx%2==0){
				mapy++;
			}else if(mapy==0){
				mapx++;
			}else{
				mapy--;
			}
		}
	}
				
	
	
	
//	printf("??????\n");
	
	//??
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
//	printf("???????\n");
	
	return 0;
} 