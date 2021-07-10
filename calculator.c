#include<stdio.h>

int main()
{
    double num1;
    double num2;
    char op;


    printf("Enter num1: \n");
    scanf("%lf", &num1);

    printf("Enter an opertor: \n");
    scanf(" %c", &op);

    printf("Enter num2: \n");
    scanf("%lf", &num2);

    if(op == '+')
    {
        printf("%f", num1 + num2);
    } else if(op == '-'){
        printf("%f", num1 - num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    } else if(op == '/'){
        printf("%f", num1 / num2);
    } else {
        printf("Invaild Operator");
    }


    return 0;
}