// Ler uma data (dia, mês e ano). Verificar e escrever se o ano é bissexto

#include<stdio.h>

int main(){
  int dia, mes, ano, temp;
  printf("Digite a data nesse formato: dia/mes/ano: ");
  scanf("%d/%d/%d", &dia, &mes, &ano);

  temp = (ano % 1000) / 100; 
  // variavel temporaria que transforma o valor do ano em dezena para conferir se ele eh divisivel por 4

  if(temp / 4 ==  0 && temp / 100 != 0 || temp / 400 == 0){
    printf("\nO ano %d eh bissexto", ano);
  }else{
    printf("\nO ano %d nao eh bissexto", ano);
  }
}