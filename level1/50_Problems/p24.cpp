#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int read_number()
{
    int nb_elements;

    cout << "Enter the number of elements : ";
    cin >> nb_elements;
    return (nb_elements);
}

int random_number(int from, int to)
{
    int nb;

    nb = rand() % (to - from + 1) + from;
    return (nb);
}

void    fill_array(int arr[100], int nb_elements)
{
    int i, min;

    i = 0, min = 0;
    cout << "array elements : ";
    while(i < nb_elements)
    {
        if(i == 0)
        {
            arr[i] = random_number(1, 100);
            min = arr[i];
        }
        arr[i] = random_number(1, 100);
        cout << arr[i] << " ";
        if(arr[i] <= min)
        {
            min = arr[i];
        }
        i++;
    }
    cout << "\nMin number is : " << min << endl;
    
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];

    fill_array(arr, read_number());
    return 0;
}