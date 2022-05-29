#include <stdio.h>
#include <stdlib.h>

//int binarysearch(int arr[],int first,int last,int x){}

int main()
{
   int arr[]={5,7,1,4,8,3,2,9};

   int n=sizeof(arr)/sizeof(arr[0]);
   int x=13;//value that need to search

   int first=0;
   int last=n-1;
   int middle=first+last;

   while(x != arr[middle] && first<=last){
    if(x>arr[middle]){
        first=middle+1;
    }
    if(x<arr[middle]){
        last=middle-1;
    }

    middle=(first+last)/2;
   }
   if(x== arr[middle])
     printf("%d value found at the position %d ",x,middle+1);

   if(first >last){
    printf("value is not in the list");
   }
    return 0;
}
