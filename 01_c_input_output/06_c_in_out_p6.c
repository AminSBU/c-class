// C program to illustrate the use of printf with width
// specifier
#include <stdio.h>
int main()
{
	int x1, x2;

	printf("enter first value: ");
	scanf("%d", &x1);

	printf("enter second value: ");
	scanf("%d", &x2);

	printf("x1 is %d, x2 is %d", x1, x2);
	printf("\n");
	printf("sum of %d + %d is: %d", x1, x2, x1 + x2);
	return 0;
}
