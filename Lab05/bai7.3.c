#include <stdio.h>
int main ()
{
	int a, b, sub;
	
	printf("WELLCOME HACKER");
	printf("\n Enter a: ");
	scanf("%d", &a);
	printf("\n Enter b: ");
	scanf("%d", &b);
	printf("\n Subtraction gives: %d\n", a - b);
	
	if (a - b == a && a - b == b)
	printf("\n Subtraction gives both a and b");
	else if (a - b == a)
	printf("\n Subtraction gives a");
	else if (a - b == b)
	printf("\n Subtraction gives b");
	else 
	printf("\n Subtraction does not give both a and b");
	
	return 0;	
}
