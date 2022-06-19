#include <stdio.h>

void swapElement(int *a, int *b){ //Funcao p/ fazer a troca de posicoes
    int aux = *a;
    *a = *b;
    *b = aux;
}

void creatHeap(int array[], int size, int i){
    
    int largest = i;
    int leftSide = 2 * i + 1; 
    int rightSide = 2 * i + 2;
    
    if (leftSide < size && array[leftSide] > array[largest]) // Verifica se o filho da esquerda é maior que o pai. Se sim, filho é definido como maior elemento do vetor.
        largest = leftSide;
        
    if (rightSide < size && array[rightSide] > array[largest]) // Verifica se o filho da direita é maior que o pai. Se sim, filho é definido como maior elemento do vetor.
        largest = rightSide;
        
    if (largest != i){ // Se confirmado acima que um dos filhos é maior, filho se torna pai e vice-versa.
        swapElement(&array[i], &array[largest]);
        creatHeap(array, size, largest); // Repete o processo.
    }
}

void heapSort(int array[], int size){
    
    for (int i = size / 2 - 1; i >= 0; i--)
        creatHeap(array, size, i); // Cria o heap apartir dos dados. Define o primeiro pai (pai raiz) e segue a validacao da direita (meio) pra esquerda.
    
    for (int i = size - 1; i >=0; i--){ //Pega o maior elemento topo (pai raiz) e joga pra ultima posicao do vetor (i). Na proxima execucao, o vetor vai ser diminuido em tamanho -1 (size - 1). Depois recostroi o heap.
        swapElement(&array[0], &array[i]); 
        creatHeap(array, i, 0); //Aloca todos os maiores elementos p/ o fim do vetor até que todo o vetor seja percorrido.
    }
    
}

void printArray(int array[], int size){
    
    for (int i = 0; i < size; i++)
        printf("%d,", array[i]);
}


int main()
{
    int vetor[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(vetor) / sizeof(vetor[0]); //Pega o valor em bites da variavel e divide pelo numeros de bites da primeiro valor do array (int = 4)
    
    heapSort(vetor, size);
    printArray(vetor, size);

    return 0;
}
