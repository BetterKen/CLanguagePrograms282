#include <stdio.h>
#include <malloc.h>

typedef struct node {
    int num;
    struct node *next;
} Node, *LinkNode;

LinkNode createLink(int *, int);

void Joseph(LinkNode p, int m, int x);

LinkNode createLink(int *a, int n) {
    LinkNode head, p, pos;
    head = NULL;
    pos = NULL;
    for (int i = 0; i < n; ++i) {
        p = (LinkNode) malloc(sizeof(Node));
        p->num = a[i];
        if (head == NULL) {
            head = p;
            pos = head;
        } else {
            pos->next = p;
            pos = p;
        }
    }
    pos->next = head;
    return head;
}

void Joseph(LinkNode p, int m, int x) {
    LinkNode q;
    int i;
    if (x == 0) {
        return;
    }
    q = p;
    m = m % x;
    if (m == 0) {
        m = x;
    }
    for (i = 1; i <= m; ++i) {
        p = q;
        q = p->next;
    }
    p->next = q->next;
    i = q->num;
    printf("%d\t", i);
    free(q);
    Joseph(p, i, x - 1);
}


int main() {
    const int a[9] = {4, 7, 5, 9, 3, 2, 6, 1, 8};
    int pos;
    LinkNode head;
    head = createLink(a, 9);
    puts("请输入第一次计数值:");
    scanf("%d", &pos);
    Joseph(head, pos-1, 9);

    return 0;
}