#include <iostream>

//a k�t sz�mot deklar�ljuk lok�lisan �s C�M szerint adjuk �t a f�ggv�nyeknek, seg�dv�ltoz�t haszn�lva ahol sz�ks�ges

using namespace std;
int a, b;
int lnko (int &a, int &b)
{
int a1=a;
int b1=b;
    while (a1!=b1)
    {
        if(a1>b1)
        {
            a1-=b1;
        }
        else
        {b1-=a1;
        }
    }
    return a1;
}
int lkkt (int a, int b)
{
    return a*b/lnko(a,b);
}

int main()
{
    a=2;
    b=3;

    cout <<lnko(a,b)<< endl;
            b1-=a1;
    cout <<lkkt (a,b) << endl;
    return 0;
}
