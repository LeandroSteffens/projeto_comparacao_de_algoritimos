void bubblesort (int tam_vetor, int *vetor) {
    int i, j, aux;
    
    for (i = 1; i < tam_vetor ; i++) {
        for(j =0; j < (tam_vetor - i); j++) {
            if(vetor[j] > vetor[j + 1]) {
                aux = vetor [ j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    for (i = 0; i < tam_vetor ; i++) {
        printf("%d ", vetor[i]);
    }
}