#include<iostream>

using namespace std;

int proba(int &a){
a++;
int b = a* 2;
return b;
}

int main(){
int a=1;
int b=1;
proba(a);
cout <<a << endl;
cout <<b << endl;
a = proba(b);
b = proba(a);
cout <<a << endl;
cout <<b << endl;
return 0;
}
