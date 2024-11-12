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

int index_number(int arr[100], int lenght, int nb_search)
{
    int i;

    i = 0;
    while(i < lenght)
    {
        if(arr[i] == nb_search)
            return (i);
        else
            i++;
    }
    return (-1);
}

void print_array(int arr[100], int lenght)
{
    int i;

    i = 0;
    cout << "\nArray elements : \n";
    while(i < lenght)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

void print_result(int arr[100], int nb_search, int index)
{
    if(index != -1)
    {
        cout << "Number you are looking for is : " << nb_search << endl;
        cout << "The number found at position : " << index << endl;
        cout << "The number found its order : " << index + 1 << endl;
    }
    else{
        cout << "Number you are looking for is : " << nb_search << endl;
        cout << "The Number is not found :-( \n";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], lenght, nb_search, index;

    lenght = read_number("pleas enter a number positive how many elements in array ?\n");
    fill_array_with_random_nb(arr, lenght);
    print_array(arr, lenght);
    nb_search = read_number("\npleas enter a number to search for : ");
    index = index_number(arr, lenght, nb_search);
    print_result(arr, nb_search, index);
    return (0);
}