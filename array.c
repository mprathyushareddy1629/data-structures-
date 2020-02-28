#include <stdio.h> 
void main()
{
	int a[100],n,i,d;
	printf("enter the size of array");
	scanf("%d ",&n);
	printf("enter elements of array\n" );
	for(i=0;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("enter d");
	scanf("%d",&d);
	for(i=d;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	for (i=1;i<=d;i++)
		{
			printf("%d",a[i]);
		}
}