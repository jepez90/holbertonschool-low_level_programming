#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head, *other;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(NULL, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    other = add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("\n");
    print_dlistint(other);
    return (EXIT_SUCCESS);
}
