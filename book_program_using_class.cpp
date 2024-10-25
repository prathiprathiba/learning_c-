/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Book
{
   public:
   char title[100];
   char name[100];
   int isbn;

public:
void collect_details()
{
 cout<<"What is the title of the book ? ";
 cin>>title;
 cout<<"Author Name : ";
 cin>>name;
 cout<<"International standard book number : ";
 cin>>isbn;
 
}
void display_details()
{
    cout<<"the title of the book is : "<<title;
    cout<<"\nthe author of the book is :"<<name;
    cout<<"\nInternational standard book number is : "<<isbn;
    
}

};
int main()
{
    cout<<"\tCollecting Book Details\n\n";   
    Book b=Book();
    b.collect_details();
    b.display_details();
    return 0;
}