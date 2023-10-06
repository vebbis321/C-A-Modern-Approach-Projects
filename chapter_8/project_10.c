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
        index, 
    min = 0, max = departure_times[7];
      
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;


    if (user_time <= departure_times[0] || user_time > departure_times[7]) {
        closest_time = departure_times[0];
    }

    for (index = 0; index < 8; index++) {


        if (index != 7) {
            if (departure_times[index] < user_time && user_time < departure_times[index + 1]) {
                closest_time = departure_times[index];
            } 
        }
    }

    printf("Closest departure time is %d", closest_time);

    return 0;
}
