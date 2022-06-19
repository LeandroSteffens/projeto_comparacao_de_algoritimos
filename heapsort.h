void constroi_heap(int *vetor, int i, int tam_vetor) {
    int maior, l, r, aux;
    maior = i;
    l = 2*i + 1;
    r = 2*i + 2;

    if (l<tam_vetor && vetor[l]>vetor[maior]) {
        maior = l;
    }

    if ((r<tam_vetor) && vetor[r]>vetor[maior]) {
        maior = r;
    }

    if (maior!=i) {
        aux = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = aux;
        constroi_heap(vetor, maior, tam_vetor);
    }
}

void heapsort(int tam_vetor, int *vetor) {
    int i, aux;
    for(i = (tam_vetor/2)-1; i >= 0; i--) {
        constroi_heap(vetor, i, tam_vetor);
    }
    for(i = tam_vetor-1; i >= 0; i--) {
        aux = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = aux;
        constroi_heap(vetor, 0, i);
    }

	for (i = 0; i < tam_vetor; i++)
		printf("%d ", vetor[i]);
}



