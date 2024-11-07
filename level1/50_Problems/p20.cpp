#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int read_number(string str)
{
    int nb;

    nb = 0;
    cout << str;
    cin >> nb;
    return (nb);
}

int random_number(int from, int to)
{
    int nb = rand() % (to - from + 1) + from;
    return (nb);
}

string get_word()
{
    string word = "";

    word = (char)random_number(65, 90);
    word += (char)random_number(65, 90);
    word += (char)random_number(65, 90);
    word += (char)random_number(65, 90);
    return (word);
}

void print_keys(int nb)
{
    int i;

    i = 1;
    while(i <= nb)
    {
        cout << "Key [" << i << "] : " << get_word() << "-";
        cout << get_word() << "-" << get_word() << "-" << get_word() << endl;
        i++;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    print_keys(read_number("pleas enter the number positive : "));
    return (0);
}