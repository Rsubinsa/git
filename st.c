#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
int top=-1,arr[5];
void main()
{
while(1)
{
int op;
printf("\n Stack operation");
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.Peek");
printf("\n 4.Display");
printf("\n 5.Exit");
printf("\n select your operation:");
scanf("%d",&op);
switch(op)
{
case 1:push();
break;
case 2:pop();
break;
case 3:peek();
break;
case 4:display();
break;
case 5:exit(0);
break;
default:printf("\n SELECT FROM 1,2,3,4,5: \n\n");
}
}
}
void push()
{
int n;
if(top>=4)
{
printf("stack overflow");
}
else
{
printf("\n enter the elements to be pushed: ");
scanf("%d",&n);
top=top+1;
arr[top]=n;
printf("%d added to stack \n\n",n);
}
}
void pop()
{
if(top==-1)
{
printf("\nstack underflow \n");
}
else
{
printf("\n%d popped\n",arr[top]);
top=top-1;
}
}
void peek()
{
if(top==-1)
{
printf("\n no elements in stack\n");
}
else
{
printf("\ntop element is %d\n",arr[top]);
}
}
void display()
{
if(top==-1)
{
printf("\n no elemens in stack\n");
}
else
{
printf("\n elements in stack:\n");
for(int i=top;i>=0;--i)
printf("%d\n",arr[i]);
}
}





