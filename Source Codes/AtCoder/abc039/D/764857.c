#include <stdio.h>
#include <stdlib.h>

int main(void){
	int w, h, i, j, k, l, c;
	char *after, *before, *t;

	scanf("%d %d", &h, &w);

	after = (char *) malloc(w*h+1);
	before = (char *) malloc(w*h+1);
	t = (char *)malloc(w*h+1);

	for(i = 0; i < h; i++){
		scanf("%s", after + w * i);
	}

	for(j = 0; j < h; j++){
		for(i = 0; i < w; i++){
			t[j * w + i] = after[j * w + i] == '.' ? -1 : 0;
		}
	}

	for(j = 0; j < h; j++){
		for(i = 0; i < w; i++){
			c = 0;
			for(l = j - 1; l <= j + 1; l++){
				for(k = i - 1; k <= i + 1; k++){
					if(0 <= k && k < w &&
					   0 <= l && l < h){
						if(after[l * w + k] == '.') c++;
					}
				}
			}
			if(c == 0)
				for(l = j - 1; l <= j + 1; l++)
					for(k = i - 1; k <= i + 1; k++)
						if(0 <= k && k < w &&
						   0 <= l && l <= h)
							t[l * w + k]++;
			before[w * j + i] = c == 0 ? '#' : '.';
		}
	}

	for(j = 0; j < h; j++){
		for(i = 0; i < w; i++){
			if(t[j * w + i] == 0){
				printf("impossible\n");
				return 0;
			}
		}
	}
	

	printf("possible\n");
	for(j = 0; j < h; j++){
		for(i = 0; i < w; i++){
			printf("%c", before[j * w + i]);
		}
		printf("\n");
	}
	return 0;
} 