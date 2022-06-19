void selectionsort (int tam_vetor, int *vetor) {
int i, j, aux, min;
	for ( i = 0; i < (tam_vetor -1); i ++) {
		min = i;
		for (j = i +1; j < tam_vetor; j++) {
			if (vetor [j] < vetor [min]) {
				min = j;
			}
		}
	aux = vetor [min];
	vetor [min] = vetor [i];
	vetor [i] = aux;
	}
	
	//imprimindo vetor
	for (i = 0; i < tam_vetor; i++)
		printf("%d ", vetor[i]);
 }