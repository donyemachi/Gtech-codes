#include <sys/types.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include "../../shared/kernels_lib.c"

#include <dlfcn.h>

#include <openssl/evp.h>

#include <unistd.h>



void unsafe() {

  u_int64_t make_me_not_zero = 0;

  char buffer[10];

  printf("Gimme Dem Values!\n");

  read(0,buffer,200);

  if (make_me_not_zero != 0) {

	  //printf("got the flag\n");

	  call_me();

  }

}



int main(){

  unsafe();

  return 0;

}

