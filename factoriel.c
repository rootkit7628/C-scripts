#include <stdio.h>
#include <stdlib.h>

int fact(int val){
	return (val == 0)?  1 : (val *  fact(val - 1));
}

int main(){
	printf("Factorielle de 0 : %d\n", fact(0));
	printf("Factorielle de 7 : %d\n", fact(7));
}
