#include <stdio.h>
#include <stdlib.h>

//função para mostrar o array 
void show_array(float *arr,int n){

    printf("[");

    for(int i=0;i<n;i++){

        printf("%f ",arr[i]);
    }
    printf("]\n");
}

// Função de comparação do qsort
int compare(const void * a, const void * b) {
  return ( *(float*)a - *(float*)b );
}

int main() {

    int n;
    //usuário digita a quantidade de elementos do array
    printf("Insira o numero de elementos do array");
    scanf("%d", &n);

    // Aloca o array com n elementos na memória 
    float *arr = (float *)malloc(n * sizeof(float));

    // pede para o usuário preencher o array
    printf("Preencha o array");
    for(int i = 0; i < n; i++) {
        scanf("%f", arr + i);
    }

    // Mostra o array inserido
    printf("\nArray inserido: ");
    printArray(arr, n);

    // Ordena e mostra o array inserido
    printf("\nArray ordenado: ");
    qsort(arr, n, sizeof(float), compare);
    printArray(arr, n);
    // libera o espaço de mamoria alocado para o array 
    free(arr);

    return 0;
}