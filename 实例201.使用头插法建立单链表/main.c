#include <stdio.h>
#include <malloc.h>

typedef struct node {
    int num;
    struct node *next;
} LNode, *LinkNode;

LinkNode createLinkNode(int n) {
    LinkNode head, insert, p;
    head = (LinkNode) malloc(sizeof(LNode));
    head->num = 0;
    head->next = NULL;
    for (int i = 0; i < n; ++i) {
        int tmp;
        printf("请输入第%d个链表元素:", i + 1);
        scanf("%d", &tmp);
        insert = (LinkNode) malloc(sizeof(LNode));
        insert->num = tmp;
        p = head->next;
        head->next = insert;
        insert->next = p;

    }
    return head;
}

int main() {
    LinkNode head,p;
    head = createLinkNode(5);
    p = head->next;
    while (p) {
        printf("%d\t", p->num);
        p = p->next;
    }
}
