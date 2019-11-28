#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()

{
    int k=0,i=0;
    fstream input("input.txt");
    ofstream output("output.txt");
    fstream file("kovetelmeny.txt")
     string [1000];
    string token,line,keres;
    while(getline(file,line))
    {
        k=0;
        while(getline(input,line))
        {
            size_t talalat=line.find(keres);
            while(talalat!=string::npos)
            {
                talalat=line.find(keres,talalat+1);
                k++;
            }
        }}
        cout << keres << k << ;

        return 0;
    }

