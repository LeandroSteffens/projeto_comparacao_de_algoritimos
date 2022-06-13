#define TAM 10

int bubblesort(){

    int numeros[TAM];
    int i, aux, contador;

    printf("Digite 10 numeros: \n");
    for (i = 0; i < TAM; i++){
        scanf("%d", &numeros[i]);
    }

    printf("Ordem atual dos numeros no array: \n");
    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

//Algoritmo de ordenação Bubblesort:
    for (contador = 1; contador < TAM; contador++) {
        for (i = 0; i < TAM - 1; i++) {
            if (numeros[i] > numeros[i + 1]) {
            aux = numeros[i];
            numeros[i] = numeros[i + 1];
            numeros[i + 1] = aux;
            }
        }
    }
    printf("\nOrdem dos numeros no array apos o Bubblesort: \n");
    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }
    printf("\n");
return 0;
}