#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct node{
		int data;
		struct node *next;
	};

	struct node *head = NULL, *newnode, *temp;
	int count = 0, choice = 1;
	while(choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter a number ");
		scanf("%d", &newnode->data);

		if (head == 0)
		{
			head = newnode;
			temp = newnode;
		}
		else{
			temp->next = newnode;
			temp = newnode;
		}
		printf("do you want to enter more data?\nYes=1\tNo=0 ");
		scanf("%d", &choice);
	}
	temp = head;
	while(temp != 0){
		printf("%d\t", temp->data);
		temp = temp->next;
		count++;
	}
	printf("\nyou entered a total of %d numbers\n", count);

	return(0);
}
