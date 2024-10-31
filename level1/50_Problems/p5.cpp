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
    while(nb > 0)
    {
        sum = 0;
        if(nb > 9)
        {
            sum = nb % 10;
            cout << sum << endl;
            nb /= 10;
        }
        else
        {
            cout << nb << endl;
            nb /= 10;
        }
    }

}

int main()
{
    print_result(read_number("pleas enter a positive number :"));
    return 0;
}