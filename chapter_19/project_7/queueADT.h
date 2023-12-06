#ifndef QUEUEADT_H
#define QUEUEADT_H

#include <stdbool.h> /* C99+ only */

typedef int Item;
typedef struct queue_type *Queue;

Queue create(void);
void destroy(Queue q);
void enqueue(Queue q, Item i);
Item dequeue(Queue q);
bool is_full(Queue q);
bool is_empty(Queue q);

#endif // !QUEUEADT_H
