#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int read_positive_number(string str)
{
    int nb;

    cout << str;
    cin >> nb;
    return (nb);
}

int random_number(int from, int to)
{
    int nb;

    nb = rand() % (to - from + 1) + from;
    return (nb);
}

int    *fill_array_with1_to_N(int arr[100], int lenght)
{
    int i = 0;

    while(i <= lenght)
    {
        arr[i] = i + 1;
        i++;
    }
    return (arr);
}

void Swap(int &A, int &B)
{
    int tmp;

    tmp = A;
    A = B;
    B = tmp;
}

int *shuffle_array(int arr[100], int lenght)
{
    int i = 0;

    while(i < lenght)
    {
        Swap(arr[random_number(1, lenght) - 1], arr[random_number(1, lenght) - 1]);
        i++;
    }
    return (arr);
}

void print_array(int arr[100], int lenght)
{
    int i;

    i = 0;
    while(i < lenght)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], lenght;

    lenght = read_positive_number("PLeas enter the positive number : ");
    fill_array_with1_to_N(arr, lenght);
    cout << "Array 1 elements : \n";
    print_array(arr, lenght);
    shuffle_array(arr, lenght);
    cout << "\nArray elements after shuffle : \n";
    print_array(arr, lenght);
    return (0);
}