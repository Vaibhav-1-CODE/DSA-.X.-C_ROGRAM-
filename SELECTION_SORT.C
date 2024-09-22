/*SELECTION SORT*/


#include<stdio.h>
void accept(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter the data :");
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}

void selection_sort(int a[],int n)
{
    int i,j;
    int temp;

             for(i=0;i<n;i++)
                {
                     for(j=i+1;j<n;j++)
                     {
                         if(a[i]>a[j])
                         {
                             temp=a[i];
                             a[i]=a[j];
                             a[j]=temp;
                         }
                     }
                }
    
}
int main()
{
    int n;
    int a[1000];
    
    printf("enter the size of element you want to store  :");
    scanf("%d",&n);
    
    printf("accepting the %d element ",n );
    accept(a,n);
    
    printf("befoer sortting data  :  ");
    display(a,n);
    
    selection_sort(a,n);
    
    printf("\nafter sortting data  :");
    display(a,n);
    
}