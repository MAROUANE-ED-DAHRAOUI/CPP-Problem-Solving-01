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

int check_prime_number(int nb)
{
    int i;

    i = 2;
    while(i <= nb / 2)
    {
        if(nb % i == 0)
            return (0);
        i++;
    }
    return (1);

}

int    *fill_array_with_random_nb(int arr[100], int arr2[100], int lenght)
{
    int i = 0;

    while(i < lenght)
    {
        arr[i] = random_number(1, 100);
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

void final_result(int arr[100], int arr2[100], int lenght)
{
    int i, j;

    i = 0, j = 0;
    cout << "Prime numbers in array 2 :\n";
    while(i < lenght)
    {
        if(check_prime_number(arr[i]) == 1)
        {
            arr2[j] = arr[i];
            j++;
        }
        i++;
    }
    if(arr2[0] > 0)
    {
        print_array(arr2, j);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], lenght;

    lenght = read_positive_number("PLeas enter the positive number : ");
    fill_array_with_random_nb(arr, arr2, lenght);

    cout << "Array 1 elements : \n";
    print_array(arr, lenght);
    final_result(arr, arr2, lenght);
    return (0);
}
