#include "queueADT.h"
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 100

struct node {
    Item data;
    struct node *next;
};

struct queue_type {
    struct node *dequeueNode;
    struct node *enqueueNode;
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
    q->enqueueNode = NULL;
    q->dequeueNode = NULL;
    return q;
}

void destroy(Queue q) { free(q); }

void enqueue(Queue q, Item i)
{
    if (is_full(q)) { terminate("Error in push: stack is full."); }

    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL) terminate("Error in enqueue: queue is full");

    new_node->data = i;

    new_node->next = NULL;
    if (is_empty(q)) {
        q->enqueueNode = new_node;
        q->dequeueNode = new_node;
    }
    else {
        q->enqueueNode->next = new_node;
        q->enqueueNode = new_node;
    }
}

Item dequeue(Queue q)
{
    Item i;
    if (is_empty(q)) terminate("Error in dequeue: queue is empty");
    struct node *old_node = q->dequeueNode;
    i = old_node->data;
    q->dequeueNode = old_node->next;
    free(old_node);
    return i;
}

bool is_full(Queue q) { return false; }
bool is_empty(Queue q) { return q->dequeueNode == NULL; }
