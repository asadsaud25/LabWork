/* Q4.Write a program to implement a stack
 * using an array with push, pop, and display operations.
 */
#include<stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int element) {
	if(top >= MAX_SIZE -1) {
		printf("Stack Overflow\n");
	}else{
		stack[++top] = element;
		printf("%d pushed to stack\n", element);
	}
}
int pop() {
	if(top < 0) {
		printf("Stack Underflow\n");
		return -1;
	}else {
		int pop = stack[top--];
		return pop;
	}
}
void display() {
	int i;
	if(top < 0) {
		printf("Stack is empty\n");
	}else {
		printf("Stack: \n");
		for(i=top; i>=0; i--) {
			printf("%d ", stack[i]);
		}
		printf("\n");
	}
}
int main() {
	int op, element;

    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                element = pop();
                if (element != -1) {
                    printf("%d popped from stack\n", element);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
	return 0;
}
