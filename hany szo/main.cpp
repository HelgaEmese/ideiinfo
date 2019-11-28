#include <iostream>
#include <string>

using namespace std;
// Írjunk programot, mely meghatározza, hogy egy beolvasott string hány szót
// tartalmaz. Szóelválasztó karakternek csak a space-et tekintjük. (itt
//használjuk a getline(cin, stringnevet) a beolvasáshoz)

int main()
{
    string s1, s2 = " " ;
    cout << "kerem a beolvasando stringet ";
    getline(cin, s1);
    int elofordul = 1;
    size_t hely;
     //megkeresi az elso helyet, ahol az s2 string elofordul
 hely = s1.find(s2);
 while(hely!=string::npos)
    {  elofordul++;
        hely= s1.find(s2, hely+1);

}    cout << elofordul << endl;
    return 0;
}
