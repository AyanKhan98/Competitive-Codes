#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100],g[100],l[100];
	int i,j,dif,dif1=0,dif2=0,max;
	scanf("%s",a);
	scanf("%s",b);
	dif=strlen(a)-strlen(b);
	
	if(dif<0)
	{
		*g=b;
		max=strlen(b);
		*l=a;
	}
	else
	{
		*g=a;
		max=strlen(a);
		*l=b;
	}
	for(i=dif;i<max;i++)
	{
		if(g[i]==l[i-dif])
			dif1++;
	}
	for(i=0;i<max-dif;i++)
	{
		if(g[i]==l[i-dif])
			dif2++;
	}
	if(dif1<dif2)
		printf("changes required=%d",dif1+dif);
	else
		printf("changes required=%d",dif2+dif);
	
}