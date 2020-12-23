#include <iostream>

using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter the first number\n";
    cin>>num1;
    cout<<"Enter the second number\n";
    cin>>num2;

    int fact1=0;
    for(int i=1;i<=num1/2;i++)
    {
        if(num1%i==0)
            fact1=fact1+i;
    }

    int fact2=0;
    for(int i=1;i<=num2/2;i++)
    {
        if(num2%i==0)
            fact2=fact2+i;
    }

    if(fact1==num2 && fact2==num1)
        cout<<"They are amicable numbers";

    else
        cout<<"They are NOT amicable numbers";


}
