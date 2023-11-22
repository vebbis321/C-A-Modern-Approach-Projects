#include <stdio.h>
#include <string.h>

#define NAM_LEN 40

typedef struct {
    char first_name[30];
    char last_name[30];
} Name;

typedef struct {
    Name name;
    int age;
    int grades[5];
} Student;

typedef struct {
    char *name;
    int top_speed;
} Car;

void print_student(Student student);
Car build_car(const char *name, int speed);

int main(void)
{
    struct {
        int number;
        char name[NAM_LEN + 1];
        int on_hand;
    } part1 = {40, "Screwdriver", 10},
      part2 = {.number = 42, .on_hand = 2, .name = "hello"};

    part1.number = 33;
    // strcpy(part1.name, "yooo");

    printf("%d", part1.number);
    printf("%s", part1.name);
    printf("%s", part2.name);

    Student vebbis;

    vebbis.age = 26;
    strcpy(vebbis.name.first_name, "vebbis");

    printf("Print student age: ");
    print_student(vebbis);
    printf("\n");

    Student bjarne = vebbis;
    printf("\n %s %d", bjarne.name.first_name, bjarne.age);

    struct point {
        double x;
        double y;
    };

    struct point point1;
    point1.x = 2;

    printf("\n");

    // Car ferrari = build_car("Ferrari", 350);
    // printf("%s\n", ferrari.name);

    Car cars[] = {{"Lambo", 400}, {"Porche", 240}};
    printf("%p\n", cars[0].name);
    cars[0].name = "Ferrari iiiii";
    printf("%p\n", cars[0].name);

    union car_or_student {
        Car car;
        Student student;
    };

    union car_or_student a;
    a.student = (Student){.name = "Yes", .age = 42};
    printf("%d", a.student.age);
    printf("%d", a.car.top_speed);

    typedef struct {
        int tag;
        union {
            char str[40];
            long i;
        } u;
    } Str_or_long_int;

    Str_or_long_int str_or_long_int_arr[500];

    strcpy(str_or_long_int_arr[0].u.str, "Hello");

    str_or_long_int_arr[1].u.i = 200000000000;
    str_or_long_int_arr[1].tag = 1;

    printf("%s\n", str_or_long_int_arr[0].u.str);

    if (str_or_long_int_arr[1].tag == 1)
        printf("%lu\n", str_or_long_int_arr[1].u.i);

    typedef enum { IDLE, FAILED, SUCCESS } State;

    State state = 4;

    switch (state) {
    case IDLE: printf("IDLE"); break;
    case FAILED: printf("FAILED"); break;
    case SUCCESS: printf("SUCCESS"); break;
    default: printf("INVALID STATE");
    }
}

void print_student(Student student) { printf("%d", student.age); }
Car build_car(const char *name, int speed)
{
    Car car;
    strcpy(car.name, name);
    car.top_speed = speed;

    return car;
}
