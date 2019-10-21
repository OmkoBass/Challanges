#include <iostream>

using namespace std;    //Capitalize Names

int main()
{
    string imena[4] = {"AbC","AAA","BAc","Ccab"};
    int i; int j;
    for(i = 0; i < 4; i++)
    {
        for(j = 1; j < imena[i].length(); j++)
        {
            imena[i][0] = toupper(imena[i][0]);
            imena[i][j] = tolower(imena[i][j]);
        }
    }

    for(i = 0; i < 8; i++)
    {
        cout << imena[i] << endl;
    }

    return 0;
}