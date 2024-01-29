#ifndef _STACK__LINKED__H_
#define _STACK__LINKED__H_
#include <stddef.h>

struct list_linked 
{
    int value;
    struct list_linked* next;
};

typedef struct list_linked list_linked;

list_linked* push_stack_linked(list_linked* list, int elt);
/*Cette fonction empile un nouvel élément, c’est-à-dire qu’elle ajoute un élément en tête
de la pile, c’est-à-dire qu’elle ajoute un élément en première position de la liste chaînée
donnée en paramètre. Si la pile est vide, il faut y créer un premier élément. Si l’élément elt donné en paramètre est inférieur à 1, la fonction doit renvoyer un pointeur
NULL sans rien modifier dans la liste. La fonction doit retourner un pointeur vers la tête de liste, ou vers l’éventuelle nouvelle
tête de liste si celle-ci a été modifiée. En cas d’erreur (pas assez de mémoire), cette fonction
doit renvoyer un pointeur NULL.*/
list_linked* pop_stack_linked(list_linked* list);
/*Cette fonction dépile l’élément en tête, c’est-à-dire qu’elle supprime l’élément en première
position de la liste chaînée donnée en paramètre.Si la liste donnée en paramètre est vide, cette fonction doit renvoyer un pointeur NULL. La fonction doit retourner un pointeur vers la tête de liste, ou vers l’éventuelle nouvelle
tête de liste si celle-ci a été modifiée.*/
int length_stack_linked(list_linked* list);
/*Cette fonction renvoie la taille de la pile donnée en paramètre, c’est-à-dire le nombre
d’éléments présents dans la liste. Si la liste donnée en paramètre est NULL, la fonction doit renvoyer 0*/
int is_empty_stack_linked(list_linked* list);
/*Cette fonction teste si la pile est vide ou non. Si la liste est vide, c’est-à-dire si le pointeur est NULL, il faut renvoyer 1 (l’équivalent de
true en C), sinon, si la liste n’est pas vide, il faut renvoyer 0 (l’équivalent de faux en C)*/
void print_stack_linked(list_linked* list);
/*Cette procédure affiche les éléments de la pile depuis la tête. Chaque élément doit être
suivi d’un retour à la ligne. Si la liste donnée en paramètre est vide, la procédure ne fait rien.*/
int get_head_stack_linked(list_linked* list);
/*Cette fonction renvoie l’élément en tête de la pile, c’est-à-dire celui à la première position.
Si la liste donnée en paramètre est NULL, la fonction doit renvoyer −1.*/
int clear_stack_linked(list_linked* list);
/*Cette fonction vide la pile de tous ses éléments, puis renvoie le nombre d’éléments qui ont
été supprimés. Si la liste donnée en paramètre est NULL, la fonction doit renvoyer 0.*/

#endif /* _STACK__LINKED__H_ */
