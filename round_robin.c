#include<stdio.h>
#include<conio.h>
void main()
{
	int i,bt[10],rem_process,rem[10],n,q,total=0;
	int flag,tt=0,wt=0;
	float average_wait_time, average_turnaround_time;
	printf("Enter number of processes and time quantum:");
	scanf("%d%d",&n,&q);
	rem_process=n;
	printf("Enter the burst time:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&bt[i]);
	rem[i]=bt[i];
    }
   printf("\nProcess\t Burst Time \tWt \t TAT");
for(total=0,i=0;rem_process!=0;)
{
	if(rem[i]<=q && rem[i]>0)
	{
	
		total=total+rem[i];
		rem[i]=0;
		flag=1;
	}
	else if(rem[i]>0)
	{
		printf("b");
		total+=q;
		rem[i]-=q;
	}
	if(rem[i]==0 && flag==1)
	{
		rem_process--;
		printf("\nProcess %d \t%d \t%d \t%d",i+1,bt[i],total-bt[i],total);
		wt+=total-bt[i];
		tt+=total;
		flag=0;
	}
	if(i==(n-1))
	i=0;
	else
	i++;

}
 average_wait_time = wt * 1.0 / n;
      average_turnaround_time = tt * 1.0 / n;
      printf("\n\nAverage Waiting Time:\t%f", average_wait_time); 
      printf("\nAvg Turnaround Time:\t%f\n", average_turnaround_time); 
	
	
}
