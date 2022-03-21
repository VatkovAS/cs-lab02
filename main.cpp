#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
         if (a > b)
         {
            cout << "Max = " << a << '\n';
            cout << "Min = " << b << '\n';
         }
         if (b > a)
         {
             cout << "Max = " << b << '\n';
             cout << "Min = " << a << '\n';
         }
         if (a == b)
            cout << "A = B = " << a << '\n';
return 0;
}
