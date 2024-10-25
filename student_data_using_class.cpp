/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Student
{
    public:
    char name[50];
    int regno;
    float marks[6];
    float m1,m2,m3,avg;
public:
void getdata()
{
    cout<<"enter your name: ";
    cin>>name;
    cout<<"enter your register number: ";
    cin>>regno;
    cout<<"enter your tamil mark: ";
    cin>>m1;
    cout<<"enter your english mark: ";
    cin>>m2;
    cout<<"enter your maths mark: ";
    cin>>m3;
}

void total()
{
   cout<<"total="<<m1+m2+m3;
}
};
int main()
{
    float avg;
   Student s;
   s.getdata();
   s.total();
   
   
   return 0;
   
}
