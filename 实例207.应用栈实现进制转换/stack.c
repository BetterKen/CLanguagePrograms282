#include <stdio.h>
#include <malloc.h>
#include "stack.h"

void Initial(SeqStack *s) {
    s->base = (DataType *) malloc(sizeof(DataType) * STACK_SIZE);
    s->top = s->base;
    s->stack_size = STACK_SIZE;
}

int IsEmpty(PStack s) {
    return s->base == s->top;
}

int IsFull(PStack s) {
    return s->top - s->base == STACK_SIZE - 1;
}

void Push(PStack s, DataType x) {
    s->top++;
    *s->top = x;
}

DataType Pop(PStack s) {
    return *(s->top)--;
}