#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int*** mallocMatrix(int x, int y, int z) {
    int ***matrix = (int ***)malloc(x * sizeof(int **));

	for(int i = 0; i < x; i++) {
        matrix[i] = (int **)malloc(y * sizeof(int *));
		
        for(int j = 0; j < y; j++)
			matrix[i][j] = (int *)malloc(z * sizeof(int));
	}

    return matrix;
}

void printMatrix(int ***matrix, int x, int y, int z) {
    for(int i = 0; i < x; i++) {
        printf("  [\n");
        for(int j = 0; j < y; j++) {
            printf("     [");
            for(int k = 0; k < z; k++) {
                printf(" %3d ",matrix[i][j][k]);
            }
            printf("]\n");
        }
        printf("  ]\n");
    }
    printf("]\n");
}

int main() {

    int x, y, z;
    printf("digite as dimenções x,y e z da matriz 3D respectivamente:");
    scanf("%d %d %d", &x, &y, &z);

    // alocando a matriz 3D na memória 
    int ***matrix = mallocMatrix(x, y, z);

    // preenchendo matriz com numeros aleatórios 
    srand(time(NULL));
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                matrix[i][j][k] = rand() % 100;
            }
        }
    }

    // alocando a matriz de copia 
    int ***copy_matrix = mallocMatrix(x, y, z);

    memcpy(copy_matrix, matrix, x * y * z * sizeof(int));

    printf("\nMatriz original: [\n");
    printMatrix(matrix, x, y, z);

    printf("\nMatrix copiada: [\n");
    printMatrix(copy_matrix, x, y, z);

    free(matrix);
    free(copy_matrix);

    return 0;

}
