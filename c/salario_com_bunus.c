#include <stdio.h>
#define VALUE_PERCENT 0.15

int main(int argc, char **argv){
    char sellers_name;
    double fixed_salary, sales_amount, final_salary, get_more;
    
    scanf("%s", &sellers_name);
    scanf("%lf%lf", &fixed_salary, &sales_amount);

    get_more = (sales_amount * VALUE_PERCENT);
    final_salary = get_more + fixed_salary;

    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}
