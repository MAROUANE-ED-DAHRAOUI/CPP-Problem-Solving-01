#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int random_number(int from, int to)
{
    int nb;

    nb = rand() % (to - from + 1) + from;
    return (nb);
}

int main()
{
    srand((unsigned)time(NULL));

    cout << random_number(1, 50) << endl;
    cout << random_number(10, 20) << endl;
    cout << random_number(100, 200) << endl;
    return (0);
}