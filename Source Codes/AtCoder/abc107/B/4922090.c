#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  int H, W;
  char a[101][101];
  scanf("%d%d", &H, &W);
  for(int i = 0; i < H; i++){
    scanf("%s", a[i]);
    
  }

  int b[101]; int p = 0; int l = 0;

  for(int i = 0; i < H; i++){
    l = 0; 
    for(int j = 0; j < W; j++){
      if(a[i][j] == '#'){
	l += 1;
	break;
      }
    }
    if(l != 0){
      b[p] = i;
      p++;
    }
  }

  int c[101]; int q = 0;
  for(int j = 0; j < W; j++){
    l = 0;
    for(int i = 0; i < H; i++){
      if(a[i][j] == '#'){
	l += 1;
	break;
      }
    }
    if(l != 0){
      c[q] = j;
      q++;
    }
  }

   for(int i = 0; i < p; i++){
  for(int j = 0; j < q; j++){
    printf("%c", a[b[i]][c[j]]);
  }
  printf("\n");
  }
  return 0;
} 