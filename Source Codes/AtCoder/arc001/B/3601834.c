#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main()
{   int i,n,a[4]={0};
    char s[101];
    scanf("%d%s",&n,s);
    for(i=0;i<n;i++){
        a[s[i]-'1']++;
    }
    qsort(a,4,sizeof(int),compare);
    
    
    printf("%d ",a[3]);
    printf("%d\n",a[0]);
    return 0;
} 