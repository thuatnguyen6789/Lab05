#include <stdio.h>
int main ()
{
	float salary;
	char grade;
	
	printf("WELLCOME THUAT GROUP");
	printf("\n Please enter your salary: ");
	scanf("%f", &salary);
	printf("\n Your grade: ");
	fflush(stdin);
	scanf("%c", &grade);
	if (grade == 'A')
	printf("\n Your income: %f", salary + 300);
	else if (grade == 'B')
	printf("\n Your income: %f", salary + 250);
	else
	printf("\n Your income: %f", salary + 100);
	
	return 0;
}
