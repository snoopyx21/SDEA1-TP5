// fichier iter_ldc.h

#ifndef __iter_ldc_h__
#define __iter_ldc_h__
#include "listes.chainees.h"

typedef struct  sit {
            Liste first; // premier élément de la liste
            Liste cur;   // élément courant
                } *Iter;
                
                
Iter init(Liste L);
Bool end(Iter i)
Iter first(Iter i); // réinitialise l'itérateur au début
Iter next(Iter i);  // avec un effet de bord et une indic. de fin
Iter prev(iter i);
S value(Iter i);

#endif
