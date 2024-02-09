//Write a program in C to delete the element in the array from desired position.
#include<stdio.h>
void main()
{
    int n,a,p; 
    printf("enter no. of elements in an array \n");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements in an array in unsorted form \n");
    for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
//input postion of the element to be deleted
    printf("Enter position from where you want to delete this element \n");
    scanf("%d",&p);
 // shifting array to the left side
 for(int i=p;i<=n-1;i++)
 arr[i]=arr[i+1];
        printf( "The new array is : \n" );
      for(int i=0;i<n-1;i++)
            printf("%d ",arr[i]);
}
