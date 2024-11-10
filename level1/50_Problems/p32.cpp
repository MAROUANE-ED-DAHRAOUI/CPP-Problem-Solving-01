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

void    fill_array_with_random_keys(string *arr, int lenght)
{
    int i;
    string str;

    i = 0;
    str = "";
    while(i < lenght)
    {
        str = get_word();
        str += "-" + get_word() + "-" + get_word() + "-" + get_word(); 
        arr[i] = str;
        str = "";
        i++;
    }
}


void print_keys(string *arr, int nb)
{
    int i;

    i = 0;
    while(i < nb)
    {
       cout << "array[" << i << "] : " << arr[i] << endl;
       i++;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    string *arr;
    int lenght;

    lenght = read_number("pleas enter the number positive : ");
    fill_array_with_random_keys(arr, lenght);
    print_keys(arr, lenght);

    return (0);
}