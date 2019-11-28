#include <iostream>

using namespace std;
int lnko(int a,int b)
{
   bool prim (int a){
   for (int i=2;i<a/2+1; i++){
   if(a%i==0){
    return false;
   }
   }
   return true;
   }

   bool pallindrom (int a){
    int d=0 ,x=a;
    while (x>0){
        int c=x%10;
        d=d*10+c;
        x=x/10;
    }
    //return a==d;
    return false;
    }
}

int main()
{
    if (prin(2)){
         cout << "a szam prim" << endl;
    };
    cout << "Mit szeretnel csinalni?" << endl;
    cout << "1. Megvizsgalni, hogy egy szam prim-e" << endl;
    cout << "2. Megvizsgalni, hogy egy szam pallindrom-e" << endl;
    cout << "3. Megkeresni ket szam legnagyobb kozos osztojat" << endl;
    cout << "0. Kilepni" << endl;

    return 0;
}
