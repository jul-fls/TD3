#include <stdlib.h>
#include <stdio.h>
void main() {
	long n = 0, nbdel;
	char nvalues[1000];
	printf("Choisir une valeur pour n :");
	scanf("%d", &n);
	printf("Vous avez choisi la valeur %d !\nAllons-y !\n", n);
	for (int i = 0;i < n;i++) {
		printf("Entrer la valeur numero %d :\n", i + 1);
		scanf("%d", &nvalues[i]);
	}
	printf("Choisir une valeur a retirer :");
	scanf("%d", &nbdel);
	for (int i = 0;i < n;i++) {
		if (nvalues[i] != nbdel) {
			printf("%d ", nvalues[i]);
		}
	}
}