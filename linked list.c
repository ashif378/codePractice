#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

void print(struct node *n)
{
    while(n != NULL)
    {
        printf(" %d ", n -> data);
        n = n->next;

    }
}


int main()
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* end = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    end = (struct node*)malloc(sizeof(struct node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = end;

    end -> data = 3;
    end -> next = NULL;

    print(head);

    return 0;
}
