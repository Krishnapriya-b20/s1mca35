#include<stdio.h>
#define MAX 1000
int parent[MAX];
void initialization(int n)
{
for(int i=0;i<n;i++)
{
parent[i]=i;
}
}
int find(int x)
{
while(x!=parent[x])
{
x=parent[x];
}
return x;
}
void union_set(int x,int y)
{
int rootx=find(x);
int rooty=find(y);
if(rootx!=rooty)
{
parent[rootx]=rooty;
}
}
int connected(int x,int y)
{
return find(x)==find(y);
}
int main()
{
int n=10;
initialization(n);
union_set(1,2);
union_set(3,4);
union_set(2,3);
printf("Are 1 nad 4 connected? %s\n",connected(1,4)?"Yes":"No");
printf("Are 1 and 5 connected? %s\n",connected(1,5)?"Yes":"No");
return 0;
}
