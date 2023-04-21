#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n, x, i, ganhou=0;

    scanf("%i", &n);

    for(i=0; i<n; i++){
        scanf("%i", &x);

        if(x!=1){
           ganhou=ganhou+1;
        }
    }

    printf("%i\n", ganhou);



    return 0;
}
