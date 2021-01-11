#include <stdio.h>

int main(){

  FILE * out;

  out = fopen("helloworld.txt", "a");
  // "w" : overwrite or create new file if it doesn't exist
  // "r" : read a file (do not write to it)
  // "a" : append to the end of the file

  fprintf(out, "Hello, world\n");

  fclose(out);

}
