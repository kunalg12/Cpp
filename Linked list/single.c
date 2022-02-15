 
#include<stdio.h>
#include<stdlib.h>
 struct node
  {
   int data;
   struct node *next;
  }*newnode,*head,*tail;
 void create()
  {
    char ch;
    do
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter the data");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if (head == NULL)
      {
	head=newnode;
	tail=newnode;
      }
     else
     {
       tail->next=newnode;
       tail=newnode;
     }
     printf("Do you want to create another \n");

    }while(ch!='n');
  }
  void display()
  {
   struct node *temp;
   printf("The linked list is");
   temp=head;
   while(temp!=NULL)
    {
     printf("%3d",temp->data);
     temp=temp->next;
    }
  }
  void insert_at_begin()
  {
   newnode=(struct node*)malloc(sizeof(struct node));
   printf(" Enter the data");
   scanf("%d",&newnode->data);
   newnode->next=head;
   head=newnode;
  }
  void insert_at_end()
  {
   newnode=(struct node*)malloc(sizeof(struct node));
   printf(" Enter the data");
   scanf("%d",&newnode->data);
   tail->next=newnode;
   newnode->next=NULL;
   tail=newnode;
  }
  void insert_at_pos()
  {
   int i=1,count=0,pos;
   struct node *temp;
   temp=head;
   while(temp!=NULL)
    {
      count++;
      temp=temp->next;
    }
    printf("the length is %d \n ",count);
    printf("Enter the position \n");
    scanf("%d",&pos);
 if(pos>count)
   {
      printf("Invallid position");
   }
   else   {
  temp=head;
    while(i<(pos-1))
   {
    temp=temp->next;
    i++;
   }
   newnode=(struct node*)malloc(sizeof(struct node));
   printf(" Enter the data");
   scanf("%d",&newnode->data);
   newnode->next=temp->next;
   temp->next=newnode;
   }
  }

 void main()
{
  int no;
  while(1)
  {
   printf("\n1.Create\n");
   printf("2.display \n");
   printf("3.Insert at begin \n");
   printf("4.insert at end \n");
   printf("5 Insert at pos \n");

   printf("enter your choice");
   scanf("%d",&no);
   switch (no)
    {
      case 1: create();
	      break;
      case 2: display();
	      break;
      case 3: insert_at_begin();
	      break;
      case 4: insert_at_end();
	      break;
      case 5:insert_at_pos();
	      break;
      case 6: exit(0);
	      break;
      default:printf("invalid input");
    
    }
  }
 }
