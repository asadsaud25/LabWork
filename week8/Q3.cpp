#include <stdio.h>
#include <stdbool.h>

#define MAX 10    
#define RES 3     
int allocation[MAX][RES] = {
    {0, 1, 0},   
    {2, 0, 0},   
    {3, 0, 2},   
    {2, 1, 1},   
    {0, 0, 2}    
};

int max[MAX][RES] = {
    {7, 5, 3},   
    {3, 2, 2},   
    {9, 0, 2},   
    {2, 2, 2},   
    {4, 3, 3}    
};

int need[MAX][RES];   
int available[RES] = {3, 3, 2}; 
int numProcesses = 5; 
int numResources = RES; 

bool isSafe() {
    int work[RES];
    bool finish[MAX] = {0};
    int safeSeq[MAX];
    int count = 0;

    for (int i = 0; i < numResources; i++)
        work[i] = available[i];

    while (count < numProcesses) {
        bool found = false;
        for (int p = 0; p < numProcesses; p++) {
            if (!finish[p]) {
                bool canAllocate = true;
                for (int j = 0; j < numResources; j++) {
                    if (need[p][j] > work[j]) {
                        canAllocate = false;
                        break;
                    }
                }
                if (canAllocate) {
                    for (int j = 0; j < numResources; j++)
                        work[j] += allocation[p][j];

                    safeSeq[count++] = p;
                    finish[p] = true;
                    found = true;
                }
            }
        }
        if (!found) {
            printf("System is not in a safe state.\n");
            return false;
        }
    }

    printf("System is in a safe state.\nSafe sequence is: ");
    for (int i = 0; i < count; i++)
        printf("%d ", safeSeq[i]);
    printf("\n");
    return true;
}

void requestResources(int processNum, int request[]) {
    for (int j = 0; j < numResources; j++) {
        if (request[j] > need[processNum][j]) {
            printf("Error: Process has exceeded its maximum claim.\n");
            return;
        }
        if (request[j] > available[j]) {
            printf("Process is blocked because resources are not available.\n");
            return;
        }
    }
    for (int j = 0; j < numResources; j++) {
        available[j] -= request[j];
        allocation[processNum][j] += request[j];
        need[processNum][j] -= request[j];
    }
    if (isSafe()) {
        printf("Resources allocated to process %d.\n", processNum);
    } else {
        
        for (int j = 0; j < numResources; j++) {
            available[j] += request[j];
            allocation[processNum][j] -= request[j];
            need[processNum][j] += request[j];
        }
        printf("Resources cannot be allocated to process %d, backtracking...\n", processNum);
    }
}

int main() {

    for (int i = 0; i < numProcesses; i++)
        for (int j = 0; j < numResources; j++)
            need[i][j] = max[i][j] - allocation[i][j];

    isSafe();
    int processNum = 1; 
    int request[RES] = {1, 0, 2}; 
    printf("Process %d is requesting resources: ", processNum);
    for (int j = 0; j < numResources; j++) {
        printf("%d ", request[j]);
    }
    printf("\n");
    requestResources(processNum, request);
    return 0;
}

