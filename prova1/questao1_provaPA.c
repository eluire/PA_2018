#include <stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int * transmitArray(unsigned char dados[32]){

	int  *bin1, *bin2, *bin3, *bin4,dec = 0, *arr_envio;

	// aloca 4 arrays de inteiros e o array que será enviado 
	bin1 = (int *)malloc(8*sizeof(int));
	bin2 = (int *)malloc(8*sizeof(int));
	bin3 = (int *)malloc(8*sizeof(int));
	bin4 = (int *)malloc(8*sizeof(int));
	arr_envio = (int*)malloc(4*sizeof(int));
    
    // divide o array dados em 4 arrays de 8 bits
	for(int i=0;i<8;i++){

		bin1[i] = dados[i];
	}
	for(i=8;i<16;i++){

		bin2[i] = dados[i];
	}
	for(i=16;i<24;i++){

		bin3[i] = dados[i];
	}
	for(i=24;i<32;i++){

		bin4[i] = dados[i];
	}

 	// cada posição do array à ser enviado recebe o correspondente em decimal do array dividido
	arr_envio[0] = transform_bin_dec(bin1);
	arr_envio[1] = transform_bin_dec(bin2);
	arr_envio[2] = transform_bin_dec(bin3);
	arr_envio[3] = transform_bin_dec(bin4);

 	return arr_envio;
}
void  transmitByte(unsigned  char  byte){
	
	printf("transmitiu  byte  %d",  byte);

}

// função transforma binario em decimal
int transform_bin_dec(int * arr){

	int cont=0,decimal;
	for(i=7;cont<8;i--){
     if(arr[i]=='1'){
     	decimal+=pow(2,cont);
		}
	cont++;
	}
	return decimal;
}
int main()
{
	unsigned  char  dados[32];
	int  i;for(i=0;  i<32;  i++){
		dados[i]  =  rand()%2;
	}
	transmitArray(dados);
	return 0;
}