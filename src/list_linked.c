#include <stdio.h>
#include <stdlib.h>
#include "list_linked.h"

list_linked* add_elt_list_linked(list_linked* list, int elt, int pos) 
{
    // Vérifions si elt et pos sont < 1.
    if (elt < 1 || pos < 1) 
    {
        return NULL;
    }

    // Allouons de la mémoire pour notre structure
    struct list_linked* new_elt = calloc(1, sizeof(struct list_linked));
    if (new_elt == NULL) 
    {
        printf("Erreur d'allocation mémoire. :)");
        return NULL;
    }

    // Initialisons les données de notre elt.
    new_elt->value = elt;

    if (list == NULL || pos == 1) 
    {
        new_elt->next = list;
        return new_elt;
    }

    // Parcourons la liste pour trouver elt précédent.
    struct list_linked* temp = list;
    int var;

    for (var = 1; var < pos - 1 && temp->next != NULL; var++) 
    {
        temp = temp->next;
    }

    // Vérifions si notre pos est correct.
    if (temp->next == NULL && var != pos - 1) 
    {
        free(new_elt);  
        return NULL;
    }
    // Inserons notre elt par le biais d'un mini swap.
    new_elt->next = temp->next;
    temp->next = new_elt;

    return list;
}

list_linked* del_elt_list_linked(list_linked* list, int pos) 
{
    // Vérifions si la liste est vide ou si pos est inférieure à 1.
    if (list == NULL || pos < 1) 
    {
        return NULL;
    }

    if (pos == 1) 
    {
        struct list_linked* l = list;
        list = list->next;
        free(l);
        return list;
    }

    struct list_linked* temp = list;
    int var;
    for (var = 1; var < pos - 1 && temp->next != NULL; var++) 
    {
        temp = temp->next;
    }

    // Vérifions si la pos est correcte
    if (temp->next == NULL || var != pos - 1) 
    {
        return NULL;
    }

    //Supprésion de notre elt.
    struct list_linked* l = temp->next;
    temp->next = l->next;
    free(l);

    return list;
}

int length_list_linked(list_linked* list) 
{
    // liste NULL return 0.
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
int is_empty_list_linked(list_linked* list) 
{
    if (list == NULL) 
    {
        printf("liste vide. :)");
        return 1;
    } 
    else 
    {
        return 0;
    }
}
void print_list_linked(list_linked* list) 
{
    if (list == NULL) 
    {
        return;
    }

    struct list_linked* temp = list;

    while (temp != NULL) 
    {
        printf("%d\n", temp->value);
        temp = (*temp).next;
    }
}

int search_elt_list_linked(list_linked* list, int elt) 
{
    if (list == NULL) 
    {
        return -1;
    }

    struct list_linked* temp = list;
    int var = 1;

    while (temp != NULL) {
        if (temp->value == elt) 
        {
            return var;
        }

        temp = temp->next;
        var++;
    }

    return -2;
}
int get_elt_list_linked(list_linked* list, int pos) 
{
    if (list == NULL) 
    {
        return -1;
    }

    if (pos < 1 || pos > length_list_linked(list)) 
    {
        return -2;
    }

    struct list_linked* temp = list;
    int var;

    for (var = 1; var < pos && temp != NULL; var++) 
    {
        temp = temp->next;
    }

    return temp->value;
}
int clear_list_linked(list_linked* list) 
{
    // Si liste vide return 0.
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
