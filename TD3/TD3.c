#include <stdlib.h>
#include <stdio.h>
void main() {
	int n;
	int nvalues[1000];
	printf("Choisir une valeur pour n :");
	scanf("%d", &n);
	printf("Vous avez choisi la valeur %d !\nAllons-y !\n", n);
	for (int i = 0;i < n;i++) {
		printf("Entrer la valeur numero %d :\n", i + 1);
		scanf("%d", &nvalues[i]);
	}
	for (int i = 0;i < n;i++) {
		printf("Valeur %d = %d\n", i+1, nvalues[i]);
	}
}
