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

int count_digit_check(int nb, int freq)
{
    int cnt, remainder;

    cnt = 0;
    remainder = 0;
    while(nb > 0)
    {
        remainder = nb % 10;
        nb /= 10;
        if(remainder == freq)
            cnt++;
    }
    return (cnt);
}

int main()
{
    int nb, freq;

    nb = read_number("pleas enter a positive Number : ");
    cout << endl;
    freq = read_number("pleas enter one digit to check : ");
    cout << endl << "Digit " << freq << " Frequency Is " << count_digit_check(nb, freq) << " Time(s).\n";
    return 0;
}
