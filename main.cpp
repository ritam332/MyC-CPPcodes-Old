#include <iostream>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //cout<<"hello world";
    //short a = 9;
    //cout << a;
    // int marksInMaths = 83;
    // cout << "the marks " << marksInMaths;
    int a, b, c;
    cout << "enter three no.s\n";
     cin >> a >> b >> c;
    // cout<<a+b<<endl;
    // float m=34.44;
    // m=24.4;
    // cout<<"the result is"<<m<<endl;
    // int a, b;
    // cout << "enter first no." << endl;
    // cin>>a;
    // cout<<"enter second no." << endl;
    // cin >> b;
    // int age;
    // cout << "enter your age" << endl;
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "you can vote";
    // }
    // else
    // {
    //     cout << "you can't vote";
    // }
    if (a > b)
    {
        if (a > c)
        {
            cout << a << "is the largest no.\n";
        }
        else
        {
            cout << c << "is the largest no.\n";
        }
    }else {
        cout<<b<<"is the largest no.\n";
    }

    return 0;
}
