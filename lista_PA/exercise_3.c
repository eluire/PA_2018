#include <stdio.h>


    int main() {
        int i=5, *p;
        p = &i;
        printf("%ls %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

//1- vai printar o endereço de i
//2- pegar oque tem no endereço que p aponta e somar 2
//3- printar o que está dentro do endereço que p aponta
//4-
    return 0;
    }
