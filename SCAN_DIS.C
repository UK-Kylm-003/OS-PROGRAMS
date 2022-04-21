#include<stdio.h>
#include<conio.h>
void main()
{
 int max,sum=0,n,i,j,temp,head,hloc,ioq[20];
 float avgs;
 clrscr();
 printf("Enter the no. of requests : ");
 scanf("%d",&n);
 printf("Enter the initial head position : ");
 scanf("%d",&head);
 printf("Enter the I/O requests : ");
 ioq[n]=head;
 for(i=0;i<n;i++)
 {
  scanf("%d",&ioq[i]);
 }

 for(i=0;i<=n;i++)
 {
  for(j=i+1;j<=n;j++)
  {
   if(ioq[i]>ioq[j])
   {
    temp=ioq[i];
    ioq[i]=ioq[j];
    ioq[j]=temp;
   }
  }
 }

 max=ioq[n];

 for(i=0;i<=n;i++)
 {
  if(head==ioq[i])
  {
   hloc=i;
   break;
  }
 }

 printf("Order of Request served : \n");

 for(i=hloc;i>=0;i--)
 {
  printf("%d-->",ioq[i]);
 }

 printf("0-->");

 for(i=hloc+1;i<=n;i++)
 {
  printf("%d-->",ioq[i]);
 }

 sum=max+head;
 avgs=sum/n;
 printf("\nTotal seek time %d",sum);
 printf("\nAverage seek time %f",avgs);

 getch();
}