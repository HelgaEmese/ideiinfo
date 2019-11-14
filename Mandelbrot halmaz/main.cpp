#include <iostream>

using namespace std;

double mandelbrot(double c,int k){
  if (k==0)
    {return c;}
  double f=mandelbrot(c, k-1);
return f*f+c;
}

int main()
{
  cout << mandelbrot(2 , 4)<< endl;

    return 0;
}
