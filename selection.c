#include<stdio.h>
#define size 5
void selection(int arr[]);
void main()
{
 int arr[size];
 printf("Enter array elements :");
 for(int i=0;i<size;i++)
 scanf("%d",&arr[i]); 
 printf("Sorted array :");
 selection(arr);
 for(int i=0;i<size;i++)
 printf("%d ",arr[i]);
}

void selection(int arr[])
{
 int small,pos,temp;
 for(int i=0;i<size;i++)
 {
  small=arr[i];
  pos=i;
  for(int j=i+1;j<size;j++)
  {
    if(small>arr[j])
    {
     small=arr[j];
     pos=j;
    }
  }
  temp=arr[i];
  arr[i]=arr[pos];
  arr[pos]=temp; 
 }
}
