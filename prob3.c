
#include <stdio.h>
#include <stdbool.h>

#define NUMBER_OF_DIGITS 10
int main(void)
{
	bool digit_seen[NUMBER_OF_DIGITS] = {false};
	int digit;
	long n;

	while(true)
	{

		//printf("Enter a number: ");
		scanf("%ld", &n);

		if(n <= 0)
			break;

		while(n > 0)
		{
			digit = n % 10;
			if(digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		

		if(n > 0)
			printf("Repeated Digit\n");
		else
			printf("No repeated digit\n");
	}
	}
	printf("\n");

	return 0;
}