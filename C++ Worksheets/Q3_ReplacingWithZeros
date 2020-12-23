#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows\n";
    cin>>m;
    cout<<"Enter the number of columns\n";
    cin>>n;

    int mat[m][n];
    int dupmat[m][n];

    cout<<"Enter the matrix elements\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            dupmat[i][j]=mat[i][j];
        }

    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          if (mat[i][j]==0)
          {
              for(int a=0;a<n;a++)
               {
                dupmat[i][a]=0;
               }
              for(int b=0;b<m;b++)
               {
                 dupmat[b][j]=0;
               }

          }
        }
    }

        cout<<"The new matrix is\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<dupmat[i][j]<<" ";
            }
            cout<<endl;
        }
}
