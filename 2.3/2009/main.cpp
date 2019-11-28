#include <iostream>

using namespace std;

void f(long n)
{
    cout << n%10;
    if(n!=0)
    {
        f(n/100);
        cout << n%10;;
    }

}
int main()
{
   long n;
    cout << "Adja meg a szamot: " << endl;
    cin>> n;
     f(n);
    return 0;
}
