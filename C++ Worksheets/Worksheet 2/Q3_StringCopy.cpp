#include <iostream>

using namespace std;

int main()
{
  char str[100];
  char strcopy[100];

  cout<<"Enter the String to be copied\n";
  cin>>str;

  char *p=str;
  int i=0;

  while(*(p)!='\0')
  {
      strcopy[i]=*p;
      i++;
      p++;

  }
  cout<<"Copied String is: "<<strcopy;
}
