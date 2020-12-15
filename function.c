#include <stdio.h>
#include <string.h>

struct Books
{
    char name[40];
    char author[30];
    int price;
} book;

void printStruct(struct Books bk)
{
    printf("Book name is %s \n", bk.name);
    printf("Book author is %s \n", bk.author);
    printf("Book price is %d \n", bk.price);
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Hello This is a function %d \n", sum(10, 5));

    // Array in c

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d \n", array[7]);

    // Pointer in c

    int a = 40;
    printf("%d \n", a);

    int *ptr = &a;
    *ptr = 50;
    printf("%d \n", a);

    // String in c

    char names[3] = {'m', 'y', '\0'};
    char str1[50], str2[30];
    strcpy(str1, "Yash");
    printf("%s \n", str1);

    // Structure in c

    struct Books bk1, bk2;
    strcpy(bk1.name, "C programming");
    strcpy(bk1.author, "Dennis ritchi");
    bk1.price = 100;

    printStruct(bk1);
    return 0;
}