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

    const char *suffix = (hour < 12) ? "a.m." : "p.m.";

    if (hour > 12) {
        hour -= 12;
    } else if (hour == 0) {
        hour = 12;
    }

    printf("Current time: %02d:%02d:%02d %s\n", hour, minute, second, suffix);

    return(0);
}