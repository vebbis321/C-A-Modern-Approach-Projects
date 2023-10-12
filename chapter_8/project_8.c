#include <stdio.h>

#define STUDENTS 5
#define QUIZ 5

int main(void) {

    int a[STUDENTS][QUIZ] = {0};
    int total_score_s[STUDENTS] = {0};
    double average_for_quiz[QUIZ] = {0};
    int high_for_quiz[QUIZ] = {0};
    int low_for_quiz[QUIZ] = {0};

    for (int student = 0; student < STUDENTS; student++) {
        printf("Enter student quiz %d: ", student + 1);

        scanf("%d %d %d %d %d", &a[student][0], &a[student][1], &a[student][2],
              &a[student][3], &a[student][4]);
    }

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            total_score_s[row] += a[row][col];
            average_for_quiz[row] += a[col][row];

            if (col == 4) {
                average_for_quiz[row] /= 5;
            }

            if (high_for_quiz[row] < a[col][row]) {
                high_for_quiz[row] = a[col][row];
            }

            if (low_for_quiz[row] > a[col][row] || low_for_quiz[row] == 0) {
                low_for_quiz[row] = a[col][row];
            }
        }
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d total and average: %d %lf\n", i + 1,
               total_score_s[i], (double)(total_score_s[i] / 5.0));
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("Quiz %d average, high and low score: %lf %d %d\n", i + 1,
               average_for_quiz[i], high_for_quiz[i], low_for_quiz[i]);
    }

    return 0;
}
