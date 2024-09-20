/* Q2. Write a C program to implement 
 * First-Come-First-Served (FCFS) scheduling.
 */
 
#include<stdio.h>

void main() {
    int n, bt[10], wt[10], tat[10], i;
    float avg_wt=0, avg_tat=0;
    printf("Enter no. of processes: ");
    scanf("%d", &n);
    printf("Enter burst time for each process: ");
    for(i=0;i<n;i++) {
        printf("P[%d]: ",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=1;i<n;i++) {
    	wt[i]=wt[i-1]+bt[i-1];
	}
    for(i=0;i<n;i++) {
        tat[i]=wt[i]+bt[i];
        avg_wt+=wt[i];
        avg_tat+=tat[i];
    }
    avg_wt/=n;
    avg_tat/=n;
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i=0;i<n;i++) {
    	printf("P[%d]\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
	}
    printf("\nAverage Waiting Time: %.2f", avg_wt);
    printf("\nAverage Turnaround Time: %.2f\n", avg_tat);
}

