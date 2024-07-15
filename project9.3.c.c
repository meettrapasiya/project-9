#include<stdio.h>

main() 
{
    int number, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    while (number >= 10)
	{
        number = number / 10;
    }
    firstDigit = number;

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digits: %d\n", sum);

}
