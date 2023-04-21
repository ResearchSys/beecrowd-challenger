#include <stdio.h>

int main(){
    int member_number, get_value_per_hours;
    float salary;

    printf("");
    scanf("%d%d%f", &member_number, &get_value_per_hours, &salary);

    salary = (salary * get_value_per_hours);

    printf("NUMBER = %d\nSALARY = U$ %.2f", member_number, salary);
}
