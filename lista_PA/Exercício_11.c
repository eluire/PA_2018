#include <stdio.h>

int main()
{
    char   v[4];
    int    x[4];
    float  y[4];
    double z[4];

    printf("v = {\n");    
    for(int i = 0; i < 4; i++) {
        printf("%p\n", v + i);
    }
    printf("}\n"); // o char ocupa 1 byte na memoria 


    printf("x = {\n");    
    for(int i = 0; i < 4; i++) {
        printf("%p\n", x + i);
    }
    printf("}\n"); // o int ocupa 4 bytes na memoria

    printf("y = {\n");    
    for(int i = 0; i < 4; i++) {
        printf("%p\n", y + i);
    }
    printf("}\n"); // o float ocupa 4 bytes na memória 
    
    printf("z = {\n");    
    for(int i = 0; i < 4; i++) {
        printf("%p\n", z + i); // o double ocupa 8bytes na memória
    }
    printf("}\n");

    return 0;
}

