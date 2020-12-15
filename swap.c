#include<stdio.h>

int main(){

    int num1, num2, tempnum;

    printf("Enter number1");
    scanf("%d", &num1);

    printf("Enter number2");
    scanf("%d", &num2);

    tempnum = num1;

    num1 = num2;

    num2 = tempnum;

    printf("The number1 is %d \n", num1);

    printf("The number2 is %d \n", num2);

    return 0;
}