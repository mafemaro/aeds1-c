// ler notas entre (entre 0 e 100), para quando o valor digitado for negativo e mostrar a media da turma

#include<stdio.h>

int main(){
  int contador = 0;
  float notas, media, soma = 0; // soma das notas

  printf("Entre com o valor da nota: ");
  scanf("%f", &notas);
   
  // legal também fazer um verificador aqui de que se o usuario digitar uma nota maior que 100, o programa parar
  while(nota >= 0){
    soma += notas;
    contador++;
    printf("\nEntre com o valor da compra: ");
    scanf("%f, &notas");
  }
  
  /*
  do{
    printf("\nDigite a nota do aluno: ");
    scanf("%f", &notas);
    contador++;
    soma += notas;
  }while(notas >= 0)
  */

  media = soma/contador;

  if(contador > 0){
    printf("\nA media da turma eh: %.2f", media); // ou printf("\nA media da turma eh: %.2f", total_notas/count)
  }else{
    printf("\nNao eh possivel calcular a media!");
  }
}