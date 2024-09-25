/* MENU DRIVEN PROGRAM ALL SORTTING TECHNIQUE*/

#include <stdio.h>
#include <stdlib.h>

void accept(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Enter the data: ");
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubble_sort(int a[], int n)
 {
       int i,j;
       int swapping=1;
       int temp;
          for(i=1;i<n && swapping; i++)
             {
                 swapping=0;
                 for(j=0;j<n-i;j++)
                    {
                         if(a[j]>a[j+1])
                           {    
                               swapping =1;
                               temp=a[j];
                               a[j]=a[j+1];
                               a[j+1]=temp;
                            } 
                    }  
            }        
   }

void inser_sort(int a[], int n) 
{
    int i,j;
    int t;
    
    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>t)
            {
                a[j+1]=a[j];
                
            }
            else
            {
                break;
            }
            
        }
        a[j+1]=t;
    }
}
void selection_sort(int a[], int n) 
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
void merge(int a[], int lb, int mid, int ub) 
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
void merge_sort(int a[], int lb, int ub) {
    int mid;
    if(lb < ub)
    {
         mid = (lb + ub) / 2;
        merge_sort(a, lb, mid);
        merge_sort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

int partition(int a[], int lb, int ub)
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

void quick_sort(int a[], int lb, int ub) {
    int j;
    if(lb < ub) {
         j = partition(a, lb, ub);
        quick_sort(a, lb, j - 1);
        quick_sort(a, j + 1, ub);
    }
}

int main() {
    int n, choice;
    int a[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("accepting the %d array\n",n);
    accept(a, n);
    printf("Array before sorting: ");
    display(a, n);

    while(1) {
        printf("\nSORTING MENU\n");
        printf("-------------\n");
        printf("1. Bubble Sort\n");
        printf("2. Insertion Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Merge Sort\n");
        printf("5. Quick Sort\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                bubble_sort(a, n);
                printf("Array after Bubble Sort: ");
                display(a, n);
                break;
            case 2:
                inser_sort(a, n);
                printf("Array after Insertion Sort: ");
                display(a, n);
                break;
            case 3:
                selection_sort(a, n);
                printf("Array after Selection Sort: ");
                display(a, n);
                break;
            case 4:
                merge_sort(a, 0, n - 1);
                printf("Array after Merge Sort: ");
                display(a, n);
                break;
            case 5:
                quick_sort(a, 0, n - 1);
                printf("Array after Quick Sort: ");
                display(a, n);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }
    
    return 0;

    }