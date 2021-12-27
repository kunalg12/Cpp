#include<stdio.h>
#include<conio.h>
#define N
int stack[N];
int top=-1;

void push()
{
int x;
printf ("enter the value");
scanf ("%d",&x);
if(top==N-1)
{
printf ("overflow");
}
else
{
top++;
stack[top]=x;
}
void pop()
{
int item;
if(top==-1)
{
printf ("underflow");
}
else
{
item==stack[top];
top--;
printf ("%d",item);
}
void peak()
{
if(top==-1)
{
printf ("stack is empty");
}
else
{
printf ("%d",stack[top]);
}
}
void main()
{
case 1: push();
break;
case 2: pop();
break;
case 3: peak();
break;
}
}
}
