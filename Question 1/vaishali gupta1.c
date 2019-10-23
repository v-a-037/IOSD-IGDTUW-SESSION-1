#include<stdio.h>

int main()
{
	int t , arr[100] , n , i , j = 0 ;
	int min[30] , max[30] ;
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
			min[j] = arr[0] ;
			max[j] = arr[0] ;
			
			for(i=1 ; i < n ; i++)
			{
				if(min[j] > arr[i])
					min[j] = arr[i] ;
				
				if(max[j] < arr[i])
					max[j] = arr[i] ;
			}
			j++ ;
		}
		for(i=0 ; i < t ; i++)
		{
			printf("%d %d\n",max[i],min[i]) ;
		}
	}
	return 0 ;
}
