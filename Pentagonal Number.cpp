#include <iostream>

using namespace std;

int PentagonalNumber(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return ((n * 5) - 5 + PentagonalNumber(n-1));
}

int main()
{
    int n;
    cout << "Enter n for pentagonal number: ";
    cin >> n;
    int br = PentagonalNumber(n);
    cout << br << endl;

    return 0;
}