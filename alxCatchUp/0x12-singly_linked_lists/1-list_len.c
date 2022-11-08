#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp-> next;
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

	n = list_len(head);

	printf("-> %lu elements\n", n);
	printf("\n");

	free(new->str);
	new->str = NULL;
	n = list_len(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}
