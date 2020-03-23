#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define STACK_SIZE 10

typedef int DataType;

typedef struct {
    DataType *base;
    DataType *top;
    DataType stack_size;
} SeqStack, *PStack;


void Initial(PStack);

int IsEmpty(PStack);

int IsFull(PStack);

void Push(PStack, DataType);

DataType Pop(PStack);

#endif