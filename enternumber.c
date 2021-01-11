#include <stdio.h>

int main(){

  float a=0,b=0;

  printf("Enter two numbers:\n");

  //read the input from the user

  scanf("%f %f",&a, &b); //store at the address of num

  printf("The sum is: %010.2f+%d=%.4f\n",a, (int) b,a+b);

  //& is the "address of" operator
  //
}
