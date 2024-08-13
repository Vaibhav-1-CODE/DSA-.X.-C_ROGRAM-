/*Insertion sort (integer)*/

#include<stdio.h>

void insertion_sort(int a[],int n)
   {
       int hold;
       int i,j;
       
          for(i=1;i<n; i++)
             {
                 hold=a[i];
                 for(j=i-1;j>=0&& hold<a[j];j--)   #for desending order change ">"
                    a[j+1]=a[j];
                    a[j+1]=hold;
                               
                    
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
    insertion_sort(a,n);
    displayarray(a,n);
}
  