#include <stdio.h>
#include <malloc.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    int n;
    struct Node *head, *p1, *p2;
    puts("请输入你想创建的节点个数:");
    scanf("%d", &n);
    puts("请输入整数:");
    for (int i = 0; i < n; ++i) {
        int tmp = 0;
        p1 = (struct Node*) malloc(sizeof(struct Node));
        scanf("%d", &tmp);
        p1->data = tmp;
        if (head == NULL) {
            head = p1;
            p2 = p1;
        } else {
            p2->next = p1;
            p2 = p1;
        }
    }
    p2->next = NULL;

    while (head) {
        printf("%d\n", head->data);
        head = head->next;
    }

}
