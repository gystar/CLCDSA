/*
 * main.c
 *
 *  Created on: 2019/03/06
 *      Author: family
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    char yes[4] = "Yes\0";
    char no[4] = "No\0\0";
    char *ans;
    scanf("%d %d %d %d",&a,&b,&c, &d);
    if (abs(a - c) <= d) {
      ans = yes;
    } else if((abs(a-b) <= d) && (abs(b-c) <= d)) {
      ans = yes;
    } else {
      ans = no;
    }
    printf("%s\n",ans);
    return 0;
} 