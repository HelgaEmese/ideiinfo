#include <iostream>
#include <fstream>

using namespace std;

int main()
{ fstream input("imput.txt") ;
    int S=0;
int Smax=0;
int db=0;
int a;
while (input >>a) {
    if (S+a<0){
        S=0;
        db=0;
    }
    S=S+a;
    db++;
    if (Smax<S && db>1){
        Smax=S;

    }
}

cout <<Smax;
    return 0;
}
