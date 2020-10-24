#include <iostream>                                 
#include <cmath>            
using namespace std;
#define PI 3.14159265        

int main()
{
    setlocale(0, "");
    double x,y,g;
    cout << "Введите x, y: " << endl;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    g = 5 * atan(x) - atan(y) / 4;
    cout << "g = " << g << " rad" << endl;
    system("pause");
    return 0;
}