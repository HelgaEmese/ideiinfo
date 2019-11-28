#include<iostream>
using namespace std;
int proba(int a)
{ a++; return a; }
int main()
{ int a=1;
cout<<a;
a=proba(a) ;
 cout<<a;
 return 0; }
