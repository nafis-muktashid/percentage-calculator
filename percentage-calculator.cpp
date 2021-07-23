#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f;

    cout << "Name the buying price :    ";
    cin >> a;
    cout << "Name the regular price :    ";
    cin >> b;

    c = a - b; 

    cout <<  (c * 100) / a  << " % price increased.\n ";
}
