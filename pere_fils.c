#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	pid_t fils;
	fils = fork();
	if (fils == 0){
		printf("I'm the son : %d\n", getpid());
		printf("I'm the father: %d\n", getppid());
	}
}
