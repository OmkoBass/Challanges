#include <iostream>

using namespace std;

int firstFactorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return (n * firstFactorial(n-1));
}

int main()
{
    int broj;
    cin >> broj;
    if((broj >= 19) || (broj <= 0)) { cout << "Bad input..." << endl; }
    cout << firstFactorial(broj) << endl;
    //Sum of factorials
    int s = 0;
    cout << "Sum of all factorials untill and " << broj << endl;
    for(int i = 1; i <= broj; i++)
    {
        s = s + firstFactorial(i);
    }
    cout << s << endl;

    return 0;
}