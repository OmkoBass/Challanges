#include <iostream>

using namespace std;

//Create a function that takes an array of integers (positive / negative) and 
//return the sum of the numbers that repeat consecutively (return your result as an array).

int main()
{
    int brojevi[8] = {2,2,4,4,6,6,10,10};
    int ponavljajuci[8];
    int i,j;
    int k = 0;
    int br = 1; //Just replace the number 8 with n for other outputs
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(brojevi[i] == brojevi[j])
            {
                br++;
            }
        }
        if(k == 0)
        {
            br--;
        }
        if(br * brojevi[i] != ponavljajuci[k-1])
        {
            ponavljajuci[k] = br * brojevi[i];
            k++;
        }
        br = 0;
    }

    for(i = 0; i < k; i++)
    {
        cout << ponavljajuci[i] << " ";
    }
    cout << endl;

    return 0;

}