#include <stdio.h>
#include <stdlib.h>

int main()
{
   int y = 0,i;
   int arr[3];
   for(i=0;i<3;i++)
    scanf("%d",&arr[i]);

   for(i=1;i<3;i++)
   {
    if(arr[y]<arr[i])
    y = i;
   }
    printf("%d",arr[y]);
    return 0;
}
