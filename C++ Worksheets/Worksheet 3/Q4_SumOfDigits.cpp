#include <iostream>

using namespace std;

int ss=0;

int sum(int n)
{
    if(n>0)
    {
        ss=ss + n%10;
        return sum(n/10);
    }
    else
        return ss;
}

int main()
{
   int n;
   cout<<"Enter the number\n";
   cin>>n;
   int nn=n;
   int s=0;
   cout<<"Sum of the digits of the number without recursion\n";
   while(n!=0)
   {
       s=s+(n%10);
       n=n/10;
   }
   cout<<s<<endl;
   n=nn;

   int rsum= sum(n);
   cout<<"Sum of the digits of the number with recursion\n"<<rsum;

}
