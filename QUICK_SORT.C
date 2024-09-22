/*QUICK SORT*/

#include<stdio.h>
#include<stdlib.h>
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

int partition(int a[],int lb,int ub)
{
    int i,j,t,pivot;
    pivot=a[lb];
    i=lb+1;
    j=ub;
    
    
    
    while(i<=j)
    
       {
                while(i<=ub && a[i]<pivot)
   
                       {
                             i++;
                       }
    
         
               while(j>=lb && a[j]>pivot)
                        {
                            j--;
                        }
               if(i<j)
                        {
                            t=a[i];
                            a[i]=a[j];
                            a[j]=t;
                        }
       }
       
       a[lb]=a[j];
       a[j]=pivot;
       return(j);
}          

void quick_sort(int a[],int lb,int ub)
{
    int j;
    if(lb<ub)
    {
        j=partition(a,lb,ub);
        quick_sort(a,lb,j-1);
        quick_sort(a,j+1,ub);
        
        
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
    
    quick_sort(a,0,n-1);
    
    printf("\nafter sortting data  :");
    display(a,n);
    return 0;
    
}