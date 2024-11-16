#include <stdio.h>
#include <stdlib.h>

void imprime_histograma(int tam, int *vetor, char **histo) {
    
	for(int i = 0; i < tam; i++) {
		printf("%d ", vetor[i]);
		for(int j = 0; j < vetor[i]; j++) {
			    printf("%c", histo[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int tam;
	scanf("%d", &tam);

	int vetor[tam];
	for(int i = 0; i < tam; i++) {
		scanf("%d", &vetor[i]);
	}

	char *histo[tam];
	for(int i = 0; i < tam; i++) {
		histo[i] = (char*) malloc(vetor[i] * sizeof(char));
	}
    
	for(int i = 0; i < tam; i++) {
		for(int j = 0; j < vetor[i]; j++) {
			histo[i][j] = '*';
		}
	}

	if(tam < 1)
        printf("vazio\n");
    else
        imprime_histograma(tam, vetor, histo);
	

	for(int i = 0; i < tam; i++) {
		free(histo[i]);
	}
	return 0;
}