#include <iostream>

using namespace std;

// https://codeforces.com/contest/1171/problem/B

int main()
{
    int Zute, Plave, Crvene;
    cin >> Zute >> Plave >> Crvene;

    if((Crvene < Plave + 1) && (Crvene < Zute + 2))
    { cout << (Crvene - 2) + (Crvene - 1) + Crvene << endl; }

    else if((Plave + 1 < Crvene) && (Plave + 1) < Zute + 2)
    { cout << (Plave - 1) + (Plave - 2) + Plave << endl; }

    else
    { cout << (Zute + 2) + (Zute + 1) + Zute << endl; }
    

    return 0;
}