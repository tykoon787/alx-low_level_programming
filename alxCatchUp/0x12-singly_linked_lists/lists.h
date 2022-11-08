#ifndef LIST_H
#define LIST_H

#include <unistd.h>
#include <stdio.h>

/**
 * struct list_s- Singly Linked List
 * @str: String - (Allocated by malloc)
 * @len: Length of the string
 * @next: points to next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/* Prototypes */
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

/* -------- Functions --------------- */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif /* LISTS_H */
