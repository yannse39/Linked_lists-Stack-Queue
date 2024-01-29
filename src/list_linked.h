#ifndef _LIST__LINKED__H__
#define _LIST__LINKED__H__

#include <stddef.h>

struct list_linked 
{
    int value;
    struct list_linked* next;
};

typedef struct list_linked list_linked;

list_linked* add_elt_list_linked(list_linked* list, int elt, int pos);
/*Cette fonction ajoute un élément à la position indiquée de la liste chaînée donnée en
paramètre. Si la liste est vide, il faut y créer un premier élément qui sera considéré comme en position
1. Si l’élément elt donné en paramètre est inférieur à 1, la fonction doit renvoyer un pointeur
NULL sans rien modifier dans la liste. Si la position n’existe pas (c’est-à-dire si elle est inférieure strictement à 1 ou supérieure
strictement à la taille de la liste + 1), la fonction doit renvoyer un pointeur NULL sans
rien modifier dans la liste. Si un élément se trouve déjà en position pos, il faut décaler cet
élément un cran vers la fin (de na position n à la position n+1 ), puis, on ajoute le nouvel
élément à la position donnée en paramètre. La fonction doit retourner un pointeur vers la tête de liste, ou vers l’éventuelle nouvelle
tête de liste si celle-ci a été modifiée. En cas d’erreur (pas assez de mémoire), cette fonction
doit renvoyer un pointeur NULL.*/
list_linked* del_elt_list_linked(list_linked* list, int pos);
/*Cette fonction supprime l’élément à la position indiquée de la liste chaînée donnée en
paramètre. Si la liste donnée en paramètre est vide, cette fonction doit renvoyer un pointeur NULL.
Si la position n’existe pas (c’est-à-dire si elle est inférieure strictement à 1 ou supérieure
strictement à la taille de la liste), la fonction doit renvoyer un pointeur NULL sans rien
modifier dans la liste. La fonction doit retourner un pointeur vers la tête de liste, ou vers l’éventuelle nouvelle
tête de liste si celle-ci a été modifiée.*/
int length_list_linked(list_linked* list);
/*Cette fonction renvoie la taille de la liste donnée en paramètre, c’est-à-dire le nombre
d’éléments présents dans la liste. Si la liste donnée en paramètre est NULL, la fonction doit renvoyer 0.*/
int is_empty_list_linked(list_linked* list);
/*Cette fonction teste si la liste est vide ou non. Si la liste est vide, c’est-à-dire si le pointeur est NULL, il faut renvoyer 1 (l’équivalent de
true en C), sinon, si la liste n’est pas vide, il faut renvoyer 0 (l’équivalent de faux en C).*/
void print_list_linked(list_linked* list);
/*Cette procédure affiche les éléments de la liste. Chaque élément doit être suivi d’un retour
à la ligne. Si la liste donnée en paramètre est vide, la procédure ne fait rien.*/
int search_elt_list_linked(list_linked* list, int elt);
/*Cette fonction cherche un élément et renvoie sa position.
La première position démarre à la valeur 1. Si la liste donnée en paramètre est NULL, la fonction doit renvoyer −1. Si l’élément n’est
pas trouvé, la fonction doit renvoyer −2. Si plusieurs cas d’erreur se produisent simultanément, leur gestion doit se faire dans cet
ordre précisément : le test de la liste vide en premier, puis en dernier le test de l’existence
de la valeur.*/
int get_elt_list_linked(list_linked* list, int pos);
/*Cette fonction renvoie l’élément présent à la position indiquée. Si la liste donnée en paramètre est NULL, la fonction doit renvoyer −1. Si la position n’existe pas (c’est-à-dire si elle est inférieure strictement à 1 ou supérieure
strictement à la taille de la liste), la fonction doit renvoyer −2. Si plusieurs cas d’erreur se produisent simultanément, leur gestion doit se faire dans cet
ordre précisément : le test de la liste vide en premier, puis en dernier le test de la position.*/
int clear_list_linked(list_linked* list);
/*Cette fonction vide la liste de tous ses éléments, puis renvoie le nombre d’éléments qui
ont été supprimés. Si la liste donnée en paramètre est NULL, la fonction doit renvoyer 0.*/

#endif /* _LIST__LINKED__H__ */
