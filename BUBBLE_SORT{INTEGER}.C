/*BUBBLE SORT (INTRGER)*/

#include<stdio.h>

void bubblesort(int a[],int n)
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
   void acceptarray(int a[],int n)
   {
       int i;
       printf("enter the %d elemrnt element\n",n);
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
   }
   
   void displayarray(int a[],int n)
   {
       int i;
       printf("the sorted array is \n");
       for(i=0;i<n;i++)
         {
             printf("%d\t",a[i]);
         }
   }
   
int main()
{
    int a[1000];
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    acceptarray(a,n);
    bubblesort(a,n);
    displayarray(a,n);
}
  
   
   
           