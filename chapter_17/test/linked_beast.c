#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void insert(int val);
void delete(int val);
void printBeast();

int main(void)
{

    insert(10);
    insert(20);
    insert(30);

    printBeast();

    delete (20);
    printBeast();

    return 0;
}

void insert(int value)
{
    Node *newNode = calloc(1, sizeof(Node));
    newNode->data = value; // insted of (*newNode).data = value
    newNode->next = head;
    head = newNode;
}

void delete(int value)
{
    Node *previous = NULL;
    Node *current = head;
}

void *pointyPointer(char **yes) { printf("%s", *yes); }

char *po = "Yooo";
void **p = pointyPointer(&po);
