#include <iostream>
#include <string>

using namespace std;

void print_result()
{
    char ch, ch1, ch2;
 
    ch = 65, ch1 = 65, ch2 = 65;
    while(ch <= 90)
    {
        while(ch1 <= 90)
        {
            while(ch2 <= 90)
            {
                cout << (char)ch;
                cout << (char)ch1;
                cout << (char)ch2 << endl;
                ch2 += 1;
            }
            ch2 = 65;
            ch1 += 1;
        }
        ch1 = 65;
        ch += 1;
    }
}

int main()
{
    print_result();
    return (0);
}