#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(){

  FILE * in;

  if( NULL == (in = fopen("database-does-not-exist.txt", "r"))){
    //fprintf(stderr,"ERROR: fopen: %s\n", strerror(errno));
    fprintf(stderr,"ERROR:");
    perror("fopen");
    exit(1);
  }

  while(1){ //loop forever!

    char firstname[32];
    char lastname[32];
    int favint;
    float favfloat;

    //EOF => End of file
    if( EOF == fscanf(in, "%s %s %d %f",
		      firstname,
		      lastname,
		      &favint,
		      &favfloat)){
      break;
    }

    //fprintf(stdout, ...) is the same as using printf() 
    fprintf(stdout,"First Name: %s\n",firstname);
    fprintf(stdout,"Last Name: %s\n",lastname);
    fprintf(stdout,"Favorite numbers: %d %f\n", favint, favfloat);
    fprintf(stdout,"-----------------------\n");
  }
	     

}
