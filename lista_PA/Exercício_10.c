// TIPO x[4]
&x[0] = 4092
char = 1byte
int = 2 bytes
float = 4 bytes
double = 8 bytes

x+1, x+2, x+3:

 x + 1 == 4093 ; x + 2 == 4094 ; x + 4 = = 4095 ; // pula-se um byte para cada elemento do array


 x + 1 == 4094 ; x + 2 = 4096 ; x + 4 = = 4098 ; // pula-se dois byte para cada elemento do array


 x + 1 == 4096 ; x + 2 = 4100; x + 4 = 4108; // pula-se quatro bytes para cada elemento do array


 x + 1 == 4100; x + 2 = 4108; x + 4 = 4124; // pula-se oito byte para cada elemento do array
