#include <stdio.h>

int main() {
    
    char *palavra = (char *) malloc(sizeof(char) * 8);
 
    while (scanf(" %[^\n]", palavra) != EOF) {
        
        switch(palavra[0]) {
            case 'e': printf("ingles\n"); break;
            case 'd': printf("frances\n"); break;
            case 'n': printf("portugues\n"); break;
            default: printf("caiu\n"); break;
        }
    
    }

    return 0;
}
