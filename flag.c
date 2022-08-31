#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <unistd.h>

#include "../../shared/kernels_lib.c"

#include <dlfcn.h>

#include <openssl/evp.h>

#include <unistd.h>





int main(int argc, char* argv[]) {

	FILE* issa_me;

	char mario[100];

	issa_me = fopen("../user.txt","r");

	fscanf(issa_me, "%20s" , mario);

	printf("%s\n",mario);



	call_me();

	return 0;

}

