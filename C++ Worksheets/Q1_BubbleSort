#include <iostream>

using namespace std;

int main()
{
    int n; char temp;

    cout<<"Enter the Number of Characters"<<endl;
    cin>>n;
    char arr[n];

    cout<<"Enter the Characters" <<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }

    }

    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];

    }


}
