#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First Number = %d\n", a);
    printf("Second Number = %d", b);

    return 0;
}

/*
Sample Input:
10 20

Output:
After swapping:
First Number = 20
Second Number = 10
*/
