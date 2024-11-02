#include <iostream>
#include <string>

using namespace std;

int read_number(string str)
{
    int nb = 0;

    cout << str;
    cin >> nb;
    return (nb);
}

void print_result(int nb)
{
    while(nb > 0)
    {
        cout << (nb % 10) << endl;
        nb /= 10;
    }
}

void reverse_number(int nb)
{
   int i, reverse, nb1;

   i = 0, reverse = 0, nb1 = nb;
   while(nb > 0)
   {
        reverse *= 10;
        reverse += (nb % 10);
        nb /= 10;
   }
   print_result(reverse);
}

int main()
{
    int nb;

    reverse_number(read_number("pleas enter a positive Number : "));
    cout << endl;
    return 0;
}
