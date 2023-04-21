#include <stdio.h>
int main() {

    int testes, contador = 1, resultado;
    char *sheldon = (char *) malloc(sizeof(char) * 7), *raj = (char *) malloc(sizeof(char) * 7);
    scanf("%i ", &testes);
    while (contador <= testes) {
        scanf("%s %s", sheldon, raj);
        resultado = 0;
        if (sheldon[0] == raj[0]) {
            if (raj[0] != 'p' || (sheldon[1] == raj[1] && raj[0] == 'p'))
                resultado = 1;
            if (sheldon[0] == 'p' && sheldon[1] == 'e' && raj[0] == 'p' && raj[1] == 'a')
                resultado = 2;
        }
        else {
            if (sheldon[0] == 't' && (raj[0] == 'S' || (raj[0] == 'p' && raj[1] == 'e')))
                resultado = 2;
            else if (sheldon[0] == 'S' && (raj[0] == 'l' || (raj[0] == 'p' && raj[1] == 'a')))
                resultado = 2;
            else if (sheldon[0] == 'l' && (raj[0] == 't' || (raj[0] == 'p' && raj[1] == 'e')))
                resultado = 2;
            else if (sheldon[0] == 'p' && sheldon[1] == 'e' && (raj[0] == 'S'))
                resultado = 2;
            else if (sheldon[0] == 'p' && sheldon[1] == 'a' && (raj[0] == 't' || raj[0] == 'l'))
                resultado = 2;
        }
        if (resultado < 1)
            printf("Caso #%i: Bazinga!\n", contador);
        else if (resultado > 1)
            printf("Caso #%i: Raj trapaceou!\n", contador);
        else
            printf("Caso #%i: De novo!\n", contador);
        contador++;
    }
    return 0;
}
