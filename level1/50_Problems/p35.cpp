#include <iostream>
#include <string>

using namespace std;

int read_number(string str)
{
    int nb;

    nb = 0;
    cout << str;
    cin >> nb;
    return (nb);
}

int    *fill_array_dynamic(int arr[100])
{
    int cnt, more = 0;
    string str = "Do you want to add more numbers ? [0]No,[1]yes? ";

    cnt = 0;

    arr[cnt] = read_number("pleas enter number : ");
    while(1)
    {
        cout << str;
        cin >> more;
        if(more == 1)
        {
            arr[++cnt] = read_number("\npleas enter number : ");
            more = 0;
        }
        else
            break;
    }
    return (arr);
}

int array_lenght(int arr[100])
{
    int len;

    len = 0;
    while(arr[len])
    {
        len++;
    }
    return (len);
}

void print_array(int arr[100], int lenght)
{
    int i;

    i = 0;
    cout << "\nArray lenght : " << lenght << endl;
    cout << "Array elements : ";
    while(i < lenght)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

int main()
{
    int arr[100], lenght;

    fill_array_dynamic(arr);
    print_array(arr, array_lenght(arr));
    return (0);
}