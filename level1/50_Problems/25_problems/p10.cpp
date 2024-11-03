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

int reverse_number(int nb)
{
   int reverse;

   reverse = 0;
   while(nb > 0)
   {
        reverse *= 10;
        reverse += (nb % 10);
        nb /= 10;
   }
   return (reverse);
}

int main()
{
    int nb, reverse;

    nb = read_number("pleas enter a positive Number : ");
    reverse = reverse_number(nb);
    if(nb == reverse)
            cout << "Yes, it is a Palindrome Number .\n";
    else
            cout << "No, it is NOt palindrome Number . \n";
    return 0;
}
