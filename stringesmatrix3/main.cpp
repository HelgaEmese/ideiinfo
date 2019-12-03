#include <iostream>
#include <fstream>
#include <sstream>

//2. Olvassunk be egy "input.txt" fileból egy NxM es mátrixot, s írjuk ki egy
// "output.txt" fileba egy másik mátrixot, ami 0 és 1 esekből áll, a következő
// logika alapján. Ha a mátrix i, j eleme tartalmazza az "as" stringet, akkor 1 et,
  //ha nem, 0 t.



using namespace std;

int main()
{//a szukseges valtozok deklaralasa

    int i=0, j=0, n, m;

    int b[10][10];

    string a[10][10];

    //input file deklaralasa

    fstream infile("input.txt");

    string line, token;

    //ha sikerult megnyitni a filet, olvasd be a matrixot

    if(infile.is_open()){

        //amig vannak sorok, olvasd be

        while(getline(infile,line)){

		//darabold fel a sort
		istringstream iss(line);

            	j=0;


		//egyenkent olvasd be az elemeket


		while(iss>>token){


			a[i][j]=token;
			j++;
            	}
            i++;

        }

    }

    //lementjuk az n es m erteket i es j bol

    n=i;

    m=j;

    string keresd;

    //beolvassuk a stringet amit keresni fogunk

    cout<<"mit keresunk:";

    cin>>keresd;

    for(i=0; i<n; i++)

    {

        for(j=0; j<m; j++){
		//ha a string megvan a tombben, akkor irj 1 t, ha nem, akkor 0 t
	   	size_t talalat=a[i][j].find(keresd);

           	if(talalat!=string::npos)

           		b[i][j]=1;

            	else
			b[i][j]=0;

        }

    }

    //output file letrehozasa

    ofstream output("output.txt");

    //kiiras az output fileba

    for(i=0; i<n; i++){

        for(j=0; j<m; j++)

		output<<b[i][j]<<" ";

        output<<endl;

    }


    return 0;
}
