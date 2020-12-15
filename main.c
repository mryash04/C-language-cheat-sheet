#include <stdio.h>

int main()
{
  int a = 5;     // 2 bytes
  float b = 4.0; // 4 bytes - 6 decimal places
  char c = 't';  // 1 bytes
  printf("Hello World \n");
  printf("Hello %d \n", a);
  printf("Hello %f \n", b);
  printf("Hello %c \n", c);

  printf("The size taken by int is %d\n", sizeof(int));
  printf("The size taken by float is %d\n", sizeof(float));
  printf("The size taken by char is %d\n", sizeof(char));
  printf("The size taken by double is %d\n", sizeof(double));

  // Rules for creating variables

  // int myName; // This is variable declaration
  // myName = "Yash"; // This is variable initialization
  // char five = '5'; // variable dec. and initilization

  const int i = 10;
  //   i = 9;

  // Operators in c language

  // Airthmetic operators in c

  int a1 = 5, b1 = 6, c1 = 7;

  printf("The sum of a and b is %d \n", a1 + b1);
  printf("The sub of a and b is %d \n", a1 - b1);
  printf("The multiply of a and b is %d \n", a1 * b1);
  printf("The divison of a and b is %d \n", a1 / b1);
  printf("The reminder of a and b is %d \n", a1 % b1);
  printf("The increment is %d \n", a1++);
  printf("The decrement %d \n", a1--);

  // Releational operators in c

  int value1 = 10, value2 = 50;

  printf("%d \n", value1 == value2);
  printf("%d \n", value1 != value2);
  printf("%d \n", value1 > value2);
  printf("%d \n", value1 < value2);

  // Logical operators in c

  int value3 = 0, value4 = 1;

  printf("%d \n", value3 && value4);
  printf("%d \n", value3 || value4);
  printf("%d \n", !value3);
  printf("%d \n", !value4);

  int x = 20;
  int y = 10;
  int z = 15;
  int d = 5;
  int e;

  e = (x + y) * z / d; // ( 30 * 15 ) / 5
  printf("Vxlue of (x + y) * z / d is : %d\n", e);

  e = ((x + y) * z) / d; // (30 * 15 ) / 5
  printf("Vxlue of ((x + y) * z) / d is  : %d\n", e);

  e = (x + y) * (z / d); // (30) * (15/5)
  printf("Vxlue of (x + y) * (z / d) is  : %d\n", e);

  e = x + (y * z) / d; //  20 + (150/5)
  printf("Vxlue of x + (y * z) / d is  : %d\n", e);

  // Type casting

  int num1, num2;

  printf("Enter num1 \n");
  scanf("%d", &num1);

  printf("Enter num2 \n");
  scanf("%d", &num2);

  printf("The result is %f \n", (float)num1 / num2);

  // Decision making

  int age;

  printf("Enter Your age \n");
  scanf("%d", &age);

  if(age > 18)
  {
    printf("You can vote");
  }else{
    printf("You can not vote");
  }

  // Switch case

   char grade = 'B';

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );

   // Loop in c

   int valueLoop = 1;

   while(valueLoop < 10){
     printf("My name is yash \n");
     valueLoop++;
   }

   for(int j=0; j < 10; j++){
     printf("%d \n", j);
   }
  
  return 0;
}