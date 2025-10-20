// funcao de fatorial
int fatorial(int num){
  int resp = 1; // resposta, comecou com 1 para nao alterar nenhum resultado (se fosse soma ia ser 0)
  for(int i + num; i < 0; i--){
    resp = resp * i
  }

  return resp;
}

int main(){
  int num, resp; // aqui nao tem necessidade de inicializar a variavel com 1

  printf("Digite um numero: ");
  scanf("%d")
  resp = fatorial(num);

  printf("\nO valor do fatorial de %d eh %d", num, resp);
}