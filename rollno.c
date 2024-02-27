#include<stdio.h>
int main()
{
    
int arr[4][2]; 
printf( "Enter the roll no and marks of the students:\n");
//INPUTING ELEMENTS IN AN ARRAY
for(int i=0;i<4;i++)
{
    for(int j=0;j<2;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("\n");
//PRINTING AN ARRAY
for(int i=0;i<4;i++)
{
    for(int j=0;j<2;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
} 