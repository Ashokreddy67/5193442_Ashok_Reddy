

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SIZE 100000

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int x) {
    s->data[++s->top] = x;
}

int pop(Stack* s) {
    return s->data[s->top--];
}

int peek(Stack* s) {
    return s->data[s->top];
}

typedef struct {
    Stack stack1;
    Stack stack2;
} Queue;

void initQueue(Queue* q) {
    initStack(&q->stack1);
    initStack(&q->stack2);
}

void transfer(Queue* q) {
    if (isEmpty(&q->stack2)) {
        while (!isEmpty(&q->stack1)) {
            push(&q->stack2, pop(&q->stack1));
        }
    }
}

void enqueue(Queue* q, int x) {
    push(&q->stack1, x);
}

void dequeue(Queue* q) {
    transfer(q);
    pop(&q->stack2);
}

int front(Queue* q) {
    transfer(q);
    return peek(&q->stack2);
}

int main() {
    int n;
    scanf("%d", &n);
    
    Queue q;
    initQueue(&q);
    
    for (int i = 0; i < n; i++) {
        int type;
        scanf("%d", &type);
        
        if (type == 1) {
            int x;
            scanf("%d", &x);
            enqueue(&q, x);
        }
        else if (type == 2) {
            dequeue(&q);
        }
        else if (type == 3) {
            printf("%d\n", front(&q));
        }
    }
    
    return 0;
}
