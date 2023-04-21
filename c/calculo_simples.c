#include <stdio.h>

int main(int argc, char **argv){
    int cod_part_x, quatity_part_x, cod_part_y, quatity_part_y;
    float total_price, total_price_x, total_price_y;

    scanf("%d%d%f", &cod_part_x, &quatity_part_x, &total_price_x);
    scanf("%d%d%f", &cod_part_y, &quatity_part_y, &total_price_y);

    total_price = ((quatity_part_x * total_price_x) + (quatity_part_y * total_price_y));

    printf("VALOR A PAGAR: R$ %.2f\n", total_price);

    return 0;
}
