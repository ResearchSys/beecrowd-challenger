#include <stdio.h>
#define fuel_consumption 12

int main(){
    int get_travel_time, media_velocity_hour;
    float spent_fuel, get_distance;

    printf("");
    scanf("%d%d", &get_travel_time, &media_velocity_hour);

    get_distance = (get_travel_time * media_velocity_hour);
    spent_fuel = (get_distance / fuel_consumption);

    printf("%.3f\n", spent_fuel);

    return 0;
}
