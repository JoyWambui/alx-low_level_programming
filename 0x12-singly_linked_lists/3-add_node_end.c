#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  adds a new node to the end of a list_t list.
 *
 * @head: pointer to a pointer of the first node.
 * @str: string char array to be duplicated.
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *ptr;
	size_t n = 0;

	if (temp == NULL)
	{
		return (NULL);
	}
	ptr = *head;
	temp->str = strdup(str);
	while (*str != '\0')
	{
		n++;
		str++;
	}

	temp->len = n;
	temp->next = NULL;
	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}

	return (ptr);
}
