#include <iostream>

using namespace std;


int binsearch(int arr[], int f, int l, int key)
{
     if (l >= f)
    {
        int mid = f + (l-f)/2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
            return binsearch(arr,f, mid - 1, key);

        else
        return binsearch(arr, mid+1, l, key);
    }
    return -1;
}

int main()
{
   int n;
   cout<<"Enter the size of array\n";
   cin>>n;

   int arr[n];
   cout<<"Enter the sorted array elements\n";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   int key;
   cout<<"Enter the key to be searched for\n";
   cin>>key;

   int flag = binsearch(arr, 0, n-1, key);

   if(flag!=-1)
    cout<<key<<" is found at index "<<flag;
   else
    cout<<"The element is not found";

}
