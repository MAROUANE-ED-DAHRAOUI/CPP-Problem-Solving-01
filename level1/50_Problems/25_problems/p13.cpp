#include <iostream>
#include <string>

using namespace std;

int read_number(string str)
{
    int nb;

    cout << str;
    cin >> nb;
    return (nb);
}

void Print_result(int nb)
{
    int i, j;
    char ch;

    i = 0;
    j = 0;
    while(nb > 0)
    {
        ch = (65 + (nb - 1));
        j = 0;
        while(j < nb)
        {
            cout << ch;
            j++;
        }
        cout << endl;
        nb--;
    }
}

int main()
{
    Print_result(read_number("Pleas enter a positive Number : "));
    return (0);
}