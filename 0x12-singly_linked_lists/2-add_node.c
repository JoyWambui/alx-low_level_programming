#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to a pointer of the first node.
 * @str: string char array to be duplicated.
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	size_t n = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	while (*str != '\0')
	{
		n++;
		str++;
	}

	ptr->len = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
