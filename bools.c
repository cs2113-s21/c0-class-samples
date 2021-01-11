#include <stdio.h>
#include <stdbool.h>

/* //replace the type bool with the type int */
/* typedef int bool; */

/* #define true 1 */
/* #define false 0 */

#define LIFE_THE_UNIVERSE_EVERYTHING 42

int main(){

  bool a = 10 < 20; //evaluates to 1

  if(a){
    printf("10 is less than 20!\n");
  }

  if( a == true){
    printf("a is true!\n");
  }

  if(!false){
    printf("It's not false!\n");
  }
}
