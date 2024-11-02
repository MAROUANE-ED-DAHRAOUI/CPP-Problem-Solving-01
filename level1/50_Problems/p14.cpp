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

    i = 1;
    j = 0;
    ch = 65;
    while(i <= nb)
    {
        j = 1;
        while(j <= i)
        {
            cout << ch;
            j++;
        }
        cout << endl;
        ch += 1;
        i++;
    }
}

int main()
{
    Print_result(read_number("Pleas enter a positive Number : "));
    return (0);
}