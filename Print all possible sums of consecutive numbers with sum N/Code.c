#include<stdio.h>
void main()
{
	int c=0,i,j,i1,n,sum=0;
	scanf("%d",&n);
	for(i=n-1;i>0;i--)
	{
		sum=0;
		j=i;
		while(sum<n)
		{
			sum=sum+j;
			j--;
		}
		if(sum==n)
		{
			for(i1=j+1;i1<=i;i1++)
				printf("%d ",i1);
			printf("\n");
			c++;
		}
	}
	printf("%d",c);
}
		