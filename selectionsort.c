#include<stdio.h>  // Header file
int main()          // Main function
{
int a[100],i,j,n,k,temp;    // Declaring variables
printf("enter the number of element yo want to sort\n");
scanf("%d",&n);                                               // Taking no. of elements of array from user
printf("enter those elements\n");
for(i=0; i<n; i++)                            // For-Loop for storing elements of array one by one
{
scanf("%d",&a[i]);
}

for(i=0; i<n-1; i++)           // For-loops for comparing elements one by one
{
k=i;
for(j=i+1; j<n; j++)
{
if(a[j]<a[k])             // taking one element and comparing it with others
{
k=j;
}
}
temp=a[i];
a[i]=a[k];
a[k]=temp;
}

printf("after sorting the elements are\n");

for(i=0; i<n; i++)     // Last for-loop for printing sorted array 
{
printf(" %d \n",a[i]);
}
return 0;
}


