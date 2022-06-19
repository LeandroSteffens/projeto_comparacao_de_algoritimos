void insertionsort(int tam_vetor, int *vetor)
{
	int i, key, j;
	for (i = 1; i < tam_vetor; i++) {
		key = vetor[i];
		j = i - 1;

		while (j >= 0 && vetor[j] > key) {
			vetor[j + 1] = vetor[j];
			j = j - 1;
		}
		vetor[j + 1] = key;
	}
	//imprimindo vetor
	for (i = 1; i < tam_vetor; i++)
		printf("%d ", vetor[i]);
}

