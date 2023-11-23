#include <stdio.h>

int main(void)
{

    typedef struct {
        int departure_time;
        int arrival_time;
    } Flight_Times;

    Flight_Times flight_times[] = {
        {.departure_time = 480, .arrival_time = 616},
        {.departure_time = 583, .arrival_time = 712},
        {.departure_time = 679, .arrival_time = 811},
        {.departure_time = 767, .arrival_time = 945},
        {.departure_time = 840, .arrival_time = 968},
        {.departure_time = 945, .arrival_time = 1075},
        {.departure_time = 1140, .arrival_time = 1280},
        {.departure_time = 1305, .arrival_time = 1338}};

    int user_time, hour, minute, i, j;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    for (i = 0, j = 1; j < sizeof(flight_times) / sizeof(flight_times[0]);
         j++, i++) {
        if (user_time <=
            flight_times[i].departure_time + (flight_times[j].departure_time -
                                              flight_times[i].departure_time) /
                                                 2) {
            printf("Closest departure and arrival time is %d and %d\n",
                   flight_times[i].departure_time,
                   flight_times[i].arrival_time);
            return 0;
        }
    }
    printf("Closest departure and arrival time is %d and %d\n",
           flight_times[i].departure_time, flight_times[i].arrival_time);

    return 0;
}
