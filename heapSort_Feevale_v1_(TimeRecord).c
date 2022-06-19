#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 200000
#define RANDOM 10000

void criaVetor(int array[]){
    int i;
    srand(time(NULL));
    for(i=0; i<TAM; i++){
        array[i] = rand()%(RANDOM+1);
    }
}

void swapElement(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void creatHeap(int array[], int size, int i){
    
    int largest = i;
    int leftSide = 2 * i + 1;
    int rightSide = 2 * i + 2;
    
    if (leftSide < size && array[leftSide] > array[largest])
        largest = leftSide;
        
    if (rightSide < size && array[rightSide] > array[largest])
        largest = rightSide;
        
    if (largest != i){
        swapElement(&array[i], &array[largest]);
        creatHeap(array, size, largest);
    }
}

void heapSort(int array[], int size){
    
    for (int i = size / 2 - 1; i >= 0; i--)
        creatHeap(array, size, i);
    
    for (int i = size - 1; i >=0; i--){
        swapElement(&array[0], &array[i]);
        creatHeap(array, i, 0);
    }
    
}

void printArray(int array[], int size){
    
    for (int i = 0; i < size; i++)
        printf("%d,", array[i]);
}


int main()
{
    //int vetor[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int vetor[TAM];
    int size = sizeof(vetor) / sizeof(vetor[0]);
    double dif;
    clock_t inicio, fim;
    
    criaVetor(vetor);
    inicio = clock();
    heapSort(vetor, size);
    fim = clock();
    
    //printArray(vetor, size);
    dif = fim - inicio;
    printf("\nTempo em ms: %10.4f", dif/(CLOCKS_PER_SEC/1000));

    return 0;
}
