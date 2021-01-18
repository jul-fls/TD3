#include <stdlib.h>
#include <stdio.h>
void main() {
	long n = 0, sum = 0, min = 0, max = 0;
	int nvalues[1000];
	printf("Choisir une valeur pour n :");
	scanf("%d", &n);
	printf("Vous avez choisi la valeur %d !\nAllons-y !\n", n);
	for (int i = 0;i < n;i++) {
		printf("Entrer la valeur numero %d :\n", i + 1);
		scanf("%d", &nvalues[i]);
		if (i == 0) {
			min = max = nvalues[i];
		}
		sum += nvalues[i];
		if (nvalues[i] < min) {
			min = nvalues[i];
		}
		else if (nvalues[i] > max) {
			max = nvalues[i];
		}
	}
	for (int i = 0;i < n;i++) {
		printf("%d ", nvalues[i]);
	}
	printf("\nSomme = %d\nMinimum = %d\nMaximum = %d\n", sum, min, max);
}