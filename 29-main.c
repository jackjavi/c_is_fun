#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - singly linked list
 * @data: data
 * @link: pointer to the next node
 */
struct node {
	int data;
	struct node *link;
};

/**
 * main - creating linked list
 *
 * Return: Always 0
 */
int main(void)
{
	struct node *head = NULL;

	head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	printf("%d\n", head->data);
	return (0);
}
