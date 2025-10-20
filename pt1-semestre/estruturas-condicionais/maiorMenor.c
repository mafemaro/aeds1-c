#include<stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("Maior: %d", a);
    }else if(b > a && b > c){
        printf("Maior: %d", b);
    }else{
        printf("Maior: %d", c);
    }

    if(a < b && a < c){
        printf("Menor: %d", a);
    }else if(b < a && b < c){
        printf("Menor: %d", b);
    }else{
        printf("Menor: %d", c);
    }

}
