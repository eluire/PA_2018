#include <stdio.h>
void main2(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%p ",vet+i);
  }
}
// o função acima mostra o endereço de cada elemento do array vet
int main()
{
	 int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }

  main2();
  return 0;
}
// a função acima mostra o valor de cada elemento do array