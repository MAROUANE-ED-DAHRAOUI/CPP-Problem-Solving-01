#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int read_number()
{
    int nb_elements;

    cout << "---------------------------------\nEnter the number of elements : ";
    cin >> nb_elements;
    cout << "-----------------------------------------------\n";
    return (nb_elements);
}

int random_number(int from, int to)
{
    int nb;

    nb = rand() % (to - from + 1) + from;
    return (nb);
}

void print_array(int arr[100], int nb_elements)
{
    int i = 0;

    cout << "\narray 2 elements :\n";
    while(i < nb_elements && arr[i])
    {
        cout << arr[i] << " ";
        i++;
    }
    arr[i] = '\0';
}

void    fill_array(int arr[100], int nb_elements)
{
    int i, arr2[100];

    i = 0;
    cout << "array 1 elements :\n";
    while(i < nb_elements)
    {
        arr[i] = random_number(1, 100);
        cout << arr[i] << " ";
        arr2[i] = arr[i]; 
        i++;
    }
    print_array(arr2, nb_elements);
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];

    fill_array(arr, read_number());
    return 0;
}   