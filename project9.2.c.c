#include <stdio.h>

main()
{
     int number;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    while (number != 0) 
	{
        number = number / 10;
        ++count;
    }

    printf("Total number of digits: %d\n", count);

}
 