#include<stdio.h>

#define N_MAX 50
#define Q_MAX 100

int main(void)
{
	int N, i;
	int distance, distance_max, most_far_index;

	scanf("%d", &N);
	for(i=2;i<=N;i++)
	{
		printf("? 1 %d\n", i);
		fflush(stdout);
		scanf("%d", &distance);
		if(i==2 || distance_max<distance)
		{
			distance_max=distance;
			most_far_index=i;
		}
	}

	for(i=1;i<=N;i++)
	{
		if(most_far_index==i) continue;

		printf("? %d %d\n", most_far_index, i);
		fflush(stdout);
		scanf("%d", &distance);
		if(distance_max<distance)
		{
			distance_max=distance;
		}
	}
	printf("! %d\n", distance_max);
	fflush(stdout);

	return 0;
} 