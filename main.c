#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define valor_max 100000
#define valor_min 1

#include "bubblesort.h"
#include "insertionsort.h"
#include "selectionsort.h"
#include "shellsort.h"
#include "mergesort.h"
#include "heapsort.h"
#include "quicksort.h"
#include "binaryInsertionsort.h"

int main(){

    int opcao, tam_vetor, i, j, *vetor;
    clock_t t;
    
    printf("\n\n\t\tComparacao de algoritimos de ordenacao");
    printf("\nDigite o tamanho do vetor: ");
        scanf("%d", &tam_vetor);
        vetor = malloc(tam_vetor*sizeof(int));
    
    printf("\nTipo de vetor desejado: ");
            printf("\n\n(1) - Vetor crescente");
            printf("\n(2) - Vetor decrescente");
            printf("\n(3) - Vetor aleatorio\n");
                scanf("%d", &opcao);

            switch (opcao){

                case 1:
                    for (i = 0; i <= tam_vetor; i++)
                        vetor[i] = i;
                    for (i = 0; i < tam_vetor; i ++)
                        printf ("%d ", vetor[i]);
                    break;
            
                case 2:
                    j = tam_vetor-1;
                    for (i = 0; i < tam_vetor; i++){
                        vetor[i] = j;
                        j--;
                    }
                    for (i = 0; i < tam_vetor; i ++)
                        printf ("%d ", vetor[i]);
                    break;

                case 3:
                    srand(time(0));
                    for (i = 0; i < tam_vetor; i ++)
                        vetor[i] = (rand () % valor_max) + valor_min;
                    for (i = 0; i < tam_vetor; i ++)
                        printf ("%d ", vetor[i]);
                    

                    break;
            
                default:
                    break;
            }

    printf("\nSelecione uma opcao abaixo:");
    printf("\n(1) - Bubblesort");
    printf("\n(2) - Insertionsort");
    printf("\n(3) - Selectionsort");
    printf("\n(4) - Shellsort");
    printf("\n(5) - Mergesort");
    printf("\n(6) - Heapsort");
    printf("\n(7) - Quicksort");
    printf("\n(8) - Binary Insetionsort");
    printf("\n(9) - Sair\n");

    scanf("%i", &opcao);
    switch (opcao){

        //Executando o Bubblesort
        case 1:
            //tempo gasto
            t = clock();
            
            //chamada da funcao
            bubblesort(tam_vetor, vetor);
            
            //tempo
            t = clock()-t;

            //imprimindo vetor
            for (i = 0; i < tam_vetor ; i++) 
                printf("%d ", vetor[i]);

            printf("\n tempo gasto = %lf", ((double)t)/((CLOCKS_PER_SEC)));
            
            free(vetor);
            main();
            break;

        //Executando o Insertionsort
        case 2:
            //tempo gasto
            t = clock();
            
            //chamada da funcao
            insertionsort(tam_vetor, vetor);
            
            //tempo
            t = clock()-t;

            //imprimindo vetor
            for (i = 0; i < tam_vetor ; i++) 
                printf("%d ", vetor[i]);

            printf("\n tempo gasto = %lf", ((double)t)/((CLOCKS_PER_SEC)));
            
            free(vetor);
            main();
            break;

        //Executando o Selectionsort
        case 3:
            //tempo gasto
            t = clock();
            
            //chamada da funcao
            selectionsort(tam_vetor, vetor);
            
            //tempo
            t = clock()-t;

            //imprimindo vetor
            for (i = 0; i < tam_vetor ; i++) 
                printf("%d ", vetor[i]);

            printf("\n tempo gasto = %lf", ((double)t)/((CLOCKS_PER_SEC)));
            
            free(vetor);
            main();
            break;

        //Executando o Shellsort
        case 4:
            //tempo gasto
            t = clock();
            
            //chamada da funcao
            shellsort(tam_vetor, vetor);
            
            //tempo
            t = clock()-t;

            //imprimindo vetor
            for (i = 0; i < tam_vetor ; i++) 
                printf("%d ", vetor[i]);

            printf("\n tempo gasto = %lf", ((double)t)/((CLOCKS_PER_SEC)));
            
            free(vetor);
            main();
            break;

        //Executando o Mergesort
        case 5:
            //tempo gasto
            t = clock();
            
            //chamada da funcao
            mergesort_ordena(tam_vetor, vetor);
            
            //tempo
            t = clock()-t;

            //imprimindo vetor
            for (i = 0; i < tam_vetor ; i++) 
                printf("%d ", vetor[i]);

            printf("\n tempo gasto = %lf", ((double)t)/((CLOCKS_PER_SEC)));
            
            free(vetor);
            main();
            break;

        //Executando o Heapsort
        case 6:
            //tempo gasto
            t = clock();
            
            //chamada da funcao
            heapsort(tam_vetor, vetor);
            
            //tempo
            t = clock()-t;

            //imprimindo vetor
            for (i = 0; i < tam_vetor ; i++) 
                printf("%d ", vetor[i]);

            printf("\n tempo gasto = %lf", ((double)t)/((CLOCKS_PER_SEC)));
            
            free(vetor);
            main();
            break;

        //Executando o Quicksort
        case 7:
            //tempo gasto
            t = clock();
            
            //chamada da funcao
            quicksort(vetor, 0, tam_vetor-1);
            
            //tempo
            t = clock()-t;

            //imprimindo vetor
            for (i = 0; i < tam_vetor ; i++) 
                printf("%d ", vetor[i]);

            printf("\n tempo gasto = %lf", ((double)t)/((CLOCKS_PER_SEC)));
            
            free(vetor);
            main();
            break;

        //Executando o Binary
        case 8:
            //tempo gasto
            t = clock();
            
            //chamada da funcao
            binary(vetor, tam_vetor);
            
            //tempo
            t = clock()-t;

            //imprimindo vetor
            for (i = 0; i < tam_vetor ; i++) 
                printf("%d ", vetor[i]);

            printf("\n tempo gasto = %lf", ((double)t)/((CLOCKS_PER_SEC)));
            
            free(vetor);
            main();
            break;

        //Sair do programa
        case 9:
            exit(1);
        break;

        default:
            free(vetor);
            main();
        break;
    }
    free(vetor);
}