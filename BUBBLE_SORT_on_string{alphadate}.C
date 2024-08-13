/*bubble sort on string-descending order */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubblesort(char*a[100],int n)
   {
       int i,j;
       int swapping;
       char temp[60];
          for(i=1;i<n;i++)
             {
                 swapping=0;
                 for(j=0;j<n-i;j++)
                    {
                         if(strcmp(a[j],a[j+1])<0)/*for accending change >*/
                           {    
                               
                               strcpy(temp,a[j]);
                               strcpy(a[j],a[j+1]);
                               strcpy(a[j+1],temp);
                             
                        
                       swapping=1;                          
                               
                           }
                            
                    }
                    if(swapping==0)
                           break;
                  
                    
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
    bubblesort(a,n);
    displayarray(a,n);
    
}