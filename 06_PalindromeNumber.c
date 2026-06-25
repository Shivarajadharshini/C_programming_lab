#include <stdio.h>

int main()
{
    int number, reverse = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome Number.", original);
    else
        printf("%d is not a Palindrome Number.", original);

    return 0;
}

/*
Sample Input:
121

Output:
121 is a Palindrome Number.
*/
