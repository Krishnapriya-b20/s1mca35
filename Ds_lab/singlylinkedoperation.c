#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*head=NULL;
void insertFirst()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n no space available");
return;
}
newnode->link=NULL;
printf("\n enter the value to insert:");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else
{
newnode->link=head;
head=newnode;
}
printf("Element is inserted %d",newnode->data);
}
void insertLast()
{
struct node*temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n No space available");
return;
}
newnode->link=NULL;
printf("\n Enter the element to insert at last:");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else
{
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=newnode;
}
printf("\nElement inserted successfully%d\n",newnode->data);
}
void insertLocation()
{
int key;
struct node*temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n No space available");
return;
}
newnode->link=NULL;
if(head==NULL)
{
printf("\n List is empty\n");
return;
}
printf("\n Enter the key where after you want to add element\n");
scanf("%d",&key);
while(temp!=NULL&&temp->data!=key)
{
temp=temp->link;
}
if(temp==NULL)
{
printf("\n value not exit\n");
return;
}
printf("\n enter the element to insert:");
scanf("%d",&newnode->data);
newnode->link=temp->link;
temp->link=newnode;
printf("value inserteed successfully %d",newnode->data);
}
void deleteFirst()
{
struct node*temp=head;
if(head==NULL)
{
printf("\n List Empty");
return;
}
head=temp->link;
printf("\n value deleted %d\n",temp->data);
free(temp);
}
void deleteLast()
{
struct node *temp=head,*prev=NULL;
if(head==NULL)
{
printf("\n empty list\n");
return;
}
if(temp->link==NULL)
{
printf("\n value%d deleted\n",temp->data);
head=NULL;
free(temp);
return;
}
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
printf("\nvalue %d deleted\n",temp->data);
prev->link=NULL;
free(temp);
}
void deleteLocation()
{
int key;
struct node*temp=head,*prev=NULL;
if(head==NULL)
{
printf("\n EMpty list\n");
return;
}
printf("\nEnter the key that you want to delete\n");
scanf("%d",&key);
if(temp->data==key)
{
head=temp->link;
printf("\n value%d is deleted\n",temp->data);
free(temp);
return;
}
while(temp!=NULL&&temp->data!=key)
{
prev=temp;
temp=temp->link;
}
if(temp==NULL)
{
printf("\n value not exit\n");
return;
}
prev->link=temp->link;
printf("value %d is deleted",temp->data);
free(temp);
}

void search()
{
struct node *temp=head;
int pos=0,found=0,val;
if(head==NULL)
{
printf("\n empty list");
return;
}
printf("\n enter the value to search:");
scanf("%d",&val);
while(temp!=NULL)
{
if(temp->data==val)
{
printf("%d value found at position %d\n",temp->data,pos+1);
found=1;
}
pos++;
temp=temp->link;
}
if(!found)
{
printf("value %d not exit",val);
}
}
void display()
{
struct node*temp=head;
if(temp==NULL)
{
printf("\nList empty");
return;
}
printf("\n element in the list\n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}}
void main()
{
int choice;
printf("\n singly linked list\n");
do
{
printf("\n1.InsertFirst\n2.InsertLast\n3.insertloction\n4.deletefirst\n5.deletelast\n6.deletelocation\n7.search\n8.display\n9.exit");
printf("\nEnter choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insertFirst();
break;
case 2:
insertLast();
break;
case 3:
insertLocation();
break;
case 4:
deleteFirst();
break;
case 5:
deleteLast();
break;
case 6:
deleteLocation();
break;
case 7:
search();
break;
case 8:
display();
break;
case 9:
printf("\nExit\n");
exit(0);
default:
printf("\nInvalid choice");
}
}
while(choice!=9);
}

