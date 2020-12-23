#include <iostream>

using namespace std;

int main()
{
    int n;
    int digits=0; int flag=1;
    int largest; int index;
    cout<<"Enter the Number\n";
    cin>>n;
    int nn=n;
    int rev=0;

    while(n!=0)
    {
      rev=rev*10+n%10;
      n=n/10;
      digits++;
    }

    int arr[digits];

    for(int i=0;i<digits;i++)
    {
        arr[i]=rev%10;
        rev=rev/10;
    }

    largest=arr[0];
    index=0;

    for(int i=0;i<digits-1;i++)
    {
        if(arr[i+1]>arr[i])
            {
             largest=arr[i+1];
             index=i+1;
            }
    }

    if(digits<3)
        flag=0;

    else if(index==digits-1)
            flag=0;

    else

{

    int peak=0;
    for(int i=0;i<digits;i++)
    {
        if(arr[i]==largest)
            peak++;
    }


    if (peak>1)
    {
        flag=0;
    }

    else
    {
        for(int i=0;i<index;i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag=0;
                break;
            }

        }

        for(int i=index;i<digits-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                flag=0;
                break;
            }
        }

    }
}

    if(flag==0)
        cout<<"It is NOT a Hill Number"<<endl;
    else
        cout<<"It is a Hill Number"<<endl;



}
