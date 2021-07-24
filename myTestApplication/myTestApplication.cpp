#include <iostream>
using namespace std;

// This is just a calculator which gives you a percent value of something. 

int main()
{
    float a, b, c, d, e, f;

    cout << "Name the big number :    ";
    cin >> a;
    cout << "Name the small number :    ";
    cin >> b;

    c = a - b; 

    cout <<  (c * 100) / a  << " % increased.\n ";
}
