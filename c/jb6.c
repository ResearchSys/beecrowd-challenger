#include <stdio.h>
#include <string.h>

int viraNumero(char str[]) {
    if (!strcmp(str, "pedra"))
        return 0;
    if (!strcmp(str, "papel"))
        return 1;
    return 2;
}

int main() {
    
    char dodo[9], leo[9], pepper[9];
    while (scanf("%s %s %s", dodo, leo, pepper) != EOF) {
        int r;
        int d, l, p;
        d = viraNumero(dodo);
        l = viraNumero(leo);
        p = viraNumero(pepper);
        if ((d == 1 && !l && !p)
        || (!d && l==2 && p==2)
        || (d==2 && l==1 && p==1))
            printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        else if ((!d && l==1 && !p)
        || (d==2 && !l && p==2)
        || (d==1 && l==2 && p==1))
            printf("Iron Maiden's gonna get you, no matter how far!\n");
        else if ((!d && !l && p==1)
        || (d==2 && l==2 && !p)
        || (d==1 && l==1 && p==2))
            printf("Urano perdeu algo muito precioso...\n");
        else
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    }
    
    return 0;
}
