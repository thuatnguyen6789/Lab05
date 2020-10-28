#include <stdio.h>
int main ()
{
	int a, b, r;
	
	printf("\n a: ");
	scanf("%d", &a);
	printf("\n b: ");
	scanf("%d", &b);
	r = a % b;
	
	if (r == 0)
	printf("a chia het cho b");
	else
	printf("a khong chia het cho b");
	
	return 0;
}
