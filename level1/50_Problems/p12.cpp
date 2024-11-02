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
    i = 1;
    while(i <= nb)
    {
        j = 1;
        while(j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return (0);
}