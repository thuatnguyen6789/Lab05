#include <stdio.h>
int main ()
{
	float point;
	printf("\n WELLCOME NHT SCHOOL");
	printf("\n Enter your point: ");
	scanf("%f", &point);
	if (point >= 75)
	printf("\n Your grade is A");
	else if (point >= 60 && point < 75)
	printf("\n Your grade is B");
	else if (point >= 45 && point < 60)
	printf("\n Your grade is C");
	else if (point >= 35 && point < 45)
	printf("\n Your grade is D");
	else
	printf("\n Your grade is E");
	
	return 0;
}
