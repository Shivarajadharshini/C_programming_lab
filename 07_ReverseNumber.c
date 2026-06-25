#include <stdio.h>

int main()
{
    int number, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    printf("Reversed Number = %d", reverse);

    return 0;
}

/*
Sample Input:
1234

Output:
Reversed Number = 4321
*/
