/*CREATING & DISPLAY  CIRCULAR SINGLY LINKED LIST*/

#include<stdio.h>
#include<stdlib.h>

#define NEWNODE (struct node*) malloc (sizeof(struct node))

  struct node
{
    int data;
    struct node*next;
};
struct node*create(int n)
{
   int i;
  struct node *f, *l, *t;
  
  f= NEWNODE;
  printf("enter the data   :");
  scanf("%d",&f->data);
  f->next=NULL;
  l=f;
  
          for(i=2;i<=n;i++)
     {
               t=NEWNODE;
               printf("enter%d the data  :");
               scanf("%d",&t->data);
               l->next=t;
               l=l->next;
               l->next=NULL;
      
      }
      l->next=f;
      return f;
}
void display(struct node *f)
{
    struct node *t;
    t=f;
    do

    {
      printf("%d\t",t->data);
      t=t->next;
    }
    while(t!=f);
}
struct node* eraseall(struct node*f)
{
    struct node*t;
    
    t=f;
    f=f->next;
    t->next=NULL;
    
    
    
    while(f!=NULL)
    {
        t=f;
        f=f->next;
        free(t);
    }
    return f;
}

int main()
{
    struct node *head=NULL;
    int n;
     
     
     printf("how many nodes :  \n");
     scanf("%d",&n);
     
     
     head=create(n);
     
     printf("your created linked list is  :");
     display(head);
     
     head=eraseall(head);
     printf("\nlink list free sucesfull");
}