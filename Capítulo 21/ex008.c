#include <stdio.h>
#include <time.h>

int main() {
    time_t tictoc;
    struct tm *current_time;

    time(&tictoc);
    current_time = localtime(&tictoc);

    int hour = current_time->tm_hour;
    int minute = current_time->tm_min;
    int second = current_time->tm_sec;

    printf("Current time: %02d:%02d:%02d\n", hour, minute, second);

    return(0);
}
