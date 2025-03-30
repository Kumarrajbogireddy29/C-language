#include<stdio.h>
#include<stdlib.h>
struct node{
	float coeff;
	int expo;
	struct node *next;
};
typedef struct node NODE;

NODE* insert_a_term(NODE *head,float co,int ex){
	
	NODE *nn=(NODE *)malloc(sizeof(NODE));
	nn->coeff=co;
	nn->expo=ex;
	nn->next=NULL;
	
	if (head==NULL || nn->expo>head->expo){
		nn->next=head;
		head=nn;
	}
	else{
		NODE *temp=head;
		while(temp->next != NULL && temp->next->expo > ex)
		{
			temp=temp->next;
		}
		nn->next= temp->next;
		temp->next= nn;
	}
	return head;
} 

NODE *create_polynomial(){
	NODE *head=NULL;
	int n,i;
	printf("enter number of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		float co;
		int ex;
		printf("Enter coeff of term %d\n",i);
		scanf("%f",&co);
		printf("Enter expo of term %d\n",i);
		scanf("%d",&ex);
		head = insert_a_term(head,co,ex);
		
	}
	return head;
	
	
}

void display_polynomial(NODE *head){
	NODE *temp=head;
	while(temp!=NULL)
	{
		printf("(%.1fx^%d)",temp->coeff,temp->expo);
		if(temp->next!= NULL)
		{
			printf("+");
		}
		else{
			printf("\n");
		}
		temp=temp->next;
	}
NODE* poly_addition(NODE *poly1, NODE *poly2) {
	NODE *t1 = poly1;
	NODE *t2 = poly2;
	NODE *head =NULL;
	while(t1!=NULL && t2!=NULL){
		if(t1->expo==t2->expo){
			head = insert_a_term(head,t1->coeff+t2->coeff,t1->expo);
			t1=t1->next;
			t2=t2->next;
		}
		else if(t1->expo>t2->expo){
			head=insert_a_term(head,t1->coeff,t2->expo);
			t1=t1->next;
		}
		else{
			head=insert_a_term(head,t2->coeff,t2->expo);
			t2=t2->next;
		}
	}
	while(t1!=NULL){
			head = insert_a_term(head,t1->coeff,t1->expo);
			t1=t1->next;
		}
		    while(t2!=NULL){
		    	head=insert_a_term(head,t2->coeff,t2->expo);
		    	t2=t2->next;
			}
			return head;	
}

NODE* poly_multiplication(NODE *Poly1, NODE *poly2) {
	NODE *t1, *t2;
	t1 = Poly1;
	t2 = poly2;
	NODE *res = NULL; //for resultant polynomial
	while(t1!= NULL) {
	while(t2 != NULL) {
		float r_coeff = t1 -> coeff * t2->coeff ;
		int r_expo = t1 -> expo + t2 ->expo;
		res = insert_a_term(res,r_coeff,r_expo);
		t2 = t2 -> next;
	}
	t1 = t1 -> next;
	t2 = poly2;
	}
    return res;
}
   

int main(){
	
	printf("Polynomial1:\n");
	NODE *poly1 = create_polynomial();   //creating poly 1
	printf("Polynomial2:\n");
	NODE *poly2 = create_polynomial();   //creating poly 2
	NODE *Pro = poly_multiplication(poly1,poly2);
	display_polynomial(poly1);
	display_polynomial(poly2);
	display_polynomial(pro);
}
