#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *palavra = (char *) malloc(sizeof(char) * 51);
    int indice, upper;
    
    while(gets(palavra) != NULL) {
        
        upper = 1;
        indice = 0;
        
        while (palavra[indice] != '\0') {
            
            if ((palavra[indice] > 64 && palavra[indice] < 91) || (palavra[indice] > 96 && palavra[indice] < 123)) {
                
                if (palavra[indice] > 64 && palavra[indice] < 91 && upper)
                    upper = 0;

                else if (palavra[indice] > 96 && palavra[indice] < 123 && upper == 0)
                    upper = 1;

                else if (upper) {
                    palavra[indice] -= 32;
                    upper = 0;
                }
                
                else {
                    palavra[indice] += 32;
                    upper = 1;
                }
            }
            
            printf("%c", palavra[indice]);
            indice++;
            
        }
        
        printf("\n");
    }
    
    return 0;
}
