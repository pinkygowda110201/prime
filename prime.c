#include<stdio.h>
int prime(int,int);
main()
{
	int num,a;
	printf("Enter a number : ");
	scanf("%d",&num);
	a=prime(num,num/2);
	if(a==1)
	 {
	  printf("\n%d is a prime number.",num);
	 }
	 else
	 {
	  printf("\n%d is not a prime number.",num);
	 }
}
int prime(int x, int y)
{
	if(y==1)
	{
		return 1;
	}
	else
	{
		if(x%y == 0)
		 return 0;
		else
		 prime(x, y-1);
	}
 	
}

