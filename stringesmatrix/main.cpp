#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()

{ //szukseges valtozok deklaralasa
    int k,i,j,y,n;
    string a[100][100];
    //rand fuddveny inicializalasa
    srand(0);
cout<<"n=";
    //n beolvasasa
    cin>>n;
  //vegigmegyunk a matrixon
for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
		//kezdetben ures stringek lesznek az elemek
		a[i][j]="";
		//a hosszokat is veletlenszeruen valasszuk 3 es 8 kozott
		int hossz = 3+rand()%5;
		//annyiszor generalunk egy veletlenszamot 97 es 122 kozott, amennyi a hossz
           	for(y=0; y<hossz; y++){
			//veletlenszam generalasa 97 es 122 kozott
			k=97+rand()%26;
			//hozzaadjuk az a[i][j] hez az uj erteket, ez mindig egy kisbetu lesz a-z kozott (lasd ASCII kodok)
			a[i][j]+=k;
            	}
        }
    }

    for(i=0; i<n; i++)
        for(j=0; j<n; j++){
		string elem = a[i][j];
           	//kiszamoljuk a tomb utolso elemet
            	int hossz = elem.length()-1;
		//a foatlon levo elemek 0 k lesznek
		if(i==j){
			a[i][j]="0";
            	}
            	//a folotte levoek elso betuje nagybetu lesz
           	if(i<j){
			a[i][j][0]=toupper(a[i][j][0]);
            	}
	       //az alatta levok utolso betuje lesz nagybetu
		if(i>j){
                a[i][j][hossz]=toupper(a[i][j][hossz]);
		}
        }
    //kiiras
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
		cout<<a[i][j] << " ";
	}
        cout<<endl;
    }

    return 0;

}
