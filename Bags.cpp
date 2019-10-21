#include <iostream>

using namespace std;

//Bags are marked with numbers from 1 to 9 and are in a row
//They are in five groups: First group contains one bag, second two, third three, fourth two and fifth one
//Every bag group forms a number(one digit, two digit and a three digit number)
//Can the bags be grouped so when you multiply the first and second bag they give the third bag number, the same with fourth and fifth

int proveri(int a, int b)
{
    int i = 0; int j;
    int br = 0;
    int temp[8];
    int help[8];
    while(b != 0)
    {
        temp[i] = a%10;
        help[i] = b%10;
        i++; br++;
        a = a/10;
        b = b/10;
    }
    for(i = 0; i < br; i++)
    {
        for(j = 0; j < br; j++)
        {
            if(temp[i] == help[j])
            {
                return 1;
            }
        }
    }
    return 0;
}

int proveri(int a)
{
    int temp[8]; int j;
    int i = 0; int br = 0;
    while(a != 0)
    {
        temp[i] = a%10;
        i++; br++;
        a = a/10;
    }
    for(i = 0; i < br; i++)
    {
        for(j = 0; j < br; j++)
        {
            if(i == j) { continue; }
            if(temp[i] == temp[j])
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int i,j;
    int troCifreni;
    int k,l;
    for(i = 2; i < 10; i++)
    {
        for(j = 12; j < 100; j++)
        {   
            troCifreni = i * j;
            k = i*2;
            l = j/2;
            if(troCifreni >= 100)
            {
                if((k) * (l) == troCifreni)
                {
                    if((proveri(i,j) == 1) || (proveri(i, troCifreni) == 1) || (proveri(i,k) == 1) || (proveri(i,l) == 1) || (proveri(l, troCifreni) == 1)
                    || (proveri(l,k) == 1) || (proveri(j) == 1) || (proveri(k) == 1) || (proveri(troCifreni) == 1) || (proveri(j,k)) == 1
                    || (proveri(j,l)) == 1 || proveri(j, troCifreni) == 1)
                    {
                        continue;
                    }
                    else
                    {
                        cout << i << " " << j << " " << troCifreni << " " << l << " " << k << endl;   
                    }
                }
            }
        }
    }
    //It might look stupid, but it works, so it ain't stupid.

    return 0;
}