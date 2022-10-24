#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - singly linked list
 * @age: ages in a linked list
 * @link: link to the next node
 */
struct node {
	int age;
	struct node *link;
};

/**
 * print_data - prints data in a singly linked list
 * @head: pointer to the address of the first node
 */
void print_data(struct node *head)
{
	struct node *ptr = NULL;

	if (head == NULL)
		printf("Linked list is empty");
	ptr = head;
	while (ptr != NULL)
	{
		printf("%-5d", ptr->age);
		ptr = ptr->link;
	}
	printf("\n");
	
}

/**
 * main - creates a singly linked list
 * 
 * Return: Always 0.
 */
int main(void)
{
	struct node *head = NULL;
	struct node *current = NULL;

	head = malloc(sizeof(struct node));
	head->age = 23;
	head->link = NULL;

	current = malloc(sizeof(struct node));
	current->age = 43;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(struct node));
	current->age = 76;
	current->link = NULL;
	head->link->link = current;

	current = malloc(sizeof(struct node));
	current->age = 89;
	current->link = NULL;
	head->link->link->link = current;

	print_data(head);

	return (0);
}
