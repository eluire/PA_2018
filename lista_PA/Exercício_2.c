#include <stdio.h>


    int main() {
        float i=3,j=5;
        float a;
        float *p, *q;
        p = &i;
        q = &j;
        printf("%x %x ", p,q);
// o ponteiro p recebe o endereço de memoria em que a variável i está armazenada. o mesmo vale para
// ponteiro p .
        p == &i;
// o oque está dentro do ponteiro é o endereço da variável i.
        *p - *q;
// o que está dentro do endereço que p aponta meno oque está dentro do endereço que q aponta
        **&p;
// 1- &p revela o endereço que o ponteiro p é armazenado, 2- *&p revela oq esta dentro desse endereço que
// por sua vez é o endereço da variável i(variável que ele está apontando), 3- **&p revela oque tem dentro
// do endereço que p aponta, justamente a variável 1.
       a = (3 - *p/(*q) + 7);
// a vai receber 3 - (o valor que está dentro do endereço que p aponta dividido pelo valor dentro do
//endereço que q aponta)+ 7.
       printf("%f",a);
       printf("\n %d",sizeof(float));
    return 0;
    }
