#include<stdio.h>
int main()
{
int n, i, a[2][100]={0}, lsum=0, rsum=0, max=0;
scanf("%d", &n);
for(i = 0; i < n; i++){
scanf("%d", &a[0][i]);
}
for(i = 0; i < n; i++){
scanf("%d", &a[1][i]);
rsum += a[1][i];
}
for(i = 0; i < n; i++){
lsum += a[0][i];
if((lsum + rsum) > max){
max = lsum + rsum;
}
rsum -= a[1][i];
}
printf("%d\n", max);
return 0;
} 