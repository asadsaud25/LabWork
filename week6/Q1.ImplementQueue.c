#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int item[MAX_SIZE];
    int front, rear, size;
} Queue;

void initQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

bool isEmpty(Queue *q) {
    return q->size == 0;
}

bool isFull(Queue *q) {
    return q->size == MAX_SIZE;
}

void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    q->rear = (q->rear + 1) % MAX_SIZE;
    q->item[q->rear] = value;
    q->size++;
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = q->item[q->front];
    q->front = (q->front + 1) % MAX_SIZE;
    q->size--;
    return value;
}

void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i;
    for (i = 0; i < q->size; i++) {
        int index = (q->front + i) % MAX_SIZE;
        printf("%d ", q->item[index]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initQueue(&q);
    int choice, value;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                value = dequeue(&q);
                if (value != -1) {
                    printf("Dequeued value: %d\n", value);
                }
                break;
            case 3:
                display(&q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

