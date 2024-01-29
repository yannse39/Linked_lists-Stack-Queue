#include <stdio.h>
#include <stdlib.h>
#include "stack_linked.h"

list_linked* push_stack_linked(list_linked* list, int elt) 
{
    if (elt < 1) 
    {
        return NULL;
    }

    // Allouons de la mémoire à notre structure.
    struct list_linked* new_elt = calloc(1, sizeof(struct list_linked));

    if (new_elt == NULL) 
    {
        printf("Erreur d'allocation mémoire. :)");
        return NULL;
    }

    new_elt->value = elt;
    new_elt->next = list;

    list = new_elt;

    return list;
}
list_linked* pop_stack_linked(list_linked* list) 
{
    if (list == NULL)  //verifions si la liste est vide 
    {
        return NULL;
    }

    struct list_linked* temp = list;

    list = list->next;

    free(temp);

    return list;
}
int length_stack_linked(list_linked* list) 
{
    //verifions si la liste est vide 
    if (list == NULL) 
    {
        return 0;
    }

    int var = 0;
    struct list_linked* temp = list;

    while (temp != NULL) 
    {
        var++;
        temp = temp->next;
    }

    return var;
}
int is_empty_stack_linked(list_linked* list) 
{
    if (list == NULL) 
    {
        printf("pile vide. :)");
        return 1;
    } 
    else 
    {
        return 0;
    }
}
void print_stack_linked(list_linked* list) 
{
    if (list == NULL) 
    {
        return;
    }

    struct list_linked* temp = list;

    while (temp != NULL) 
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
}
int get_head_stack_linked(list_linked* list) 
{
    if (list == NULL) 
    {
        return -1;
    }

    return list->value;
}
int clear_stack_linked(list_linked* list) 
{
    // Si liste NULL return 0
    if (list == NULL) 
    {
        return 0;
    }

    int var = 0;
    struct list_linked* temp = list;
    struct list_linked* next;

    while (temp != NULL) 
    {
        next = temp->next;

        free(temp);

        temp = next;

        var++;
    }

    return var;
}

