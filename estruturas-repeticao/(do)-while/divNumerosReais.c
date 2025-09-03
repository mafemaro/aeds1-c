// leia dois numeros reais e realize a divisao entre eles

#include<stdio.h>

int main(){
  float n1, n2, div;

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);

  do{
<<<<<<< HEAD
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
  }while(n2 == 0);
=======
    printf("\nDigite o segundo numero: ");
    scanf("%f", &n2);
  }while(num2 == 0)
>>>>>>> a6e5c8f8d30a62e8d6cf86828a72b571496fc4e2

  div = n1 / n2;

  printf("\nA divisao entre os numeros %.2f e %.2f eh: %.2f", n1, n2, div);
}