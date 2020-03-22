#include <stdio.h>
#include <malloc.h>


struct Node {
    int data;
    struct Node *next;
};

int main() {

    int n;
    struct Node *head1, *p1, *p2;
    head1 = NULL;
    puts("请输入你想创建的节点个数:");
    scanf("%d", &n);
    puts("请输入整数:");
    for (int i = 0; i < n; ++i) {
        int tmp = 0;
        p1 = (struct Node *) malloc(sizeof(struct Node));
        scanf("%d", &tmp);
        p1->data = tmp;
        if (head1 == NULL) {
            head1 = p1;
            p2 = p1;
        } else {
            p2->next = p1;
            p2 = p1;
        }
    }
    p2->next = NULL;

    int m;
    struct Node *head2, *q1, *q2;
    head2 = NULL;
    puts("请输入你想创建的节点个数:");
    scanf("%d", &m);
    puts("请输入整数:");
    for (int i = 0; i < m; ++i) {
        int tmp = 0;
        q1 = (struct Node *) malloc(sizeof(struct Node));
        scanf("%d", &tmp);
        q1->data = tmp;
        if (head2 == NULL) {
            head2 = q1;
            q2 = q1;
        } else {
            q2->next = q1;
            q2 = q1;
        }
    }
    q2->next = NULL;


    struct Node *head, *pos;
    head = head1;
    pos = head;
    while (1) {
        if (pos->next == NULL) {
            break;
        }
        pos = pos->next;
    }
    pos->next = head2;

    while (1) {
        if (head == NULL) {
            break;
        }
        printf("%d\t", head->data);
        head = head->next;
    }


}
