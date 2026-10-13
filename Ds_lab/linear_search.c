#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,a[10],n,flag=0,key,pos=-1;
printf("\nEnter the limit:");
scanf("%d",&n);
printf("\nEnter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the element to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
flag=1;
pos=i;
printf("\nElement founded at position %d",pos+1);
break;
}}
if(flag==0)
{
printf("\nElement not founded");
}

}

