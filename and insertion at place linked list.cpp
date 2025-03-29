#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};

typedef struct node NODE;
NODE *head = NULL;


void insert_at_head(NODE*nn)
{
if(head == NULL){
head = nn;

}else{
    nn->next = head;
    head = nn;
}
}
void insert_at_end(NODE*nn)
{
	
}

void dispaly()
{
    if (head == NULL)
	{
        printf("No nodes\n");
    }
    NODE*temp = head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;      
    }
    printf("\n");
}
void delete_at_head(){
	
	
	if(head==NULL)
	{
		printf("no nodes");
		return;
	}
	else
	{
		printf("deleted element is %d:\n",head->data);
		NODE*dn=head;
		head=head->next;
		free(dn);
	}
}

void delete_at_end(){
	if(head==NULL)
	{
		printf("no nodes\n");
	}
	else if(head->next==NULL)
	{
		printf("deleted element id %d \n",head->data);
		head=NULL;
	
	}
	else
	{
		NODE *temp = head;
		while (temp->next->next !=NULL)
		{
			temp = temp->next;
		}
		printf("deleted element is %d \n" ,temp->next->data);
		NODE *dn=temp->next;
		temp->next=NULL;
		free(dn);
	}
}

int main(){
	while (1)
	{
		 int choice;
		 printf("ENTER\n1.Insert at head\n2.Insert at end\n3.Delete at head\n4.delete at end\n5.Display and anything else to exist");
		 scanf("%d",&choice);
		 if (choice == 1)
		 {
		 int val;
		 printf("Enter value to be inserted:");
		 scanf("%d",&val);
		 NODE*nn = (NODE *)malloc(sizeof(NODE));
		 nn->data  = val;
		 nn->next = NULL;
		 insert_at_head(nn);

		 }
		 else if( choice == 2){
		 	

		 }
		 else if (choice == 3){
		 	delete_at_head();

		 }
		 else if (choice == 4){
		 	delete_at_end();

		 }
		 else if (choice == 5){
		 	dispaly();
		 }
		 else{
		 	printf("wrong");
		 	break;
			  }

	}
}
