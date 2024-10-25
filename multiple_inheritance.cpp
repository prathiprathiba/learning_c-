/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class student 
{   
   public:
   int rollno,m1,m2;
   public:
   void get()
   {
      cout<<"enter rollno:";
      cin>>rollno;
      cout<<"\n enter two marks:";
      cin>>m1>>m2;
   }
};
class sports
{
   public:
   int sm;
   public:
   void get1()
   {
      cout<<"\n enter sports mark:";
      cin>>sm;
   }
};
class statement:public student,public sports
{  public:
   int tot,avg;
   public:   
   void display()
   {
     tot=(m1+m2+sm);
     avg=tot/3;
     cout<<"\n \t \t ROLL NO:"<<rollno<<"\n \t \t TOTAL:"<<tot<<"\n \t \t AVERAGE:"<<avg;
   }
};
int main()
{
    statement s;
    s.get();
    s.get1();
    s.display();
    return 0;
}    

