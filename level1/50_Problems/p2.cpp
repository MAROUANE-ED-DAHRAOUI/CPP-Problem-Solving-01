#include <iostream>
#include <string>

using namespace std;

int read_number(int *nb)
{
    cout << "Enter a number: ";
    cin >> *nb;
    if (*nb < 0)
    {
        cout << "The number must be positive" << endl;
        return (-1);
    }
    return (1);
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

int main()
{
    int nb;
    int i;

    nb = 0;
   if(read_number(&nb) == -1)
        return (0);
    i = 1;
    while(i <= nb)
    {
        if(check_prime_number(i) == 1)
            cout << i << " ";
        i++;
    }
    cout << endl;
    return (0);
}
