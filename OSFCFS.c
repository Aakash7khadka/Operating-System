#include<stdio.h>>
#include<conio.h>
void main()
{
	int n,i,at[10],nb[10],ft[10],tat[10],wt[10],rt[10];
	float atat=0,awt=0,wtat,stat=0,srt=0;
	printf("How many processes you want?");
	scanf("%d",&n);
	

printf("Enter arrival and next burst time:");
for(i=0;i<n;i++)
{
	scanf("%d%d",&at[i],&nb[i]);
}
ft[0]=nb[0];
for(i=1;i<n;i++)
{
	ft[i]=ft[i-1]+nb[i];
	
}
for(i=0;i<n;i++)
{
rt[i]=ft[i]-nb[i];
tat[i]=ft[i]-at[i];
}
for(i=0;i<n;i++)
{

	wt[i]=tat[i]-nb[i];
}
for(i=0;i<n;i++)
{
	stat+=tat[i];
	srt+=rt[i];
	printf("\t%d",ft[i]);
	atat+=tat[i];
	awt+=wt[i];
	
}
atat/=n;
awt/=n;

wtat=stat/srt;
printf("\nAverage TAT:%f",atat);
printf("\nAverage WT:%f",awt);
printf("\nWTAT:%f",wtat);
printf("\nAWTAT:%f",wtat/n);

}
