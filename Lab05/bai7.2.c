#include <stdio.h>
int main ()
{
	int num1, num2, t;
	printf("\n num1: ");
	scanf("%d", &num1);
	printf("\n num2: ");
	scanf("%d", &num2);
	t = num1 * num2;
	
	if (t == 1000)
	printf("\nMultiplication is 1000");
	else if (t > 1000)
	printf("\nMultiplication is more than 1000");
	else 
	printf("\nMultiplication is less than 1000");
	
	return 0;
}
