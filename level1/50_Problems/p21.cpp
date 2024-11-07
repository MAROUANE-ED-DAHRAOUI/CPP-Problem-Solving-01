#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int read_number(string str)
{
    int nb;

    cout << "--------------------------------------\n" << str;
    cin >> nb;
    cout << "--------------------------------------\n";
    return (nb);
}

int *get_numbers(int nb)
{
    int *arr;
    int i = 0;

    arr = new int[nb];
    cout << "enter array elements : \n";
    cout << "----------------------\n";
    while(i < nb)
    {
        cout << "Element[" << i + 1 << "] : ";
        cin >> arr[i];
        i++;
    }
    return (arr);
}

void    print_result(int num)
{
    int *arr;
    int nb_check, i, cnt;

    arr = get_numbers(num);
    nb_check = read_number("enter the number you want to check : ");
    i = 0, cnt = 0;
    cout << "Original array : ";
    while(i < num)
    {
         cout << arr[i] << " ";
        if(arr[i] == nb_check)
            cnt++;
        i++;
    }
    cout << endl << "------------------------------\n";
    cout << nb_check << " Is repeated " << cnt << " time(s).\n";
    cout << "________________________________\n";
    delete[] arr;
}

int main()
{
    int nb = read_number("pleas enter number positive : ");
    print_result(nb);
    return (0);
}