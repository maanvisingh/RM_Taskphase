#include <iostream>

using namespace std;


void binarysearch(int arr[], int n)
{
    int key;
    cout<<"\n\nEnter the element that you want to search for:\n";
    cin>>key;

    int first=0;
    int last=n-1;
    int mid = (last + first) / 2;
    int flag=0;

    while (first <= last)
    {
        mid = (last + first) / 2;
        if(arr[mid]==key)
        {
            flag=1;
            break;
        }
        else if (key < arr[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }

    if(flag==1)
    {
        cout<<"The element was found at the index: "<<mid;
    }
    else
        cout<<"The element is not present in the array";
}

void bubblesort(int arr[], int n)

{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }

    cout<<"Sorted array using bubble sort:\n";
    for(int i=0; i<n;i++)
    {
      cout<<arr[i]<<endl;
    }

     binarysearch(arr,n);

}


void selectionsort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
        {
            int pos= i;
            for (int j = i+1; j < n; j++)
            {
                if (arr[j] < arr[pos])
                    pos= j;
            }

            int temp = arr[pos];
            arr[pos] = arr[i];
            arr[i] = temp;
        }

    cout<<"Sorted array using selection sort:\n";
    for(int i=0; i<n;i++)
    {
      cout<<arr[i]<<endl;
    }

    binarysearch(arr,n);
}

int main()
{

   int n;
   cout<<"Enter the number of array elements\n";
   cin>>n;

   int arr[n];
   cout<<"Enter the array elements\n";
   for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    char tech;
    cout<<"Enter the sorting technique to be used\n";
    cout<<"Enter b Bubble Sort\n";
    cout<<"Enter s Selection Sort\n";
    cin>>tech;

    switch(tech)
    {
    case 'b':
        bubblesort(arr,n);
        break;
    case 's':
        selectionsort(arr,n);
        break;
    default:
        cout<<"Invalid Character Entered\n";
    }

}
