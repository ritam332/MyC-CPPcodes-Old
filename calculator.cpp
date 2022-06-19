#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "enter two no.s :\n";
    cin >> a >> b;
    char op;
    cout << "enter character:\n";
    cin>>op;
    switch (op)
    {
    case '+':
        cout << a + b<<"\n";
        break;
    case '-':
        cout << a - b<<"\n";
        break;
    case '*':
        cout << a * b<<"\n";
        break;
    case '/':
        cout << a / b<<"\n";
        break;

    default:
        cout << "wrong choice. try again!";
         break;
    }
    return 0;
}