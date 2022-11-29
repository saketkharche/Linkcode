#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *addr;

}*start;
void display();
void create(int);

int main() {
    start=NULL;
    int ch;
    int n;
        printf("\n1-Create\n2-display\n3-Insert First\n4-Insert Middle\n5-insert last\n6-delete middle\n7-delete last\n8-search\n");
        scanf("%d",&ch);

    do {
        printf("\nEnter any number");
        scanf("%d",&n);
        create(n);
        display();
        printf("\nDo you want to continue press 1............\n");
        scanf("%d",&ch);
        printf("-------------------Thank you-------------------------");
        /*switch (ch) {

            case 1:
                create(n);
                //printf("\nEnter number to insret")
                break;

            case 2:
                display();
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;

            case 8:
                break;

            case 9:
                break;

        }*/
        printf("do you want to continue......\n");
        scanf("%d",&ch);
    } while (ch==1);
    return 0;
}

void create(int n)
{
    struct Node *newnode,*curr;
    newnode=malloc(sizeof (struct Node));
    newnode->data=n;
    newnode->addr=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else{
    curr=start;
        while (curr->addr!=NULL)
        {
            curr=curr->addr;
        }
        curr->addr=newnode;
    }
};

void display()
{
    struct Node *curr;
    if(start==NULL)
    {
        printf("\nLinked list is empty");

    }
    else
    {
        curr=start;
        printf("\n");
        while(curr!=NULL)
        {
            printf("|%d|%u|--> ",curr->data,curr->addr);
            curr=curr->addr;
        }
    }
};