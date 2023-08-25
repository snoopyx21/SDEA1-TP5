// listes.chainees.c

#include "listes.chainees.h"
#include <stdio.h>
#include <stdlib.h>

#define S int

Liste l_vide(Liste liste){
  return (Liste)NULL;
}
Liste ajout_tete(Liste liste, S a){
  Liste l=malloc(sizeof(struct sldc));
  l->v=a;
  l->s=liste;
  l->p=NULL;
  return l;
}
Liste insert_i(Liste liste,int i, S a){
  if(!liste)
    return liste;
  Liste l=liste;
  int j=0;
  while(j!=i && !l)
    l=l->s;
  if(!l) return l;
  else{
     Liste l2=l->s;
     l2->p=NULL;
     free(l);
     return l2;
  }
}
int position(Liste liste, S a){
  if (!liste) return 0;
  int j=0;
  while(liste->s->v!=a && !liste)
    j++;
  return j;
}
Liste supp_i(Liste liste,int i){
  if(!liste)
    return liste;
  Liste l=liste;
  int j=0;
  while(j!=i && !l)
    l=l->s;
  if(!l) return l;
  else{
    Liste l2=l->s->s;
    l->p->p=l2;
    free(l);
    return l;
  }
}
S acces_i(Liste liste,int i){
  if(!liste)
    return 0;
  Liste l=liste;
  int j=0;
  while(j!=i && !l)
    l=l->s;
  if(!l) return 0;
  else return (S)l->v;
}
