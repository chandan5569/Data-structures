#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node* link;
};
struct node* head;
void insert(int);
void print();
void search();
int main()
{
head=NULL;
int i,n,x;
printf("enter the number of node to be inserted");
scanf("%d",&n);
for(i=0; i<n; i++)
{
printf("enter the element");
scanf("%d",&x);
insert(x);
print();
}
search();
return 0;
}
void insert(int x)
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=x;
temp->link=head;
head=temp;
}
void print()
{
struct node* temp;
temp=head;
printf("the node is: ");
while(temp!=NULL)
{
printf(" %d ",temp->info);
temp=temp->link;
}
printf("\n");
}
void search()
{
int x;
printf("enter the element to be searched");
scanf("%d",&x);
struct node* temp;
temp=head;
while(temp!=NULL)
{
if(temp->info==x)
{
printf("element is found in array");
printf(" %d ",temp->info);
}
}
printf("element is not found in array");
}
