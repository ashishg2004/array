//FINDING PEAK ELEMENT IN AN ARRAY
#include<stdio.h>
void main()
{
    int n,temp; 
    printf("enter no. of elements in an array");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements in an array");
    for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
    // sorting the array using bubble sort algorithm
    for(int j = 0 ; j < n ; j++ )
    {
        for(int k=0;k<n-j-1;k++)
        {
    if (arr[j]>arr[j+1])
    {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
            }              
        }   
      }
    printf("maximum element = %d",arr[n-1]);

}
