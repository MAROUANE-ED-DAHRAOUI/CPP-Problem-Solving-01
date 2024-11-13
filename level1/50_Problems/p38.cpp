#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

enum IsPrimeOrNot {Prime = 1, Not_prime = 2};

int read_number()
{
    int nb_elements;

    cout << "---------------------------------\nEnter the number of elements : ";
    cin >> nb_elements;
    return (nb_elements);
}

int random_number(int from, int to)
{
    int nb;

    nb = rand() % (to - from + 1) + from;
    return (nb);
}

void print_array(int arr[100], int &nb_elements)
{
    int i = 0;

    while(i < nb_elements)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}


void    fill_array_With_Random_Number(int arr[100], int nb_elements)
{
    int i, arr2[100];

    i = 0;
    cout << "array 1 elements :\n";
    while(i < nb_elements)
    {
        arr[i] = random_number(1, 100);
        cout << arr[i] << " "; 
        i++;
    }
    cout << endl;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    //its a new element so we need to add the length by 1
    arrLength++;
    arr[arrLength - 1] = Number;
}

IsPrimeOrNot    Is_Prime(int nb)
{
    int i, half;

    half = round(nb / 2);
    i = 2;
    while(i <= half)
    {
        if(nb % i == 0)
            return (IsPrimeOrNot::Not_prime);
        i++;
    }
    return (IsPrimeOrNot::Prime);

}

void CopyPrimeNumberInArrayUsingAddArrayElement(int arr[100], int arr2[100], int& arrLength)
{
    int i = 0;

    while (arr[i] >= 1 && arr[i] <= 100)
    {
        if(Is_Prime(arr[i]) == IsPrimeOrNot::Prime)
            AddArrayElement(arr[i], arr2, arrLength);
        i++;
    }
    cout << "\narray 2 Prime Numbers :\n";
    print_array(arr2, arrLength);
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrLength;

    arrLength = 0;
    fill_array_With_Random_Number(arr, read_number());
    CopyPrimeNumberInArrayUsingAddArrayElement(arr, arr2, arrLength);
    return 0;
}