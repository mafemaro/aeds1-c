#include <stdio.h>

int main(){
  int C;
  scanf("%d",&C);

  int v[C];
  for(int i=0;i<C;i++) scanf("%d",&v[i]);

  if(v[0]==0||v[C-1]==0){
    printf("-1\n");
    return 0;
  }

  int fila[C],dist[C];
  for(int i=0;i<C;i++) dist[i]=-1;

  int ini=0,fim=0;
  fila[fim++]=0;
  dist[0]=0;

  while(ini<fim){
    int x=fila[ini++];

    if(x==C-1){
    printf("%d\n",dist[x]);
    return 0;
  }

  if(x+1<C && v[x+1]==1 && dist[x+1]==-1){
    dist[x+1]=dist[x]+1;
    fila[fim++]=x+1;
  }

  if(x+2<C && v[x+2]==1 && dist[x+2]==-1){
    dist[x+2]=dist[x]+1;
    fila[fim++]=x+2;
    }
  }

  printf("-1\n");
  return 0;
}
