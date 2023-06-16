#include <stdio.h>
/**
 * main -A size of variables origin
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int nbr;
	scanf("%d",&nbr);
	if(nbr>0)
	printf("%d is positive\n",nbr);
	else if(nbr<0)
	printf("%d is negative\n",nbr);
	else
	printf("0 is zero\n");
	return (0);
}
