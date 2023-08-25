// listes.chainees.h

#ifndef __type_BOOL__
#define __type_BOOL__
 typedef enum {faux=0, vrai} Bool;
#endif

#ifndef __LISTES_CHAINEES_H__
#define __LISTES_CHAINEES_H__
#define S int
typedef struct sldc { S v; //valeur
		struct sldc *s; //suivant
		struct sldc *p;
		} *Liste;

Liste l_vide(Liste liste);
Liste ajout_tete(Liste liste,S a);
Liste insert_i(Liste liste, int i, S a);
int position(Liste liste,S a);
Liste supp_i(Liste liste,int i);
S acces_i(Liste liste,int i);
#endif
