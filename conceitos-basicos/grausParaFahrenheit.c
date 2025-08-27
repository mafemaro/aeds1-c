#include<stdio.h>

int main(){
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160)/5;

    printf("Celsius: %.2f C e Fahrenheit: %.2f F", celsius, fahrenheit);
}
