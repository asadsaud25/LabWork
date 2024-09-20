/*  Q3. Write a C program to implement 
 *	Shortest Job Next (SJN) scheduling.
 */
#include<stdio.h>

int main() {
    int n, bt[20], wt[20], tat[20], i, j, pos, temp;
    float avg_wt=0, avg_tat=0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter burst time for each process: ");
    for(i=0;i<n;i++) {
        printf("P[%d]: ",i+1);
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++) {
        pos=i;
        for(j=i+1;j<n;j++) {
            if(bt[j]<bt[pos]) {
            	pos=j;
			}
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
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
    for(i=0;i<n;i++) printf("P[%d]\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    printf("\nAverage Waiting Time: %.2f", avg_wt);
    printf("\nAverage Turnaround Time: %.2f\n", avg_tat);
    return 0;
}
