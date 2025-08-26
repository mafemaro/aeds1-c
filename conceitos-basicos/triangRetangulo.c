#include<stdio.h>
#include<math.h>

// entrada: catetos
// processamento: h² = c1² + c2², √h² = h ou √c1² + c2²
// saida: hipotenusa

int main(){
    float c1, c2, hipotenusa;

    scanf("%f %f", &c1, &c2);

    hipotenusa = pow(c1, 2) + pow(c2, 2);
    hipotenusa = sqrt(hipotenusa);

    printf("%.2f", hipotenusa);
}
