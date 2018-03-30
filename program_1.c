#include <stdio.h>
#include <math.h>
int max(int num1, int num2);
int main() {
  int number;
  int d_to_r;
  float r_to_d;
  //  student number, student name and the assignment number
  printf(" 7777777  Fateh Singh 1\n");
  max(1,2);
  printf("Please select the table you would like to create \n");
  ineligible:
  printf("1. Degrees to Radians or 2. Radians to Degrees : " );
  scanf("%d", &number);

  switch (number){
      case 1:
          printf("Please enter the step size of the table (1-359): " );
          scanf("%d", &d_to_r);
          break;
      case 2:
          printf("Please enter the step size of the table (0.01 - 6.26): " );
          scanf("%d", &r_to_d);
          break;
      default:
          printf("Invalid input, please try again. \n" );
          goto ineligible;
  }

   return 0;
}

/* function returning the max between two numbers */
int max(int num1 , int num2) {

   /* local variable declaration */
   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;
      printf("%d\n",result );
   return result;
}
