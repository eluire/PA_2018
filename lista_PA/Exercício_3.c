#include <stdio.h>


    int main() {
        int i=5, *p;
        p = &i;
        printf("%p %d %d %d %d\n", p,*p+2,**&p,3**p,**&p+4);
// se o endereço que i ocupa fosse 4094, printf("%p",p) mostraria 4094
//1- vai printar o endereço de i
//2- pegar oque tem no endereço que p aponta e somar 2
//3- printar o que está dentro do endereço que p aponta
//4- vai printar o que está dentro do endereço que p aponta e somar com 4
    return 0;
    }
