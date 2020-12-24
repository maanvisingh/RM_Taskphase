#include <iostream>

using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}


int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int f=fact(n);
    cout<<"The factorial of the number is\n"<<f;
}
