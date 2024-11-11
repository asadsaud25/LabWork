#include <stdio.h>
#include <string.h>

#define MAX_TASKS 10
#define TASK_NAME_LENGTH 50

typedef struct {
    char name[TASK_NAME_LENGTH];
    bool completed;
} Task;

void addTask(Task tasks[], int *taskCount) {
    if (*taskCount >= MAX_TASKS) {
        printf("Task limit reached! Cannot add more tasks.\n");
        return;
    }

    printf("Enter task name: ");
    scanf(" %[^\n]", tasks[*taskCount].name);
    tasks[*taskCount].completed = false;
    (*taskCount)++;
    printf("Task added successfully.\n");
}

void completeTask(Task tasks[], int taskCount) {
    char taskName[TASK_NAME_LENGTH];
    printf("Enter the name of the task to complete: ");
    scanf(" %[^\n]", taskName);

    for (int i = 0; i < taskCount; i++) {
        if (strcmp(tasks[i].name, taskName) == 0) {
            tasks[i].completed = true;
            printf("Task '%s' marked as completed.\n", taskName);
            return;
        }
    }
    printf("Task '%s' not found.\n", taskName);
}

void displayTasks(Task tasks[], int taskCount) {
    if (taskCount == 0) {
        printf("No tasks available.\n");
        return;
    }

    printf("\nTasks:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s [%s]\n", i + 1, tasks[i].name, tasks[i].completed ? "Completed" : "Pending");
    }
}

int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;

    do {
        printf("\n--- Task Management System ---\n");
        printf("1. Add Task\n");
        printf("2. Complete Task\n");
        printf("3. Display Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                completeTask(tasks, taskCount);
                break;
            case 3:
                displayTasks(tasks, taskCount);
                break;
            case 4:
                printf("Exiting the system.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

