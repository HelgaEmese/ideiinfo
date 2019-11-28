 #include<iostream>


using namespace std;

int proba(){
int a = 0;
a++;
return a;
}

int main(){
int a=1;
cout<<a;
a = proba();
cout<<a;
return 0;
}
