#include<stdio.h>
void main()
{
   int i,n,flag=0,a[10],t,s,m,l,f;
   printf("Enter No. of numbers:");
   scanf("%d",&n);
   printf("Enter the elements: \n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Enter the element to search: \n");
   scanf("%d",&s); 
  f=0;
  l=n-1;
  for(i=0;i<n/2;i++)
  {
    m=(f+l)/2;
    if(a[m]==s)
    {
     flag=1;
     t=m+1;
    }
    else if(a[m]<s)
    {
      f=m+1;
    }
     else
    {
      l=m-1;
    }
  }
  if(flag==1)
  {
    printf("the element at position %d \n",t);  
  }
  else
  {
     printf("the element Not found");  
   }
}  
  
  
    
    
    
    
    

