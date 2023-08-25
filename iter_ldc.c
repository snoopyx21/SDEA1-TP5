// fichier iter_ldc.c

#include "iter_ldc.h"
#include <stdlib.h>

Iter init(Liste L)
{
    Iter i = (Iter) malloc(sizeof(struct sit)); // attention, il faudraa penser à désallouer
    i->first =  L;
    i->cur = L;
    return i;
}
Bool end(Iter i)
{
    return i->cur==NULL; // fonctionne pour le début et la fin de la liste
}

Iter first(Iter i)
{
    i->cur = i->first;
    return i;
}

Iter next(Iter i) // avec un effet de bord
{
    if(!i->cur) return i;
    i->cur = i->cur->s;
    return i;
}

Iter prev(iter i)
{
    if(!i->cur) return i;
    i->cur = i->cur->p
    return i;
}

S value(Iter i)
{
    return i->cur->v;
}
