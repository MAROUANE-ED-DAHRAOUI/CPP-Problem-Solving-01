#include <iostream>
#include <string>

using namespace std;

int Read_Positive_Number(string str)
{
    int nb;

    nb  = 0;
    cout << str;
    cin >> nb;
    return (nb);
}

int main()
{
    int i, j, nb;

    nb = Read_Positive_Number("pleas enter apositive number : ");
    // cout << endl;
    while(nb > 0)
    {
        i = 0;
        while(i < nb)
        {
            cout << nb;
            i++;
        }
        cout << endl;
        nb--;
    }
    return (0);
}