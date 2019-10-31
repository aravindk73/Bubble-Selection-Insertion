#include<stdio.h>
#define size 5
void bubble(int arr[]);
void main()
{
 int arr[size];
 printf("Enter array elements :");
 for(int i=0;i<size;i++)
 scanf("%d",&arr[i]); 
 printf("Sorted array :");
 bubble(arr);
 for(int i=0;i<size;i++)
 printf("%d ",arr[i]);
}

void bubble(int arr[])
{
 int i,j,temp;
 for (i=0;i<size;++i) 
  {
   for (j=i+1;j<size;++j)
    {
     if (arr[i]>arr[j]) 
      {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
      }
    }
 }
}
