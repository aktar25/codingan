#include<stdio.h>

int main()
{
	int n,b,k;
	printf("masukkan nilai n: "); scanf("%d", &n);
	
	for(b=1;b<=n;b++)
	{
		for(k=1;k<=b;k++)
		{
			printf("%d",k);
		}
	printf("\n");
	}
	
	for(b=n;b>=1;b--)
	{
		for(k=n;k>=b;k--)
		{
			printf("%d",b);
		}
	printf("\n");
	}
return 0;
}
