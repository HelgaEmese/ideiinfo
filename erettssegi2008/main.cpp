#include <iostream>

using namespace std;

void f(int n)
{
    if (n!=0)
    {
        if (n%2==0)
            cout<<n<<’ ’;

        f(n-1);
        cout<<n<<’ ’;
        | printf("%d ",n);
    }
    else cout<<endl;
    | printf("\n");
}

int main()
{
    f(3);
    return 0;
}
