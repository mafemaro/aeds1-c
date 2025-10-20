#include<stdio.h>

// entrada: horas normais, horas extras
int main(){
    float horas, extra, salario, salarioExtra, total;

    scanf("%f %f", &horas, &extra);
,
    salario = horas * 25; // salario normal
    salarioExtra = extra * (25 + (25 * 0.5)); // salario hrs extras
    total = salarioExtra + salario;

    printf("\nSalario horas normais: %.2f \nSalario horas extras: %.2f \nSalario Total: %.2f\n", salario, salarioExtra, total);
}
