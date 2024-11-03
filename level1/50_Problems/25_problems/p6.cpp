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
    int i, sum;

    i = 0;
    sum = 0;
    while(nb > 0)
    {
        sum += nb % 10;
        nb /= 10;
    }
    cout << "Result = " << sum << endl;
}

int main()
{
    print_result(read_number("pleas enter a positive number : "));
    return 0;
}