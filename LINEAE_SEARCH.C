/* LINEAR SEARCH*/
#include<stdio.h>

void accept(int a[],int n)
{
    int i;
    for(i=0;i<n ;i++)
    {
        printf("enter the  data  : ");
        scanf("%d",&a[i]);
    }
    

}

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void bubble_sort(int a[],int n)
{
    int i,j;
    int temp;
    
    
      for(i=1;i<n;i++)
      {
          for(j=0;j<n-i;j++)
          {
              if(a[j]>a[j+1])
              {
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
              }
          }
      }
    

    }
    
int linear_search(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
            
        }
    }
    return -1;
}
int main()
{
    int n,key,pos;
    int a[1000];
    
    
    printf("enter the number you want to store  :");
    scanf("%d",&n);
    
    
    printf("accepting [%d] array \n",n);
    accept(a,n);
    
    printf("before sort array  :");
    display(a,n);
    
    bubble_sort(a,n);
    
    printf("\nafter sortting array  :");
    display(a,n);
    
    printf("\nwhich element you eant to search  :");
    scanf("%d",&key);
    
    pos=linear_search(a,n,key);
    if(pos==-1)
       {
        printf("data [%d] is not found in given array",key);
       }
     
     
     else
     {
         printf("data [%d] is found at index[%d] position !!!",key,pos);
     }
     return 0;

}
