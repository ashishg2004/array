//Write a program in C to find the second smallest element in an array.
#include<stdio.h>
void main()
{
    int n,first=0; 
    printf("enter no. of elements in an array \n");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements in an array \n");
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
      printf( "The second smallest is : \n" );
            printf("%d ",arr[first+1]);
}