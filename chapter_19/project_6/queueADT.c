#include "queueADT.h"
#include <stdio.h>
#include <stdlib.h>

struct queue_type {
    Item *contents;
    int dequeueIdx;
    int enqueueIdx;
    int items;
    int size;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(int size)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL) terminate("Error in create: queue could not be created.");

    q->contents = malloc(size * sizeof(Item));
    if (q->contents == NULL) {
        terminate("Error in create: queue could not be created");
        free(q);
    }
    q->items = 0;
    q->enqueueIdx = 0;
    q->dequeueIdx = 0;
    q->size = size;
    return q;
}

void destroy(Queue q)
{
    free(q->contents);
    free(q);
}

void enqueue(Queue q, Item i)
{
    if (is_full(q)) { terminate("Error in enqueue: queue is full."); }

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

bool is_full(Queue q) { return q->items == q->size; }
bool is_empty(Queue q) { return q->items == 0; }
