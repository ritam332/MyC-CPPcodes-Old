// #include <iostream>
// #include <math.h>
// using namespace std;
// bool prime(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     for (int i = a; i <= b; i++)
//     {
//         if (prime(i))
//         {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>

using namespace std;

void prime_num(int a, int b)
{

    int flag = 0, i = 0, j = 0;
    while (a < b)
    {
        flag = 0;
        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << a << " ";
            flag = 0;
        }
        a++;
    }
}

int main()

{
    int a, b;
    cin >> a >> b;
    prime_num(a, b);
    return 0;
}