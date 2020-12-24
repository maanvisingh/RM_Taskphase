#include <iostream>

using namespace std;

int a=0,b=1;
int c;

void fibo(int n)
{
    c=a+b;
    a=b;
    b=c;
    cout<<a<<" ";
    if(n>2)
    fibo(n-1);

}

int main()
{
   fibo(40);
}
