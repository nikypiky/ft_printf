#include <stdio.h>
cha
char	*test(ch
int	main (voi
int	main (void)
{
	int num = 42000;
double value = 3.14159;

printf("%-20d\n", num);   // Left-justified, minimum width of 5 characters
printf("%08d\n", num);   // Zero-padded, minimum width of 8 characters
printf("%.2f\n", value); // Floating-point with 2 decimal places precision
}
