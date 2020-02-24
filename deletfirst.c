#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;

};
node *head = NULL;
int main()
{
    node *p = (node*)malloc(sizeof(node));
    node *q = (node*)malloc(sizeof(node));
    node *r = (node*)malloc(sizeof(node));
    head = p;

    p->value = 5;
    p->next = q;

    q->value = 6;
    q->next = r;

    r->value = 7;
    r->next = NULL;
    printf("Before delete : ");
    print(head);
    delete_first_value(head);
    //delete_last_value(head);
    printf("\n");
    printf("After delete : ");
    print(head);
    return 0;
}

void print(node *p)

{
    if(p==NULL)
    {

        printf("linked list is empty \n");

    }
    while(p!=NULL)
    {
        printf("%d ",p->value);
        p = p->next;


    }
}
node*temp;
void delete_first_value(node*x)
{
    temp=head;
    head=head->next;
    free(temp);
}
node*temp;
node*second_last;
void delete_last_value(node*x)
{
    temp=head;
    second_last=head;
    while(temp->next != NULL)
    {
        second_last = temp;
        temp = temp->next;
    }

    if(temp == head)
    {
        head = NULL;
    }
    else
    {
        second_last->next = NULL;
    }

}
