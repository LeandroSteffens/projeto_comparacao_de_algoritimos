#include <stdio.h>
#include <stdlib.h>

#include "bubblesort.h"

int main(){


    int opcao;


    opcao = 0;

    printf("\nComparacao de algoritimos de ordenacao");
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
            bubblesort();
            break;

        //Executando o Insertionsort
        case 2:
        
            break;

        //Executando o Selectionsort
        case 3:
        
            break;

        //Executando o Shellsort
        case 4:
            
            break;

        //Executando o Mergesort
        case 5:
            
            break;

        //Executando o Heapsort
        case 6:
         
            break;

        //Executando o Quicksort
        case 7:
         
            break;

        //Executando o Outro
        case 8:
            
        break;

        //Sair do programa
        case 9:
            exit(1);
        break;

        default:
            main();
        break;
    }
}