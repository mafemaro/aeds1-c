void lerMatriz(int n, int matriz[n][n]) {
    int valor;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("\nDigite o valor do elemento [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
}