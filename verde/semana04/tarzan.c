#include<stdio.h>
#include<math.h>
/* 2 ≤ N ≤ 1000
1 ≤ D ≤ 5000
0 ≤ Xi, Yi ≤ 5000
*/

int main(){
  int N, D;
  scanf("%d %d", &N, &D);

  int x[1000], y[1000];

  for(int i = 0; i < N; i++){
    scanf("%d %d", &x[i], &y[i]);
  }

  int visitado[1000] = {0};
  int fila[1000];
  int inicio = 0, fim = 0;

  visitado[0] = 1;
  fila[fim++] = 0;

  while(inicio < fim){
    int a = fila[inicio++];

    for(int i = 0; i < N; i++){
      if(!visitado[i]){
        double dx = x[a] - x[i];
        double dy = y[a] - y[i];
        double dist = sqrt(dx*dx + dy*dy);

        if(dist <= D){
          visitado[i] = 1;
          fila[fim++] = i;
        }
      }
    }
  }

  for (int i = 0; i < N; i++) {
    if (!visitado[i]) {
      printf("N\n");
      return 0;
    }
  }

    printf("S\n");
    return 0;
}