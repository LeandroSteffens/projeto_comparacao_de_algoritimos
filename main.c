#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define valor_max 100
#define valor_min 1

#include "bubblesort.h"
#include "insertionsort.h"
#include "selectionsort.h"
//#include "shellsort.h"
//#include "mergesort.h"
//#include "heapsort.h"
//#include "quicksort.h"

int main(){

    int opcao, tam_vetor, i, *vetor;
    
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
                    break;
            
                case 2:
                    for (i = tam_vetor; i >= tam_vetor; i--)
                        vetor[i] = i;

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
    printf("\n(8) - Outro");
    printf("\n(9) - Sair\n");

    scanf("%i", &opcao);
    switch (opcao){

        //Executando o Bubblesort
        case 1:

            bubblesort(tam_vetor, vetor);
            main();
            break;

        //Executando o Insertionsort
        case 2:
            insertionsort(tam_vetor, vetor);
        break;

        //Executando o Selectionsort
        case 3:
            selectionsort(tam_vetor, vetor);
        break;

        //Executando o Shellsort
        //case 4:

            //shellsort();
        //break;

        //Executando o Mergesort
        //case 5:

            //mergesort();
        //break;

        //Executando o Heapsort
        //case 6:

            //heapsort();
        //break;

        //Executando o Quicksort
        //case 7:

            //quicksort();
        //break;

        //Executando o Outro
        //case 8:
            
        //break;

        //Sair do programa
        case 9:
            exit(1);
        break;

        default:
            main();
        break;
    }
    free(vetor);
}