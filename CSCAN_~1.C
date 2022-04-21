#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,temp,head,hloc,ioq[20],lim;
 float sum=0,avgs;
 clrscr();
 printf("Enter the no. of requests : ");
 scanf("%d",&n);
 printf("Enter the initial head position : ");
 scanf("%d",&head);
 printf("Enter the Track limit : ");
 scanf("%d",&lim);
 printf("Enter the I/O requests : ");
 ioq[n]=head;
 ioq[n+1]=lim;
 for(i=0;i<n;i++)
 {
  scanf("%d",&ioq[i]);
 }

 for(i=0;i<=n+1;i++)
 {
  for(j=i+1;j<=n+1;j++)
  {
   if(ioq[i]>ioq[j])
   {
    temp=ioq[i];
    ioq[i]=ioq[j];
    ioq[j]=temp;
   }
  }
 }


 for(i=0;i<=n;i++)
 {
  if(head==ioq[i])
  {
   hloc=i;
   break;
  }
 }

 printf("Order of Request served : \n");


 for(i=hloc;i<=n+1;i++)
 {
  printf("%d-->",ioq[i]);
 }
 printf("0-->");
 for(i=0;i<hloc;i++)
 {
  printf("%d-->",ioq[i]);
 }



 sum=lim+(lim-head)+ioq[hloc-1];
 avgs=sum/n;
 printf("\nTotal seek time %f",sum);
 printf("\nAverage seek time %f",avgs);

 getch();
}