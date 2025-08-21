// Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa

#include<stdio.h>
#include<math.h>

int main(){
     float cateto1, cateto2, hipotenusa;

     printf("Digite os valores do cateto 1 e cateto 2: ");
     scanf("%f %f", &cateto1, &cateto2);

     hipotenusa = pow(cateto1,2) + pow(cateto2,2);
     hipotenusa = sqrt(hipotenusa);

     printf("\nHipotenusa: %.2f", hipotenusa);
}
