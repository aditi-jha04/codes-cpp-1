#include<stdio.h>
#include<math.h>
int main()
{
	int x,r1, r2;
	printf("Enter number");
	scanf("%d", &x);
	int n=0;
	int temp = x;
	int result;
	while (x!=0)
	{
		x=x/10;
        n++;
        printf("The number is now %d \n the count is %d \n", x,n);
	}
	
	x = temp;
	for ( int i=n-1;i>0; i--)
	{
		r1 = x%10;
		printf("\n %d", r1);
		r2 = pow(10,i);
		printf("\n %d", r2);
		result = result + (r1*r2);
		x = x/10;	
	}
	printf("\n %d", result);
	return 0;
}
