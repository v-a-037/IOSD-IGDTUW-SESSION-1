#include<stdio.h>

int main()
{
	int t , arr[100] , n , i , j = 0 ;
	int sum[100] ;
	scanf("%d",&t) ;
	if ( t >= 1)
	{
		while(j<t)
		{
			scanf("%d",&n) ;
			for (i = 0 ; i < n ; i++)
			{
				scanf("%d",&arr[i]) ;
			}
			sum[j] = arr[0] ;
			for(i=1 ; i < n ; i++)
			{
				sum[j] += arr[i] ;
			}
			j++ ;
		}
		for(i=0 ; i < t ; i++)
		{
			printf("%d\n",sum[i]) ;
		}
	}
	return 0 ;
}
