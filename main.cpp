/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a=5,b=10;
    cout<<"before swapping "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
       cout<<"after swapping "<<a<<" "<<b<<endl;
  //  cout<<"Hello World";

    return 0;
}