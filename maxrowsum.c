#include<stdio.h>
int main()
{
    printf("enter no. of rows and columns ");
    int row,col,temp=0;
    scanf( "%d %d", &row,&col);
int arr[row][col];
int maxsum=0,index=0; 
printf( "Enter the elements of %d X %d array:\n",row,col);
//INPUTING ELEMENTS IN AN ARRAY
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("\n");
for(int i=0;i<row;i++)
{
    int sum=0;

    for(int j=0;j<col;j++)
   {
    sum=sum+arr[i][j];
    if(sum>maxsum)
    maxsum=sum;
    index=i;
   }
}
printf("maximum sum is %d at row number %d",maxsum,index );


return 0;
} 
