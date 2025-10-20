void imprimirMatriz(int n, int matriz[n][n]) {
    printf("\nMatriz:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}