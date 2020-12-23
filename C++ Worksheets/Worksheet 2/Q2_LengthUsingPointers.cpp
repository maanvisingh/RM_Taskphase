#include <iostream>

using namespace std;

int main()
{
    char ch[100];

    cout<<"Enter a String \n";
    cin>>ch;

    char *p=ch;
    int i;

    for(i=0;i<100;i++)
    {
      if(*(p++)=='\0')
      break;
    }

    cout<<"The length of the string is "<<i;
}

