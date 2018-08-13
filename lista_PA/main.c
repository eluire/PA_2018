#include <stdio.h>


    int main() {
        int i=3,j=5;
        int *p, *q;
        p = &i;
        q = &j;
        printf("%x %x ", p,q);
// o ponteiro p recebe o endereço de memoria em que a variável i está armazenada. o mesmo vale para
// ponteiro p .

    return 0;
    }
