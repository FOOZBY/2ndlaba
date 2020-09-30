#include <iostream>                                 
#include <cmath>            
using namespace std;
#define PI 3.14159265        

int main()
{
    setlocale(0, "");
    double x,y;
    cout << "Введите x, y: " << endl;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    cout << "g = " << 5*atan(x) - atan(y)/4 << " rad" << endl;
    return 0;
}