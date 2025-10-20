#include <stdio.h>

// Função recursiva que retorna a soma dos degraus
int Degraus(int n){
    if(n == 0) return 0;          // caso base
    else return n + Degraus(n - 1); // passo recursivo
}

int main(){
    int n;
    printf("Quantos degraus voce precisa subir?: ");
    scanf("%d", &n);

    int total = Degraus(n);       // chama função recursiva

    // imprime cada degrau usando loop no main
    for(int i = 1; i <= n; i++){
        printf("Voce esta subindo o degrau %d!\n", i);
    }

    printf("Voce subiu todos os %d degraus! Soma total: %d\n", n, total);
}