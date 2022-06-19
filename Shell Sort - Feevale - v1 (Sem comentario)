#include <stdio.h>

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

void imprimeArray(int array[], int size){
    
    for(int i = 0; i < size; i++){
        printf("%d", array[i]);
    }
}

int main()
{
    int vetor[10] = {9,8,7,6,5,4,3,2,1,0};
    int size = sizeof(vetor) / sizeof(vetor[0]);
    
    shellSort(vetor, size);
    imprimeArray(vetor, size);

    return 0;
}
