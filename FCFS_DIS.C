#include<stdio.h>
#include<conio.h>
void main()
{
 int i,tot,seek=0,n,ihead,ioq[20];
 float avgs;
 clrscr();
 printf("Enter the no. of request : ");
 scanf("%d",&n);
 printf("Enter the initial head position : ");
 scanf("%d",&ihead);
 ioq[0]=ihead;
 printf("Enter the I/O queue : ");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&ioq[i]);
 }
 ioq[n+1]=ioq[n];
 printf("Order of Request Served : ");
 for(i=0;i<=n;i++)
 {
  tot=ioq[i+1]-ioq[i];
  if(tot<0)
   tot=tot* -1;
  seek=seek+tot;
  printf("%d-->",ioq[i]);
 }
 avgs=seek/n;
 printf("\nTotal Seek time = %d",seek);
 printf("\nAverage Seek time = %f",avgs);
 getch();
}