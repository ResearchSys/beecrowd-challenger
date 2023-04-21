#include <stdio.h>

int main(int argc, char **argv){
    int people_age_in_days, quantity_years, diference_days, quantity_months, quantity_days;

    scanf("%d", &people_age_in_days);

    quantity_years = (people_age_in_days / 365);
    diference_days = people_age_in_days % 365;
    quantity_months = diference_days / 30;
    quantity_days = diference_days % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", quantity_years, quantity_months, quantity_days);

    return 0;
}
