#include<stdio.h>
#include<conio.h>
void main(){
int bt[20],wt[20],tat[20],i,n;
float wtavg,tatavg;
clrscr();
printf("ENTER THE NUMBER OF PROCESSESS : ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the Burst time of Process %d : ",i);
scanf("%d",&bt[i]);
}
wt[0]=wtavg=0;
tat[0]=tatavg=bt[0];
for(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
wtavg=wtavg+wt[i];
tatavg=tatavg+tat[i];
}
printf("PROCESS\t\tBURST\t\tWAIT\t\tTAT");
for(i=0;i<n;i++)
printf("\nP%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
printf("\n AVERAGE WAITING TIME : %f",wtavg/n);
printf("\n AVERAGE TAT TIME : %f",tatavg/n);
getch();
}