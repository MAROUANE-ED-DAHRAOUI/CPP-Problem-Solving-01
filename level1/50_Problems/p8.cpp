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

void check_digit(int nb)
{
    int remainder, i;
    
    remainder = 0;
    i = 0;
    while(i < 10)
    {
        remainder = count_digit_check(nb, i);
        if(remainder > 0)
            cout << "Digit " << i << " Frequency is " << remainder 
                << " Time(s)." << endl;
        i++;
    }
}

int main()
{
    int nb;

    check_digit(read_number("pleas enter a positive Number : "));
    cout << endl;
    return 0;
}
