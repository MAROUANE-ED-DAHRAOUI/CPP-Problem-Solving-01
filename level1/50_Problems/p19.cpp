#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum random_input {digit = 1, special_char = 2, c_letter = 3, s_letter = 4};

int random_number(int from, int to)
{
    int nb = rand() % (to - from + 1) + from;
    return (nb);
}

void print_result(random_input _random)
{
    switch (_random)
    {
        case digit:
            cout << random_number(1, 5000) << endl;
            break;
        case special_char:
            cout << (char)random_number(33, 47) << endl;
            break;
        case c_letter:
            cout << (char)random_number(65, 90) << endl;
            break;
        case s_letter:
            cout << (char)random_number(97, 122) << endl;
            break;
        default:
            cout << "Input Is bad!!\n";
            break;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    print_result(random_input::s_letter);
    print_result(random_input::c_letter);
    print_result(random_input::special_char);
    print_result(random_input::digit);
    return (0);
}