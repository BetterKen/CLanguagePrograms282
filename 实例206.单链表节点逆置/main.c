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

    struct Node *p, *r;
    if (head1->next != NULL && head1->next->next != NULL) {
        p = head1;
        r = p->next;
        p->next = NULL;
        while (r){
            p = r;
            r = r->next;
            p->next = head1;
            head1 = p;
        }
    }

    while (1) {
        if (head1 == NULL) {
            break;
        }
        printf("%d\t", head1->data);
        head1 = head1->next;
    }

}
