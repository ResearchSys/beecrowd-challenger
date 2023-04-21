#include <string.h>

int getNum(char letra) {
    switch (letra) {
        case '1':
            return 1;
            break;
        case '2':
            return 2;
            break;
        case '3':
            return 3;
            break;
        case '4':
            return 4;
            break;
        case '5':
            return 5;
            break;
        case '6':
            return 6;
            break;
        case '7':
            return 7;
            break;
        case '8':
            return 8;
            break;
        case '9':
            return 9;
            break;
        default:
            return 0;
            break;
    }
}

int main() {
    
    int n, i;
    scanf("%d ", &n);
    
    while (n--) {
        char palavra[14];
        gets(palavra);
        
        int termos1 = getNum(palavra[2])*10 + getNum(palavra[3]);
        int termos2 = getNum(palavra[5])*100 + getNum(palavra[6])*10 + getNum(palavra[7]);
        int termos3 = getNum(palavra[11])*10 + getNum(palavra[12]);
        printf("%d\n", termos1 + termos2 + termos3);
    }

    return 0;
}
