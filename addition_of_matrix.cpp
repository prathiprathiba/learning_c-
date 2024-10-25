/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int a[2][2],b[2][2],c[2][2];
    int i,j;
    cout<<"ADDITION OF MATRIX"<<endl;
    
    cout<<"enter the first matrix :"<<endl;
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
       cout<<"enter the element for first matrix : "<<i+1<<j+1;
       cin>>a[i][j];
       
    }
    }
    cout<<"enter the second matrix : "<<endl;
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        cout<<"enter the element for second matrix : "<<i+1<<j+1;
        cin>>b[i][j];
    }
    }
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}    