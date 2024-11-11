#include <stdio.h>
#include<limits.h>
#define MAX 100

int main() {
    int processes[MAX], bt[MAX], at[MAX], wt[MAX], tat[MAX], ct[MAX], priority[MAX];
    int n, i, j;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter arrival times, burst times, and priorities for each process:\n");
    for ( i = 0; i < n; i++) {
        processes[i] = i + 1;  
        printf("Process %d - Arrival Time: ", processes[i]);
        scanf("%d", &at[i]);
        printf("Process %d - Burst Time: ", processes[i]);
        scanf("%d", &bt[i]);
        printf("Process %d - Priority (lower number = higher priority): ", processes[i]);
        scanf("%d", &priority[i]);
    }

    
    for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (at[i] > at[j] || (at[i] == at[j] && priority[i] > priority[j])) {
                
                int temp = processes[i];
                processes[i] = processes[j];
                processes[j] = temp;

                int temp_at = at[i];
                at[i] = at[j];
                at[j] = temp_at;

                int temp_bt = bt[i];
                bt[i] = bt[j];
                bt[j] = temp_bt;

                int temp_priority = priority[i];
                priority[i] = priority[j];
                priority[j] = temp_priority;
            }
        }
    }

    int completed = 0;
    int t = 0;  
    int remaining[MAX];  

    for ( i = 0; i < n; i++)
        remaining[i] = bt[i];

    while (completed < n) {
        int idx = -1;
        int highest_priority = INT_MAX;  

        
        for ( i = 0; i < n; i++) {
            if (at[i] <= t && remaining[i] > 0 && priority[i] < highest_priority) {
                highest_priority = priority[i];
                idx = i;  
            }
        }

        if (idx != -1) {
            
            t += remaining[idx];  
            ct[idx] = t;  
            tat[idx] = ct[idx] - at[idx];  
            wt[idx] = tat[idx] - bt[idx];  
            remaining[idx] = 0;  
            completed++;  
        } else {
            
            t++;
        }
    }

    
    printf("\nProcess\tArrival Time\tBurst Time\tPriority\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for ( i = 0; i < n; i++)
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               processes[i], at[i], bt[i], priority[i], ct[i], wt[i], tat[i]);

    return 0;
}
