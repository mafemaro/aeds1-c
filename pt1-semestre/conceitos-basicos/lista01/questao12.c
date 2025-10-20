// Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia

#include<stdio.h>

int main(){
    int hora, minuto, inicioDia;

    printf("Digite a hora e os minutos: ");
    scanf("%d %d", &hora, &minuto);

    inicioDia = (hora * 60) + minuto;

    printf("\n%d horas e %d minutos que se passaram se equivalem a %d minutos desde o inicio do dia.", hora, minuto, inicioDia);
}
