#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{

    int a[100] = {0};
    int n = 0;
    char ch;

    printf("Enter series of integers: ");

    do {
        scanf(" %d", &a[n]);
        n++;
    } while ((ch = getchar()) != '\n');

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    selection_sort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n)
{
    if (n == 0)
        return;

    int largest_index = 0;
    int temp;

    for (int i = 0; i < n; i++) {
        if (a[i] > a[largest_index])
            largest_index = i;
    }

    temp = a[n - 1];
    a[n - 1] = a[largest_index];
    a[largest_index] = temp;

    selection_sort(a, n - 1);
}
