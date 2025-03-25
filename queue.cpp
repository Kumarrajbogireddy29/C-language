//implememntation queue data structure using arrays
#include<stdio.h>
int queue[100],front = -1, rear = -1, max_size;
void enque(int val){
	if(rear == max_size -1){
		printf("Queue is full\n");
	}
	else if(front == -1 && rear == -1) {
		front++;
		rear++;
		queue[rear] = val;
	}
	else{
		queue[++rear] = val;	
	}
}
int deque() {
	if (front == -1 && front == -1) {
		return -1;
		}
		else if (front == rear) {
			int de =queue[rear];
			rear = -1;
			front = -1;
			return de;
		}
		else{
			int de= queue[front];
			front++;
			return de;
		}
	}		
void display() {
	if (front == -1 && rear == -1){
		printf("queue is empty\n");
		return;
	}
	for(int i=front; i<=rear; i++){
		printf("%d ",queue[i]);
	}
	printf("\n");
	}
int main()
{
	printf("enter maximum of size of queue: ");
	scanf("%d",&max_size);
	int choice;
	while (1) {
		printf("enter\n1. enque\n2. deque\n3. display\another to exit");
		scanf("%d",&choice);
		if (choice == 1){
			// enque()
			int val;
			printf("enter the value");
			scanf("%d",&val);
			enque(val); //function call
			}   
		else if(choice == 2) {
			// deque()
			int res = deque();
			if(res == -1) {
				printf("queue is empty\n");
			}
			else{
				printf("%d is deleted\n",res);
			}
		}
		else if(choice == 3) {
			//display()
			display();
		}
		else{
			printf("Thank You");
			break;
}
}
}

