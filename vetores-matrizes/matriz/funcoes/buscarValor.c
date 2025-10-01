void buscarValor(int n, int matriz[n][n]) {
    int valorBusca;
    int encontrado = 0;

    printf("\nDigite o valor que deseja buscar na matriz: ");
    scanf("%d", &valorBusca);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matriz[i][j] == valorBusca) {
              /* se quiser mostrar a posicao do numero encontrado: 
              printf("Valor %d encontrado na linha %d, coluna %d.\n", valorBusca, i + 1, j + 1); */
                encontrado = 1; // verdadeiro
            }
        }
    }

    if(encontrado == 1) {
        printf("Valor %d encontrado na matriz!", valorBusca);
    }else{
      printf("\nValor %d nao encontrado na matriz!", valorBusca);
    }
}