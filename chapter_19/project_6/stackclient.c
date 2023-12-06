#include "queueADT.h"
#include <stdio.h>

int main(void)
{
    Queue q1, q2;
    Item i;

    q1 = create(100);
    q2 = create(200);

    enqueue(q1, 1);
    enqueue(q1, 22);

    i = dequeue(q1);
    printf("Popped %d from q1\n", i);
    enqueue(q2, i);
    i = dequeue(q1);
    printf("Popped %d from q1\n", i);
    enqueue(q2, i);

    destroy(q1);

    while (!is_empty(q2)) {
        printf("Popped %d from q2\n", dequeue(q2));
    }

    enqueue(q2, 420);
    if (is_empty(q2))
        printf("q2 is empty\n");
    else
        printf("q2 is not empty\n");

    destroy(q2);

    return 0;
}
