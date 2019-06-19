#include<stdio.h>
#include<conio.h>
void main()
{
	int i,tat[10],j,n,temp,p[10],bt[10],pr[10],twt=0,wt[10],ttat=0;
	printf("Enter the number of processes:");
	scanf("%d",&n);
	printf("Enter burst time,priority  of the processes:");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&bt[i],&pr[i]);
		p[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(pr[j]>pr[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				
					temp=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp;
				
					temp=pr[j];
				pr[j]=pr[j+1];
				pr[j+1]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	printf("%d",pr[i]);
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]+=bt[j];
		}
		twt+=wt[i];
	}
	for(i=0;i<n;i++)
	{
		tat[i]=wt[i]+bt[i];
		ttat+=tat[i];
	}
	printf("\nTotal waiting time:%d",twt);
	printf("\nAverage waiting time:%f",(float)twt/n);
	printf("\nTurn around time:%d",ttat);
	printf("\nAverage turn around time:%f",(float)ttat/n);
}
