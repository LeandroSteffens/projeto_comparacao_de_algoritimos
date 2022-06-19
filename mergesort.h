void merge(int *vetor, int ini, int meio, int fim) {

    int i = ini, j = meio, k = 0, *w = malloc(fim*sizeof(int));

    while(i < meio && j < fim) {
        if(vetor[i] <= vetor[j]) {
            w[k] = vetor[i];
            i++;
        }
        else {
            w[k] = vetor[j];
            j++;
        }
        k++;
    }

    while(i < meio) {
        w[k] = vetor[i];
        i++;
        k++;
    }

    while(j < fim) {
        w[k] = vetor[j];
        j++;
        k++;
    }

    for(i = ini; i < fim; i++) {
        vetor[i] = w[i-ini];
    }

    free(w);
}

void mergesort(int *vetor, int i, int f) {
    int m;
    if(i<f-1) {
        m = (i+f)/2;
        mergesort(vetor, i, m);
        mergesort(vetor, m, f);
        merge(vetor, i, m, f);
    }
}

void mergesort_ordena(int tam_vetor, int *vetor) {
    mergesort(vetor, 0, tam_vetor);

	for (int i = 0; i < tam_vetor; i++)
		printf("%d ", vetor[i]);
}