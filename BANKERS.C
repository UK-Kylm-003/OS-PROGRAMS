#include<stdio.h>
#include<conio.h>

void main()
{
int n,m,i,j,k,alloc[20][20],max[20][20],avail[20],work[20],finish[20],need[20][20],safe[20],ind=0,y,flag;
clrscr();
printf("Enter the no of process :");
scanf("%d",&n);
printf("Enter the no. of resources :");
scanf("%d",&m);

printf("Enter the allocation ");
for(i=0;i<n;i++)
{
 for(j=0;j<m;j++)
 {
  scanf("%d",&alloc[i][j]);
 }
}

printf("Enter the Max matrix ");
for(i=0;i<n;i++)
{
 for(j=0;j<m;j++)
 {scanf("%d",&max[i][j]);
 }
}

printf("Enter the available matrix ");
for(i=0;i<m;i++)
{
 scanf("%d",&avail[i]);
}

for(i=0;i<n;i++){
 for(j=0;j<m;j++)
 {
  need[i][j]=max[i][j]-alloc[i][j];
 }
}
printf("Need Matrix is :");
for(i=0;i<n;i++)
{
 printf("\n");
 for(j=0;j<m;j++)
 {
  printf(" %d",need[i][j]);
 }
}
for(i=0;i<m;i++){
 work[i]=avail[i];
}

for(i=0;i<n;i++)
{
 finish[i]=0;
}
printf("Safe");
for(k=0;k<n;k++)
{
 for(i=0;i<n;i++)
 {
  if(finish[i]==0)
  {
   flag=0;
   for(j=0;j<m;j++)
   {
    if(need[i][j]>work[j])
    {
     flag=1;
     break;
    }
   }
   if(flag==0)
   {
    safe[ind++]=i;
    printf("\n%d",i);
    for(y=0;y<m;y++)
    {
     work[y]+=alloc[i][y];
    }
    finish[i]=1;
   }
  }
 }
}

printf("\nSafe Sequence is : ");
for(i=0;i<=n-1;i++){
 printf("P%d ",safe[i]);}

getch();
}