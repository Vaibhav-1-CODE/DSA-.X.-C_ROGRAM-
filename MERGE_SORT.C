/*MERGE SORT*/
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

void merge(int a[],int lb,int mid,int ub)
{
    int i,j,k;
    int temp[100];
    
    i=lb;
    j=mid+1;
    k=0;
    
    while(i<=mid && j<=ub)
    {
        if (a[i]<a[j])
         {
          temp[k]=a[i];
          i++;
           k++;
        
         }
    else
       {
        temp[k]=a[j];
        j++;
        k++;
      }
    
    
}


        while (i<=mid)
        {
            temp[k++]=a[i++];
        }
        while (j<=ub)
        {
            temp[k++]=a[j++];
            
        }
    
      for(i=lb,k=0;i<=ub;k++,i++)
                        {
                            a[i]=temp[k];
                        }
}          

void merge_sort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        
        merge(a,lb,mid,ub);
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
    
    merge_sort(a,0,n-1);
    
    printf("\nafter sortting data  :");
    display(a,n);
    
}