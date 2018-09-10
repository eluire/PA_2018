#include <stdio.h>
#include <stdlib.h>

float * BubbleSort(float *arr, int n){
	int aux, i, j;
	for(j=n-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(arr[i]>arr[i+1]){
				aux=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=aux;
            }
        }
    }

	return arr;

}
void show_array(float *arr,int n){

	printf("[");

	for(int i=0;i<n;i++){

		printf("%f ",arr[i]);
	}
	printf("]\n");
 	
}
float * set_array(float *arr,int n){

	float aux;
	int i;

	printf("\n Digite os elementos do array ");

	for(i=0;i<n;i++){

		scanf("%f",&aux);
		arr[i] = aux;

	}
	return arr;
}

int main()
{
	float *arr; 
	int n;
	printf("\n quanto elementos o array terá? ");
	scanf("\n %d",&n);
	arr = (float *) malloc(n*sizeof(float));
	printf("\npreencha o array. ");
	set_array(arr,n);
	printf("\narray desordenado. ");
	show_array(arr,n);
	printf("\narray ordenado. ");
	BubbleSort(arr,n);
	show_array(arr,n);


	return 0;
}