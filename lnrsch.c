#include<stdio.h>
void main()
{
   int i,n,flag=0,a[10],t,s;
   printf("Enter No. of numbers:");
   scanf("%d",&n);
   printf("Enter the elements: \n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Enter the element to search: \n");
   scanf("%d",&s);
   for(i=0;i<n;i++)
   {
      if(a[i]==s)
      {
         flag=1;
         t=i+1;
         break;
      }
   }
   if(flag==1)
   {
              printf("\n Element Found at POsition %d",t);
   }
   else
   {
             printf("\n Element Not Found");
   }
}
