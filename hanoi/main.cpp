#include <iostream>

using namespace std;

void hanoi(int number ,char from, char to ,char holder){
if (number==1){
    cout << from << "->" << to << " " << number << ". korong " << endl;
    return;
}
hanoi(number-1,from,holder,to);
cout<< from << "->" << to << " " << number << ". korong " << endl;
 hanoi(number-1,holder,to,from);

}

int main()
{
hanoi (2, 'A','C', 'B');
    return 0;
}
