#include<stdio.h<
#include<stdlib.h>
#inculde<unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5000
#endif

int main(){
	int n;
	char buffer[BUFFER_SIZE];
	while(n = read(STDIN_FILENO, buffer,BUFFSIZE ) > 0){
		if(write(STDOUT_FILENO, FILENO, buffer,n) != n){
			fprintf("Write error \n");
		}	
	}

	if(n < 0){
		fprintf(stderr, "read error");
	}

	return(0);
}
