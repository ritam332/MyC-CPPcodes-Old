#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a no.\n";
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0)
    {
      cout<<"divisible by both 2 and 3\n";  
    }
else if (n%2==0)
{
    cout<<"divisible by  2 \n";
}
else if (n%3==0)
{
    cout<<"divisible by  3\n";
}
else {
    cout<<"not divisible by both 2 and 3\n";
}
return 0;

}