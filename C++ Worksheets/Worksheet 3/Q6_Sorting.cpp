#include <iostream>

using namespace std;
int a=-1, nn;

void bubblesort(int arr[], int n)
{
    if(a==-1)
    {
        nn=n; a++;
    }

    if(n>=0)
    {

    for(int j=0; j<n-1-a;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    bubblesort(arr,n-1);
    }

    else
    {
        cout<<"The sorted array is"<<endl;
        for(int i=0;i<nn;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

}



int main()
{
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubblesort(arr,n);
}
