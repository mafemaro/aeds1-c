#include <stdio.h>
#include <string.h>

int main() {
    char string[100], invertido[100];
    
    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);

    size_t len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
        len--;  // ajustar o comprimento (eu esqueci de fazer isso pq ele puxa o \0 se nao fizer)
    }
    
    int j = 0;
    for (int i = len - 1; i >= 0; i--) {
        invertido[j] = string[i];
        j++;
    }
    invertido[j] = '\0';  // adicionar terminador nulo
    
    printf("String invertida: %s\n", invertido);
}