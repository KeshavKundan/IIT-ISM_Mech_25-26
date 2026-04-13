#include<stdio.h>
#include<stdlib.h>
#include "Node.h"

node *head = NULL;

/*
 * To know what this code does, read this link:
 * https://stackoverflow.com/questions/17318886/fflush-is-not-working-in-linux
 * We will discuss non-library functions in Week 7
 */
void clean_stdin(void)
{
	int c;
	do
	{
		c = getchar();
	}
	while (c != '\n' && c != EOF);
}

void insert()
{
	node* new_node = NULL;	
	node* after_node = NULL;
	node* temp = NULL;
	int op_code, op1, op2;

	printf("Insertion Operation\n");
	printf("Where would you like to insert the value?\n");
	printf("Enter 1 if you wish to insert a value at the beginning\n");
	printf("Enter 2 if you wish to insert a value after a particular value\n");
	scanf("%d", &op_code);

	if(op_code != 1 && op_code != 2)
	{
		printf("Invalid option\n");
		return;
	}
	
	after_node = NULL;

	printf("Enter the value to insert: ");
	scanf("%d", &op1);
	
	if(op_code == 2)
	{
		printf("Enter the value after which the value is to be inserted: ");
		scanf("%d", &op2);
		
		temp = head;
		// We insert it after the "first" instance of the value, if found
		while(temp != NULL && temp->value != op2)
			temp = temp->next;
		if(temp == NULL)
		{
			printf("The value %d does not exist in the linked list\n", op2);
			printf("Insertion failed\n");
			return;
		}
		after_node = temp;
	}
	
	new_node = (node*) malloc(sizeof(node));
	new_node->value = op1;

	if(after_node == NULL)
	{
		printf("Adding the node with value %d at the head\n", new_node->value);
		new_node->next = head;
		head = new_node;
	}
	else
	{
		printf("Adding the node with value %d after the node with value %d\n", 
				op1, after_node->value);
		new_node->next = after_node->next;
		after_node->next = new_node;
	}

	printf("Inserion successful\n");
}

void delete()
{
	node* temp = NULL;
	node* previous_node = NULL;
	int op;

	if(head == NULL)
	{
		printf("The linked list is empty\n");
		return;
	}

	printf("Enter the value to be deleted: ");
	scanf("%d", &op);

	// We will delete the "first" instance of the value, if found
	if(head->value == op)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	else
	{
		temp = head;
		while(temp->next != NULL && temp->next->value != op)
			temp = temp->next;
		
		if(temp->next == NULL)
		{
			printf("The value %d is not in the linked list\n", op);
			printf("Deletion failed\n");
			return;
		}
		previous_node = temp;
		temp = temp->next; // node to be deleted
		previous_node->next = temp->next;
		free(temp);
	}
	
	printf("Deleted value %d from the linked list\n", op);
	printf("Deletion successful\n");
}

int main()
{
	char choice;
	int op_code, op1, op2;

        do
        {
		system("clear"); // Invokes the clear command.
				 // "Should" work on most Linux environments !!
				 // Otherwise, just remove this

		printf("This is a linked list of integers\n");
		printf("Press Ctrl+C anytime to exit\n");

		if(head == NULL)
			printf("The linked list is empty\n");
		else
		{
			printf("The linked list currently looks like this:\n");
			node* temp = head;
			printf("%-6d", temp->value);
			while((temp = temp->next) != NULL)
				printf(" -> %-6d", temp->value);
			printf("\n");
		}

		printf("What operation do you want to try out?\n");
		printf("Enter 1 for insertion\n");
		printf("Enter 2 for deletion\n");
		scanf("%d", &op_code);

		switch(op_code)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			default:
				printf("Doesn't look like a valid operation code !!\n");
		}
	
		printf("Do you want to continue? (y/n): ");
		clean_stdin();
		choice = getchar();
	}
	while(choice == 'y' || choice == 'Y');

	return 0;
}
