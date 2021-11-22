#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Crée le variable d'env PROF avec la valuer NIRINA
	setenv("PROF","NIRINA", 1);
	char *var = getenv("PROF");
	printf("Le professeur: %s\n", var);

	// Change la valeur de PROF avec JOSUE
	setenv("PROF","JOSUE", 1);
	var = getenv("PROF");
	printf("Le nouveau prof: %s\n", var);
}
