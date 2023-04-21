#include <stdio.h>

int main(int argc, char **argv){
    int time_in_seconds, hour, minute, seconds, rest;

    scanf("%d", &time_in_seconds);

    hour = time_in_seconds / 3600;
    rest = time_in_seconds % 3600;
    minute = rest / 60;
    seconds = rest % 60;

    printf("%d:%d:%d\n", hour, minute, seconds);

    return 0;
}
