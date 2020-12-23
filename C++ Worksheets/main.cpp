#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the Decimal Number\n";
    cin>>n;
    int nn=n;


    //TO HEXADECIMAL
    char hex[100]; int i=0;

     while(n!=0)
    {
        int temp=0;

        temp =n%16;

        if(temp<10)
        {
            hex[i] = temp+48;
        }
        else
        {
            hex[i] = temp+55;
        }

        n = n/16;
        i++;
    }

    cout<<"\nIt's hexadecimal equivalent is\n";
    for (int j=i-1; j>=0; j--)
       cout<< hex[j];


    //TO BINARY
        n=nn;
        int bin[100];
        int k = 0;

        while (n>0)
        {
            bin[k] = n%2;
            n = n / 2;
            k++;
        }

        cout<<"\n\nIt's Binary equivalent is\n";
    for (int j=k-1; j>=0; j--)
       cout<< bin[j];




    //TO OCTAL
    n=nn;
        int oct[100];
        int y = 0;

        while (n>0)
        {
            oct[y] = n%8;
            n = n / 8;
            y++;
        }

        cout<<"\n\nIt's Octal equivalent is\n";
    for (int j=y-1; j>=0; j--)
       cout<< oct[j];


}
