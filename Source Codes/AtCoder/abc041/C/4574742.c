#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int number;
    int height;
} student;
int compare(const void *a,const void*b){
    student x=*(student *)a;
    student y=*(student *)b;
    int p=x.height,q=y.height;
    return p>q?-1:1;
}
int main()
{   int n;
    scanf("%d",&n);
    student a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].height);
        a[i].number=i;
    }
    qsort(a,n,sizeof(student),compare);
    for(int i=0;i<n;i++){
        printf("%d\n",a[i].number+1);
    }
    return 0;
} 