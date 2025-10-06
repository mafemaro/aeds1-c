#include<stdio.h>
float funcaoA ( int n ) {
  if (n == 0 || n == 1) return 1;
  else return n * funcaoA (n - 1) ;
}

float funcaoB ( int N ) {
  if (N == 1) return 1.0;
  else return funcaoB (N - 1) + funcaoA (2* N -1) ;
}

int main () {
  int X;
  scanf ("%d", &X) ;
  printf ("%.2f", funcaoB(X)) ;
}
// saida: 
// x = 2 = 7.00
// x = 3 = 127.00