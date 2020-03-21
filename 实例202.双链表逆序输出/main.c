#include <stdio.h>
#include <malloc.h>

typedef struct node {
    int num;
    struct node *next;
    struct node *prior;
} DoubleNode, *LinkDoubleNode;


LinkDoubleNode createLinkDoubleNode(int);

LinkDoubleNode createLinkDoubleNode(int n) {
    LinkDoubleNode head, p, pos;
    for (int i = 0; i < n; ++i) {
        p = (LinkDoubleNode) malloc(sizeof(DoubleNode));
        printf("请输入第%d个元素:", i + 1);
        scanf("%d", &p->num);
        if (head == NULL) {
            p->next = NULL;
            p->prior = NULL;
            head = p;
        } else {
            pos->next = p;
            p->prior = pos;
            p->next = NULL;
        }
        pos = p;
    }
    return p;
}


int main() {
    LinkDoubleNode tail;
    tail = createLinkDoubleNode(5);
    while (tail) {
        printf("%d\t", tail->num);
        tail = tail->prior;
    }
}
