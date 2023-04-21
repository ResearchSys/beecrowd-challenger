#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int min, max,pass, i, total = 0, h;

    while((scanf("%d", &pass)) != EOF){
        total = 0;
        scanf("%d %d", &min, &max);

        for(i = 0; i < pass; i++){
            scanf("%d", &h);

            if(h >= min && h <= max){
                total++;
            }
        }
        printf("%d\n", total);
    }

    return 0;
}
