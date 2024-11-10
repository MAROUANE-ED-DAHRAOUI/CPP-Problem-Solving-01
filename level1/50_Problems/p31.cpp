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

void reverse_array(int arr[100], int arr2[100], int lenght)
{
    int i = 0;

    while(i < lenght)
    {
        arr2[i] = arr[lenght - 1 - i];    
        i++;
    }
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

    int arr[100], arr2[100], lenght, i;

    lenght = read_positive_number("PLeas enter the positive number : ");
    fill_array_with1_to_N(arr, lenght);
    cout << "Array 1 elements : \n";
    print_array(arr, lenght);
    reverse_array(arr, arr2, lenght);
    cout << "\nArray 2 elements after copying array1   in reversed order: \n";
    print_array(arr2, lenght);
    return (0);

    return (0);
}