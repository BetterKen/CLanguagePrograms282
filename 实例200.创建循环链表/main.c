#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct node {
    char ch;
    struct node *next;
} studentList;

studentList *createList();

studentList *createList() {

    studentList *head, *p, *tail;
    puts("请输入循环链表:");

    head = NULL;

    while (1) {
        char tc;
        tc = getchar();
        if (tc == '\n') {
            break;
        }
        p = (studentList *) malloc(sizeof(studentList));
        p->ch = tc;
        if (head == NULL) {
            head = p;
        } else {
            tail->next = p;
        }
        tail = p;
    }
    tail->next = head;
    return head;
}


int main() {

    studentList *head, *p;
    head = createList();
    p = head;
    do {
        printf("%c", p->ch);
        p = p->next;
    } while (p != head);
}
