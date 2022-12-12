#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
       int d;
       struct node * next;
}*new1,*start=NULL,*cur,*ptr ;

void create()
{
    char ch;
do
    {
        new1=(struct node*)malloc(sizeof(struct node*));
        new1->next=NULL;
        printf("\nenter element value:\n");
        scanf("%d",&new1->d);

if(start==NULL)
         {
             start=new1;
             cur=new1;
         }
         else

    {

        cur->next=new1;
        cur=new1;

        printf("\n Enter choice:\n(press n for exit)\n(press any value to continue)");

        ch=getche();
    }
   } while(ch!='n');
}
void display()
{
    ptr=start;
    while((ptr)!=NULL)
    {
        printf("%d->",ptr->d);
        ptr=ptr->next;
    }
        printf("NULL\n");
}
void insertbegin()
{


    struct node*new1;
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter element\n");
    scanf("%d",&new1->d);

if(start==NULL)
{
    start=new1;
    new1->next=NULL;
}
else{
    new1->next=start;
    start=new1;
}
}
void insertend()
{
    struct node*new1,*temp;
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter element\n");
    scanf("%d",&new1->d);
if(start==NULL)
{
    start=new1;
    new1->next=NULL;
}
else{
    temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new1;
        new1->next=NULL;

}
}
void insertbetweenbefore()
{
    int x;
    struct node*new1,*a,*b;
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter element\n");
    scanf("%d",&new1->d);
    printf("\nenter a value of a given node after you want to insert a new node\n");
    scanf("%d",&x);
    b=a=start;
    if (start==NULL)
    {
        printf("empty");
    }
    else{
        start->d==x;

        a=a->next;
        while(b->next=NULL)
        new1->next=b;
        a->next=new1;
    }

}

void firstnodedeletion()
{

    struct node *temp;
      temp=start;
    start=start->next;
    free(temp);


}

void deletionlastnode()

{
    struct node *pre,*pos;
    pre=start;
    pos=start;
    while(pos->next!=NULL)
    {

        pre=pos;
        pos=pos->next;
    }
    pre->next=NULL;
    free(pos);
}
void deleteanynode()
{
    int value;
    struct node *a,*b;
    a=start;
    b=start;

    printf("enter value");
    scanf("%d",&value);

    while(b->d!=value)
    {
        a=b;
        b=b->next;
    }
    a->next=b->next;

}


void main()
{
    int i,n;
    printf("HELLO");
    do {
            printf("\nEnter your choice:\n1.Create\n2.Display\n3.Insert at beginning\n4.Insert at end\n5.insert between before\n6.first node deletion\n7.last node deletion\n8.delete any node\n9.exit");
            scanf("%d",&i);
            switch(i)
            {
                case 1:
                    create();
                    break;
                case 2:
                    display();
                    break;
                case 3:
                    insertbegin();
                    break;
                case 4:
                    insertend();
                    break;
                case 5:
                    insertbetweenbefore();
                    break;
                case 6:
                    firstnodedeletion();
                    break;
                case 7:
                    deletionlastnode();
                    break;
                case 8:
                    deleteanynode();
                    break;
                case 9:
                    printf("exit");


                default:
                    printf("invalid input");
                    break;

            }
        }while(i!=9);
}



