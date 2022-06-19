#include <stdio.h>

void shellSort(int array[], int size){
    
    for(int mid = size /2; mid > 0; mid /= 2){ //Dividir o tamanho do vetor em 2 p/ que os seguintes comandos olhem p/ os elementos antecendetes (0-4, 0-2, 0-1) e diminuir o intervalo a cada execucao
        for(int i = mid; i < size; i += 1){ //Percorrer os elementos antecendetes recebidos na seguinte maneira: 0-4, 1-5, 2-6, 3-7, 4-8
            int aux = array[i];
            int j;
            for(j = i; j >= mid && array[j - mid] > aux; j -= mid){ //Comparar o elemento recebido com seu antecendete especifico, baseado no tamanho do intervado definido pelo primeiro 'for'
                array[j] = array[j - mid]; // Se sim, meio atual recebe seu elemento antecendete (ex, elemento[4] recebe elemento[0])
            }
            array[j] = aux; //Caso o 'for' acima confirme, o valor de 'j' sera 'j-(intervalo atual)', onde acontece a troca inversa ao 'for' acima (ex, elemento[0] recebe elemento[4])
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
    int size = sizeof(vetor) / sizeof(vetor[0]); //Pega o valor em bites da variavel e divide pelo numeros de bites da primeiro valor do array (int = 4)
    
    shellSort(vetor, size);
    imprimeArray(vetor, size);

    return 0;
}
