#include<iostream>
using namespace std;
int main()
{
    int a, b;
    int i;
    cout << "enter two no.s\n";
    cin >> a >> b;
    cout << "the prime no.s are\n";
    for (int num = a; num <= b; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << "\n";
        }
    }
    return 0;
}