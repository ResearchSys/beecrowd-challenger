#include <stdio.h>

int main(){
    int result, base = 9, expo = 1, control_expo = 3;

    for (control_expo; control_expo <= expo; control_expo++){
        result = (base * expo);
        printf("%d", result);
    }

    return 0;
}
