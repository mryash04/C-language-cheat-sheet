#include<stdio.h>

int main(){

    int i, n, p=1;

    printf("Enter your number");
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        p = p * i;
    }

    printf("%d", p);

    return 0;

}