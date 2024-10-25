/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class emp
{   public:
    int eno;
    char name[50],des[50];
    public:
    void get()
    {
        cout<<"enter employee number:";
        cin>>eno;
        cout<<"\n enter employee name:";
        cin>>name;
        cout<<"\n enter the designation:";
        cin>>des;
        
    }
};
class salary : public emp
{     public:
      float bp,hra,da,pf,np;
      public:
      void get1()
      {
        cout<<"\n enter the basic pay :";
        cin>>bp;
        cout<<"\n enter houserent allowance :";
        cin>>hra;
        cout<<"\n enter dearness allowance :";
        cin>>da;
        cout<<"\n enter profitability fund amount :";
        cin>>pf;
      }
      public:
      void calculate()
      {
            np=bp+hra+da-pf;
      }
      public:
      void display()
      {
            cout<<eno<<"\t"<<name<<"\t"<<des<<"\t"<<bp<<"\t"<<hra<<"\t"<<da<<"\t"<<pf<<"\t"<<np<<"\t";
      }
};      
int main()
{
      int n;
      salary s[10];
      cout<<"enter number of employee:";
      cin>>n;
      
      for(int i=0;i<n;i++)
      {
         s[i].get();
         s[i].get1();
         s[i].calculate();
      }
      cout<<"\n eno \t name \t des \t bp \t hra \t da \t pf \t np \n";
      for(int i=0;i<n;i++)
      {
            s[i].display();
      }
      return 0;
}