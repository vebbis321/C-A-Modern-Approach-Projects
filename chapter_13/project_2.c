#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][3][MSG_LEN + 1];
    char date_str[5 + 1], time_str[5 + 1], msg_str[MSG_LEN + 1];
    int month, day, hours, minutes, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No spacer left --\n");
            break;
        }

        printf("Enter a date (mm/dd), 24-hour time (hh:mm) and reminder: ");
        scanf("%2d/%2d", &month, &day);

        if (month == 0)
            break;
        else if (day < 0 || day > 31 || month > 12 || month < 0) {
            printf("Invalid date");
            continue;
        }

        scanf("%2d:%2d", &hours, &minutes);

        sprintf(date_str, "%2d/%2d", month, day);
        sprintf(time_str, "%2d:%2d", hours, minutes);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(date_str, reminders[i][0]) < 0)
                break;
            else if (strcmp(date_str, reminders[i][0]) == 0 &&
                     strcmp(time_str, reminders[i][1]) < 0)
                break;

        for (j = num_remind; j > i; j--) {
            strcpy(reminders[j][0], reminders[j - 1][0]);
            strcpy(reminders[j][1], reminders[j - 1][1]);
            strcpy(reminders[j][2], reminders[j - 1][2]);
        }

        strcpy(reminders[i][0], date_str);
        strcpy(reminders[i][1], time_str);
        strcpy(reminders[i][2], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s %s %s\n", reminders[i][0], reminders[i][1],
               reminders[i][2]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n) str[i++] = ch;

    str[i] = '\0';
    return 0;
}
