int calcularSoma(int n, int matriz[n][n]) {
    int soma = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}