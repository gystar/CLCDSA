/*
  C - Sugar Water
  http://arc083.contest.atcoder.jp/tasks/arc083_a
*/

int main(int argc, char const *argv[]) {

  int A,B,C,D,E,F;
  int a,b,c,d;
  int suger,water,max_suger,max_water;
  double concentration,max_concentration;
  scanf("%d %d %d %d %d %d\n", &A, &B, &C, &D, &E, &F );

  max_suger = 0;
  max_water = 0;
  max_concentration = -1.0;

  for( a=0; 100*A*a<=F; a++ ){
    for( b=0; 100*A*a+100*B*b<=F; b++ ){
      for( c=0; 100*A*a+100*B*b+C*c<=F; c++ ){
        for( d=0; 100*A*a+100*B*b+C*c+D*d<=F; d++ ){
          water = 100*A*a+100*B*b;
          suger = C*c+D*d;
          if( water+suger == 0) break;
          concentration = (double)suger/(double)(water+suger);
          if( concentration <= (double)(E)/(double)(100+E) ){
            if( concentration > max_concentration ){
              max_water = water;
              max_suger = suger;
              max_concentration = concentration;
            }
          }
        }
      }
    }
  }

  printf("%d %d\n", max_suger+max_water, max_suger);
  return 0;
} 