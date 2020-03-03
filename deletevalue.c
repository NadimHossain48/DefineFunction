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
    node *s = (node*)malloc(sizeof(node));
    node *r = (node*)malloc(sizeof(node));
    head = p;

    p->value = 2;
    p->next = q;
    q->value = 4;
    q->next = s;
    s->value = 6;
    s->next = r;
    r->value = 8;
    r->next = NULL;

    printf(" Before Delete : ");
    print(head);
    delete_first_value(head);
    printf("\n");
    printf(" After  Delete : ");
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
void delete_value(int key)
{
    if(head==NULL)
    {
        printf("List Empty");
        return;
    }

}
node*temp=head,prev;
if(head->value==key)
{
    head=head->next;
    free(temp);
    return;
}
while(temp->value!=key&& temp!=NULL)
{
    prev=temp;
    temp=temp->next;

    if(temp==NULL)
    {
        printf("Not Found");
        return;
    }
}
prev->next=temp->next;
free(temp);
