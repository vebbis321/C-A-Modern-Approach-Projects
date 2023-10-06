#include <stdio.h>

int main(void) 
{

    int departure_times[8] = {
        480, 583, 679, 767,
        840, 945, 1140, 1305
    };

    int arrival_times[8] = {
        616, 712, 811, 900,
        968, 1075, 1260, 1438 
    };

    int user_time,
        hour,
        minute,
        closest_time,
        index = 0;
      
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    for (index = 0; index < 8; index++) {
        if (index == 7) break;
            
        if (user_time <= departure_times[index] + (departure_times[index + 1] - departure_times[index]) / 2)
            break;
    }


    printf("Closest departure time today is %d\n", departure_times[index]);
    printf("Arrival time is %d\n", arrival_times[index]);

    return 0;
}
