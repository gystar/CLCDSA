#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    char temp;
    int i,j,l;
    char str_s[101],str_t[101];
    scanf("%s",str_s);
    scanf("%s",str_t);
    for(i=0; str_s[i]!='\0'; i++);
    l=i;
    //printf("%d",l);
    for(i=0; i<l; i++)
    {
        if(strcmp(str_s,str_t)==0)
            break;
        else
        {
            temp=str_t[0];
            for(j=0; j<l-1; j++)
            {
                str_t[j]=str_t[j+1];
            }
            str_t[l-1]=temp;
        }
    }
    if(strcmp(str_s,str_t)==0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
} 