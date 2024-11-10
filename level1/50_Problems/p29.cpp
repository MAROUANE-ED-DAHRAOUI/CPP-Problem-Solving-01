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

int    *fill_array_with_random_nb(int arr[100], int lenght)
{
    int i = 0;

    while(i < lenght)
    {
        arr[i] = random_number(1, 100);
        i++;
    }
    return (arr);
}

void    Sum_two_arrays(int arr1[100], int arr2[100], int arr3[100], int lenght)
{
    int i;

    i = 0;
    while(i < lenght)
    {
        arr3[i] = arr1[i] + arr2[i];
        i++;
    }
    cout << "\nSum of array1 and array2 elements : \n";
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
    int arr1[100], arr2[100], arr3[100], lenght;

    lenght = read_positive_number("PLeas enter the positive number : ");
    fill_array_with_random_nb(arr1, lenght);
    cout << "Array 1 elements : \n";
    print_array(arr1, lenght);
    fill_array_with_random_nb(arr2, lenght);
    cout << "\nArray 2 elements : \n";
    print_array(arr2, lenght);
    Sum_two_arrays(arr1, arr2, arr3, lenght);
    print_array(arr3, lenght);
    return (0);
}