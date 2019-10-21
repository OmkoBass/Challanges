#include <iostream>

using namespace std;

/*
makeBox(5) ➞ [
  "#####",
  "#   #",
  "#   #",
  "#   #",
  "#####"
]
*/

void makeBox(int x)
{
    int i,j;
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < x; j++)
        {
            if(i == 0)
            {
                cout << "#";
            }
            else if(i == x-1)
            {
                cout << "#";
            }
            else if((j == 0) || (j == x-1))
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int x;
    cin >> x;
    makeBox(x);

    return 0;
}