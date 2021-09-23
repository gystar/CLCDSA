#include <stdio.h>
#include <stdlib.h>

int sort(const void *a, const void *b){
    return *(int*)b-*(int*)a ;
}

typedef struct {
    int a;
    int b;
} students;

int main(void){
    int n;
    scanf ("%d",&n);
    students student[100000];
    
    for (int i=0; i<n; i++){
        scanf("%d",&student[i].a);
        student[i].b=i;
    }
    qsort (student,n,sizeof(students),sort);
    for (int j=0; j<n; j++){
        printf("%d\n",student[j].b+1);
    }
	return 0 ;
} 