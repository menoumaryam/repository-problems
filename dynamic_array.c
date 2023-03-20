//dynamic_array for int:

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
//dynamic_array for char:
#include<stdio.h>
#include<stdlib.h>

struct list{
    int longeur;
    int taille;
    char *arr;
};
typedef struct list list ;
void append_list(list *A,char x)
{
    char n=A->longeur;
    char y=A->taille;
          if(n==y)
          {
            A->taille=y*2;
            char*new_arr=(char*)malloc(y*2*sizeof(char));
            for(int i=0;i<n;i++)
            {
               new_arr[i]=(A->arr)[i];
            }
            free(A->arr);
            A->arr=new_arr;
            (A->longeur)+=1;
            (A->arr[x+1])=x;

          }
          else 
          {
            (A->longeur)+=1;
            (A->arr)[A->longeur]=x;
          }


}

int main()
{
    struct list A;
    A.longeur=0;
    A.taille=1;
    A.arr=(char*)malloc((A.taille)*sizeof(char));
    
for(int i=0;i<100;i++)
{
    append_list(&A,i);
}    
for(int i=0;i<A.longeur;i++)
{
    printf("%c;",A.arr[i]);
}
return 0;

}
