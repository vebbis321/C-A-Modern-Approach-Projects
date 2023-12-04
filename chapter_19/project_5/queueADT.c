#include "queueADT.h"
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 100

struct queue_type {
    Item contents[QUEUE_SIZE];
    int dequeueIdx;
    int enqueueIdx;
    int items;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(void)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL) terminate("Error in create: stack could not be created.");
    q->items = 0;
    q->enqueueIdx = 0;
    q->dequeueIdx = 0;
    return q;
}

void destroy(Queue q) { free(q); }

void enqueue(Queue q, Item i)
{
    if (is_full(q)) { terminate("Error in push: stack is full."); }

    q->contents[q->enqueueIdx] = i;
    q->enqueueIdx++;
    q->items++;
}

Item dequeue(Queue q)
{
    if (is_empty(q)) { terminate("Error in dequeue: queue is empty."); }

    int i;
    Item dequeued = q->contents[0];

    q->items--;

    for (i = 0; i < q->items; i++) {
        q->contents[i] = q->contents[i + 1];
    }

    return dequeued;
}

bool is_full(Queue q) { return q->items == QUEUE_SIZE; }
bool is_empty(Queue q) { return q->items == 0; }
