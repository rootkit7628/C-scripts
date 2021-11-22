#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	pid_t fils_1;
	pid_t fils_2;
	fils_1 = fork();
	fils_2 = fork();

	if ((fils_1 != 0) && (fils_2 != 0)){
	printf("I'm the father: %d\n", getppid());
	printf("I'm the son 1: %d\n", fils_1);
	printf("I'm the son 2: %d\n", fils_2);
	}
}
