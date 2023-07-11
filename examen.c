/*Construya un programa que, al leer el archivo de 
texto subido al aula virtual y que contiene errores 
ortográficos en la palabra "Ecuador", cada vez que localice 
esta palabra, reemplace la primera letra con mayúscula y 
escriba el nuevo texto corregido en otro archivo diferente.
 Además, muestre en pantalla cuantas palabras se corrigió 
 en total. Debe utilizar el concepto de "Función". */

 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_SIZE 20

void capitalize(char *word) {
    if (word[0] >= 'a' && word[0] <= 'z') {
        word[0] = toupper(word[0]);
    }
}
int main() {
    FILE *inputFile = fopen("tricolor.txt", "r");
    FILE *outputFile = fopen("output.csv", "w");
    if (!inputFile || !outputFile) {
        printf("Error opening files\n");
        
    }

    char word[MAX_WORD_SIZE];
    int totalCorrections = 0;
    while (fscanf(inputFile, "%s", word) != EOF) {
        if (strcmp(word, "ecuador") == 0) {
            capitalize(word);
            totalCorrections++;
        }
        fprintf(outputFile, "%s,", word);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Total de palabras corregidas: %d\n", totalCorrections);
    return 0;
}

