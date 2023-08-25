// test_iter.c
#include <stdio.h>
#include <stdlib.h>

#define in , 
#define foreach(V,L) Iter _I = init(L); for( V = val(_I) ; ! end(_I); next(_I), V = val(_I))
#define N 10
#define S int

typedef int Liste[N];
typedef struct si {int *first; int *cur;} *Iter;
typedef int Bool;

Iter init(Liste l) ;
Bool end(Iter i) ;
Iter next(Iter i);
S val(Iter i);



Iter init(Liste l) {
    Iter i = (Iter) malloc(sizeof(struct si)); 
    i->first = i->cur = l; 
    return i;}
Bool end(Iter i) {return i->cur- i->first == N;}
Iter next(Iter i){i->cur++; return i;}
S val(Iter i){return *i->cur;}


int main()
{
   Liste t = {0,1,2,3,4,5,6,7,8,9};
   S v;
   int a = 5 in b=7;
   foreach(v, t) printf("%d",v);
   
   printf("\n");
   
   
   printf("\n");
   
}

