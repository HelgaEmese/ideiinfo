#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string telefonszam ;
    ifstream input("input.txt");
    ofstream vezetekes("vezetekes.txt");
    ofstream orange("orange.txt");
    ofstream vodafone ("vodafone.txt");
    ofstream digi("digi.txt");
    while (getline (input,telefonszam))
    {
        if(telefonszam[0]=='6')
        {
            telefonszam.insert(0,"00402");
              vezetekes<<telefonszam<<endl;
        }
        if(telefonszam[0]=='7')
        {
            telefonszam.insert(0,"00407");
            digi<<telefonszam<<endl;
        }
        if(telefonszam[0]=='2')
        {
            telefonszam.insert(0,"00407");
           vodafone<<telefonszam<<endl;
        }
        if(telefonszam[0]=='4')
        {
            telefonszam.insert(0,"00407");
          orange<<telefonszam<<endl;
        }
    }
    return 0;
}
