#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(void){
	int t1;
	int t2;

	srand(time(NULL));
	t1 = rand()%10;
	t2 = rand()%10;

	pid_t fils_1;
	pid_t fils_2;

	fils_1 = fork();
	fils_2 = fork();

	if((fils_1==0) && (fils_2!=0)){
		sleep(t1);
		if(t1>=t2){printf("\nTotal : %d\n", t1+t2);}
	}
	if((fils_2==0)  && (fils_1!=0)){
		sleep(t2);
		if(t2>=t1){printf("\nTotal : %d\n", t1+t2);}
	}
}
