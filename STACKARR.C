#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
clrscr();
top=-1;
printf ("\n Enter the size of STACK[MAX=100]:");
scanf ("%d",&n);
printf ("\n\t STACK OPERATING USING ARRAY");
printf ("\n\t 1.PUSH\n\t 3.DISPLAY\n\t 4.EXIT");
do
{
printf("\n Enter the Choice:");
scanf ("%d",&choice);
switch (choice)
{
case 1:{
    push();
    break;
    }

case 2:{
    pop();
    break();
    {

case 3:{
    display();
    break();
    }

case 4:{
    printf ("\n\t EXIT POINT");
    break;
}
default:
{
printf ("\n\t Please Enter the a valide choice(1/2/3/4/)");
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if (top>=n-1)
{
printf("\n\t STACK is over flow");
}
else
{
printf ("\n\t the popped elements is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0;i--)
printf ("\n%d,stack[i]");
printf ("\n Press Next Choice");
}
else
{
printf ("\n The Stack is empty");
}
}
}
