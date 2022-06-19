#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 200000
#define RANDOM 10000

void shellSort(int array[], int size){
    
    for(int mid = size /2; mid > 0; mid /= 2){
        for(int i = mid; i < size; i += 1){
            int aux = array[i];
            int j;
            for(j = i; j >= mid && array[j - mid] > aux; j -= mid){
                array[j] = array[j - mid];
            }
            array[j] = aux;
            
        }
    }
}

void criaVetor(int array[]){
    int i;
    srand(time(NULL));
    for(i=0; i<TAM; i++){
        array[i] = rand()%(RANDOM+1);
    }
}

void imprimeArray(int array[], int size){
    
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main()
{
    //int vetor[10] = {9,8,7,6,5,4,3,2,1,0};
    int vetor[TAM];
    clock_t inicio, fim;
    double dif;
    int size = sizeof(vetor) / sizeof(vetor[0]);
    
    criaVetor(vetor);
    inicio = clock();
    shellSort(vetor, size);
    fim = clock();
    imprimeArray(vetor, size);
    dif = fim - inicio;
    printf("\nTempo em ms: %10.4f", dif/(CLOCKS_PER_SEC/1000));
    
    return 0;
}
