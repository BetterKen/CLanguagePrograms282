#include <stdio.h>
#include <malloc.h>
#include <string.h>
typedef struct node{
    char name[20];
    struct node *next;
    struct node *pre;
} studentList;

studentList *createList(int);

studentList *searchList(studentList *, char *);

void *delListNode(studentList *);

studentList *createList(int n) {
    studentList *h, *p, *s;
    h = (studentList *) malloc(sizeof(studentList));
    h->name[0] = '\0';
    h->pre = NULL;
    h->next = NULL;
    p = h;

    for (int i = 0; i < n; ++i) {
        s = (studentList *) malloc(sizeof(studentList));
        p->next = s;
        printf("请输入第%d个同学名称:", i + 1);
        scanf("%s", s->name);
        s->pre = p;
        s->next = NULL;
        p = s;
    }
    p->next = NULL;
    return h;
}

studentList *searchList(studentList *List, char *name) {
    while (List->next) {
        if (strcmp(List->name, name) == 0) {
            return List;
        }
        List = List->next;
    }
    return NULL;
}

void *delListNode(studentList *Node) {
    studentList *pre, *next;
    pre = Node->pre;
    next = Node->next;
    pre->next = next;
    next->pre = pre;
    free(Node);
}

int main() {

    int n;
    studentList *head, *p1, *p2;
    char str[20] = "小明";
    puts("请输入你想创建的节点个数:");
    scanf("%d", &n);

    head = createList(n);
    p2 = searchList(head, str);
    if (p2 == NULL){
        printf("未找到小明!\n");
    } else{
        delListNode(p2);
    }
    p1 = head->next;
    while (p1) {
        printf("%s", p1->name);
        p1 = p1->next;
        if(p1 != NULL){
            printf("-->");
        }
    }
}
