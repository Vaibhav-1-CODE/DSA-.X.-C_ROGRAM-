/*insertion sort on string-descending order */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insertionsort(char*a[100],int n)
   {
       int i,j;
       char hold[60];
          for(i=1;i<n;i++)
             {
                 strcpy(hold,a[i]);
                       for(j=i-1;j>=0 && strcmp(a[j],hold)<0;j--) /*for accending change >*/
                        {
                         strcpy(a[j+1],a[j]);     
                        
                         }
            strcpy(a[j+1],hold);         
            }
   }        
   
   void acceptarray(char*a[],int n)
   {
       int i;
       printf("enter the  character\n",n);
       for(i=0;i<n;i++)

       {


           scanf("%s",a[i]);
       }
   }

   void displayarray(char*a[],int n)
   {
       int i;
       printf("the sorted character is \n");
       for(i=0;i<n;i++)
         {
             printf("%s\t",a[i]);

         }
   }



int main()
{


    int n,i;
    printf("enter the size of array\n");
    scanf("%d",&n);
    char*a[100]={0};
    for (i=0;i<n;i++)
            {
                a[i]=(char*)malloc(sizeof(char)*10);



            }
    acceptarray(a,n);
    insertionsort(a,n);
    displayarray(a,n);

}