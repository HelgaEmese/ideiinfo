#include<iostream>

using namespace std;

//2. Hozzunk l�tre egy olyan egyszeresen l�ncolt list�t, amiben egy di�kn�v �s egy inf�jegy van,
//majd sz�m�tsuk ki az inf�hegyek �tlag�t. �s �rjuk ki az �tlag alatti di�kokat!

struct lista {
   float infojegy;
   string nev;
   lista * kov;
};

int main() {
   lista * mutato = NULL;
   int n;
   cout << "n = " ;
   cin >> n ;
   int i;
   for(i=0;i<n;i++) {
      lista * ujelem = new lista;
      cout << "Kerem a nevet : " ;
      cin >> ujelem->nev;
      cout << "Kerem az info jegyet: " ;
      cin >>ujelem->infojegy ;
      ujelem->kov  = mutato;
      mutato = ujelem;
   }
    lista * tempmutato = mutato;
    float atlag=0;
   while(tempmutato) {
      //cout << tempmutato->nev << " ";
      atlag+= tempmutato->infojegy;
      tempmutato = tempmutato->kov ;
   }
   atlag/=n;
   while(mutato) {
      //cout << tempmutato->nev << " ";
      if (atlag>mutato->infojegy)
      {
      cout << mutato->nev << " " << endl ;
      }
      mutato = mutato->kov ;
   }
   cout << endl;
   return 0;
}
