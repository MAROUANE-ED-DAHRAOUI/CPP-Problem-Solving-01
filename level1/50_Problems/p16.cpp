#include <iostream>
#include <string>

using namespace std;

string read_password(string str)
{
    string pass;

    cout << str;
    cin >> pass;
    return (pass);
}

void print_result(string pass)
{
    char ch, ch1, ch2;
    string Key = "";
    int i = 1;
 
    ch = 65, ch1 = 65, ch2 = 65;
    while(ch <= 90)
    {
        while(ch1 <= 90)
        {
            while(ch2 <= 90)
            {
                Key = (char)ch;
                Key += (char)ch1;
                Key += (char)ch2;
                cout << "Trial [" << i << "] : ";
                cout << Key << endl;
                if(Key == pass)
                {
                    cout << "\nPassword Is : " << pass << endl;
                    cout << "found after " << i << " Trial(s)\n";
                    return ;
                }
                i++;
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
    print_result(read_password("pleas enter 3 password letters : "));
    return (0);
}