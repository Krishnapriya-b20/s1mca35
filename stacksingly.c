#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node *top=NULL;
void push()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nNO space available\n");
return;
}
newnode->link=NULL;
printf("\nEnter the element to insert:");
scanf("%d",&newnode->data);
if(top==NULL)
{
top=newnode;
}
else
{
newnode->link=top;
top=newnode;
}
printf("\n%d Inserted successfully",newnode->data);
}
void pop()
{
struct node *temp=top;
if(top==NULL)
{
printf("\n Stack underflow");
return;
}
printf("\n %d is popped",temp->data);
top=temp->link;
free(temp);
}
void peek()
{
struct node *temp=top;
if(top==NULL)
{
printf("\n stack underflow");
return;
}
printf("TOp element is %d",temp->data);
}
void display()
{
struct node *temp=top;
if(top==NULL)
{
printf("\n No element");
return;
}
printf("\n Element is stack are:");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}}
void search()
{
struct node *temp=top;
int key,found=0;
if(top==NULL)
{
printf("\n stack underflow");
return ;
}
printf("\n Enter the element to search:");
scanf("%d",&key);
while(temp!=NULL)
{
if (temp->data==key)
{
printf("\n %d Element founded :",temp->data);
found=1;
}
temp=temp->link;
}
if(!found)
{
printf("\n element not found");
}
}
void main()
{
int choice;
do
{
printf("\n *** Stack operations****");
printf("\n 1.push()\n2.pop()\n3.peek()\n4.Display()\n5.search()\n6.Exit()");
printf("\nEnter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
search();
break;
case 6:
printf("\n Exit\n");
break;
default:
printf("Enter a valid choice");
}
}
while(choice!=6);
}
