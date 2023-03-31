#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double valueOne;
    double valueTwo;
    char operator;

    printf("Welcome to the Calculator!\n");
    printf("Please enter your first value:\n");
    scanf("%lf", &valueOne);

    printf("Please enter your operator (options: '+' (addition), '-' (subtraction), '*' (multiplication), '/' (division), '^' (power), 'v' (square root)):\n");
    scanf(" %c", &operator);
    while (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/' && operator!= '^' && operator!= 'v')
    {
        printf("Please enter a valid operator!\n");
        scanf(" %c", &operator);
    }

    if (operator!= 'v')
    {
        printf("Please enter your second value:\n");
        scanf("%lf", &valueTwo);
    }
    double result;
    switch (operator)
    {
    case '+':
        result = valueOne + valueTwo;
        break;
    case '-':
        result = valueOne - valueTwo;
        break;
    case '*':
        result = valueOne * valueTwo;
        break;
    case '/':
        result = valueOne / valueTwo;
        break;
    case '^':
        result = pow(valueOne, valueTwo);
        break;
    case 'v':
        result = sqrt(valueOne);
        break;
    default:
        printf("Invalid operator!\n");
        return 1;
    }

    printf("The result is: %.2lf\n", result);
    printf("Press ENTER to terminate the program");
    fflush(stdout);
    getchar();
    getchar();

    return 0;
}