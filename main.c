#include <stdio.h>

int x;
int cont=0;
int main(void) {
  printf("Digite um numero \n");
  scanf("%d",&x);
  for (int i = 1;i<=x;i++){
    if(x%i==0){
      cont++;
    }
  }  
  if (cont==2){
    printf("O número %d é primo \n", x);
  }else{
    printf("O número %d não é primo \n", x);
  }
  return 0;
}