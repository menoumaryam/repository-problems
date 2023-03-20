#include<stdio.h>
#include<stdlib.h>

struct list{
    int longeur;
    int taille;
    int *p;
};
typedef struct list list ;
void append_list(list *lista,int x)
{
    int n=lista->longeur;
    int y=lista->taille;
          if(n==y)
          {
            lista->taille=y*2;
            int*p2=(int*)malloc(y*2*sizeof(int));
            for(int i=0;i<n;i++)
            {
               p2[i]=(lista->p)[i];
            }
            free(lista->p);
            lista->p=p2;
            (lista->longeur)+=1;
            (lista->p[x+1])=x;
          }
          else 
          {
            (lista->longeur)+=1;
            (lista->p)[lista->longeur]=x;
          }


}

int main()
{
    struct list lista;
    lista.longeur=0;
    lista.taille=1;
    lista.p=(int*)malloc((lista.taille)*sizeof(int));
    
for(int i=0;i<100;i++)
{
    append_list(&lista,i);
}    
for(int i=0;i<lista.longeur;i++)
{
    printf("%d;",lista.p[i]);
}
return 0;
}
