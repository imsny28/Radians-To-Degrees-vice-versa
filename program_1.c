#include <stdio.h>
#include <math.h>
#define PI 3.141593
float convert_d_to_r(int angleDegrees);
float convert_r_to_d(float angleRadians);
int main() {
  int   number;
  int   degree;
  float radians;
  float result;
  // student number, student name and the assignment number
  printf(" 7777777  Fateh Singh 1 \n");
  printf("Please select the table you would like to create \n");
  try_again:
  printf("1. Degrees to Radians or 2. Radians to Degrees : " );
  scanf("%d", &number);

  switch(number){

    case 1:
      printf("Please enter the step size of the table (1-359): " );
      scanf("%d", &degree);
      result = convert_d_to_r(degree);
      printf("\n %d degree | %.2f radians\n", degree, result);
      printf("\n");
      break;

    case 2:
      printf("Please enter the step size of the table (0.01 - 6.26): " );
      scanf("%f", &radians);
      result = convert_r_to_d(radians);
      printf("\n %.2f radians | %.2f degree\n", radians, result);
      printf("\n");
      break;

    default:
      printf("Invalid input, please try again. \n" );
      goto try_again;

  }
   return 0;
}
// Degrees to Radians
float convert_d_to_r(int angleDegrees) {
  float result ;
  result = ((angleDegrees)*(PI / 180.0));
  return result;
}

// Radians to Degrees
float convert_r_to_d(float angleRadians){
  float result ;
  result = ((angleRadians) * (180.0 / PI) );
  return result;
}
