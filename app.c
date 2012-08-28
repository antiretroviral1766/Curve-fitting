#include<stdio.h>

int main(int argc, char* argv[]){

	int argument_count = argc;

	printf("\nNumber of arguments: %d\n\n", argc);

	while(argument_count != 0){
		int temp = argc-argument_count;
		printf("Argument %d: ",temp);
		printf("%s\n",argv[temp]);
		argument_count--;
		}

	printf("\n");
	return 0;
	}
