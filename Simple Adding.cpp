#include <iostream>

using namespace std;

int simpleAdding(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return (n + simpleAdding(n-1));
}

int main()
{
    int broj;
    cin >> broj;
    cout << simpleAdding(broj) << endl;

    return 0;
}