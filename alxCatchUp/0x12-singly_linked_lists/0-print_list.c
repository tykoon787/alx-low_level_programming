#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int count = 0;;

	const list_t *temp;
	temp = h;

	while(temp != NULL)
	{
		printf("String : [%s] -- Length [%d]\n", temp->str, temp->len);
		temp = temp-> next;
		count++;
	}

	return (count);
}

int main(void)
{
	list_t *head, *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return(1);
	
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;

	n = print_list(head);

	printf("-> %lu elements\n", n);
	printf("\n");

	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}
