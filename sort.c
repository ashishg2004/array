#include<stdio.h>
void main()
{
    int n; 
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
    if (arr[k]>arr[k+1])
    {
        int temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
            } 
                         
        }   
        
      }
      printf( "The sorted array is : \n" );
      for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
}