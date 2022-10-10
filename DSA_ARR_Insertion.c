#include<stdio.h>
//program to display array 
void display(int arr[],int n )
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");

}
//program to add elements into array 
int IndexInsert(int arr[],int size,int capacity, int index,int element)
{
   if(size>capacity)
      return -1;
   for(int i=size-1;i>=index;i--)
   {
       arr[i+1]=arr[i];
   }
   arr[index]=element;
   return 1;

}
//program to delete element from array 
void IndexDeletion(int arr[],int size,int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];

    }
} 
//program for Linear search 
int LinearSearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            printf("ELEMENT FOUND AT INDEX -%d\n",i);
            return 1;
        }
    }
    return -1;
}

//program for binary search 
int BinarySearch(int arr[],int size,int element)
{
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]=element)
        {
            printf("ELEMENT FOUND AT INDEX- %d",mid);
            return 1;
        }
        if(element>mid)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}


//Main program 
int main()
{
    int myarr[10]={2,4,5,6,7,69};
    int size=6,element=66,index=3;
    printf("INITIAL ARRAY:-\n");
    display(myarr,4);
    IndexInsert(myarr,6,10,3,888);
    printf("ARRAY AFTER INSERTION:-\n");
    display(myarr,6);
    printf("ARRAY AFTER DELETION :-\n");
    IndexDeletion(myarr,7,2);
    display(myarr,7);
    LinearSearch(myarr,6,888);
    BinarySearch(myarr,6,888);
    return 0;

}