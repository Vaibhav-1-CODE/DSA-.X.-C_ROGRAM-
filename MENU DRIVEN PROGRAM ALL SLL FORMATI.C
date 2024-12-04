/*MENU DRIVEN PROGRAM ALL SLL FORMATION*/

#include <stdio.h>
#include <stdlib.h>

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
               printf("enter the data  :");
               scanf("%d",&t->data);
               l->next=t;
               l=l->next;
               l->next=NULL;
      
      }
      return f;
}
void display(struct node *f)
{
    struct node *t;
    for(t=f;t!=NULL;t=t->next)
    {
        printf("%d\t",t->data);
    }
}
struct node* eraseall(struct node*f)
{
    struct node*t;
    while(f!=NULL)
    {
        t=f;
        f=f->next;
        free(t);
    }
    return f;
}

//ADD NODE IN FIRST POSITION
struct node* add_first(struct node*f)
{
    struct node *t;
    t= NEWNODE;
    printf("\nenter the data you want to add first\n");
    printf("\nenter the data  :");
    scanf("%d",&t->data);
    t->next=NULL;
    
    t->next=f;
    f=t;
    return f;
}

struct node* del_first(struct node*f)

{

        struct node*t;

           if(f==NULL)
              {
                 return f; 
              }
           else
             {
               t=f;
               f=f->next;
               free (t);
             }
             return f;
              
              
}              
struct node*add_last(struct node*f)
{
    struct node*t,*l;
    t=NEWNODE;
    printf("\nenter the data you want to add last");
    printf("\nenter the data  :");
    scanf("%d",&t->data);
    t->next=NULL;
    //USING L TO TRAVERSE THE LIST
    
    for(l=f;l->next !=NULL;l=l->next);//golden line
    
    l->next=t;
    return f;
}
              
  

    struct node *del_last(struct node*f)
    {
        struct node *l,*s;
        
        for(l=f;l->next !=NULL;l=l->next)
        {
            s=l;
        }
        free(l);
        s->next=NULL;
        return f;
        
    }

int lengthll(struct node*f)
    {
        int cnt=0;
        struct node *t;
        
        
        for(t=f;t!=NULL;t=t->next)
        {
            cnt++;
        }
        return cnt;
    }
    
struct node *insret(struct node *f ,int pos)
{
    int i;
    struct node *t,*s;
    
    t=NEWNODE;
    printf("enter the data  :  ");
    scanf("%d",&t->data);
    t->next=NULL;
    
    
          if(pos==1)
              {
                 t->next=f;
                 f=t;
                 printf("node is added sucessfully");
                          return f;
              }
          else
          {
              s=f;
              for(i=1;i<=pos-2 && s!=NULL;i++)
              {
                  s=s->next;
              }
              if(s==NULL)
                   {
                      printf("INVALID POSTIION");
                      free(t);//golden line
                      return f;
                   }
                   else
                   {
                       t->next=s->next;
                       s->next=t;
                       printf("node is added sucessfully !!\n");
                       return f;
                   }
          }
                      
    
    
    
}
    
struct node*del_pos(struct node*f,int pos)
{
    int i;
    struct node*t,*s;
    
        if(pos==1)
           {
              t=f;
              f=f->next;
              free(t);
        
              printf("node is deleted sucessfully !!");
              return f;
           }
        else
          {
              s=f;
              for(i=1;i<=pos-2 && s!=NULL;i++)
              {
                  s=s->next;
              }
              if(s->next==NULL  ||s==NULL)//GOLDEN LINE
               {
                  printf("INVALID POSITION FOR DELECTION");
                  return f;
               }
             else
              {
                  t=s->next;
                  s->next=t->next;
                  free(t);
                  printf("node is added sucessfully");
                  return f;
                  
              }
              
          }
    
}      
int main() 
{
    
    struct node *head=NULL;
    int n;
    int ans;
    int pos;
    int choice;
     
     
     printf("how many nodes :  \n");
     scanf("%d",&n);
     
     
     head=create(n);
     
     printf("your created linked list is  :");
     display(head);


    while(1) {
        printf("\nFORMATION OF NODE MENU\n");
        printf("-------------\n");
        printf("1. ADD NODE IN FIRST POSITION\n");
        printf("2. DELETE NODE OF FIRST POSITION\n");
        printf("3. ADD NODE IN LAST POSITION\n");
        printf("4. DELETE NODE OF LAST POSITION\n");
        printf("5. NUMBERS OF NODES IN YOUR LINKED LIST \n");
        printf("6. WHICH POSITION YOU WANT TO ADD NODE\n");
        printf("7.WHICH NODE YOU WANT TO DELETE\n");
        
        
        
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                   head=add_first(head);
                   printf("add first node  :");
                   display(head);
                   printf("[add sucessfully]");
                   break;
            case 2:
                   head=del_first(head);
                   printf("\nDEL first node  :");
                   display(head);
                   printf("[del first sucessfully]");   break;
            case 3:
                    head=add_last(head);
                    printf("\nadd last node  :");
                    display(head);
                    printf("[add last sucessfully]"); break;
            case 4:
                    head=del_last(head);
                    printf("\ndel last node  :");
                    display(head);
                    printf("[del last sucessfully]");      break;
            case 5:
                    ans=lengthll(head);
                    printf("\nnumber of nodes in your linked list  :  %d \n",ans);
                    break;
            case 6:
                    printf("which postiom you want ti add  node  :");
                    scanf("%d",&pos);
    
                    head=insret(head,pos);
                    printf("\nafter insertion  :");
                    display(head);
                    break;
            case 7:
                    printf("\nwhich postiom you want ti delete node   :");
                    scanf("%d",&pos);
    
                    head=del_pos(head,pos);
                    printf("\nafter deletetion of node   :");
                    display(head);
                    break;
        
            
            
            
            case 8:
             printf("JAI HIND🚩🚩🚩🚩🚩🚩🚩🚩🚩🚩🚩🚩🚩");
                exit(0);
            default:
                printf("Invalid Choice! Please try again.\n");
            
        }
    
}



    }