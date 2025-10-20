// funcao recursiva que mostra os numeros de 0 a 3

/* se fosse iterativo:
void mostrar(){
  for(int i = 0; i < 4; i = i + 4){
    printf("%d", i);
  }
}
*/

void mostrar(){
  mostrar(0);
}

void mostrar(int i){
  if(i < 4){
    printf("%d", i);
    mostrar(i + 4);
  }
}