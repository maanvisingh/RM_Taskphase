#include <iostream>

using namespace std;


int Euclideanalgo(int num1,int num2)
{
    int rem;
    int temp;

    if(num1>num2)
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }
        rem=num2%num1;

    if(rem==0)
            return num1;
    else
        return Euclideanalgo(num1,rem);

}


int main()
{

  int num1,num2;
  cout<<"Enter the first number"<<endl;
  cin>>num1;
  cout<<endl;
  cout<<"Enter the second number"<<endl;
  cin>>num2;
  cout<<endl;

  int hcf = Euclideanalgo(num1, num2);
  cout<<"The greatest common factor of the two numbers is\n";
  cout<<hcf;

}






