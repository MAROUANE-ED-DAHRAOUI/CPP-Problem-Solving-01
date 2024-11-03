#include <iostream>
#include <string>

using namespace std;

enum prefect_or_Not {prefect = 1, Not_prefect = 2};

int    read_number(string str)
{
    int nb;

    nb = 0;
    cout << str;
    cin >> nb;
    return (nb);
}

bool Print_result(int sum, int nb)
{
    if(sum == nb)
        return (true);
    return (false);
}

prefect_or_Not Is_Prefect(int nb)
{
    int i;
    int sum;

    i = 1;
    sum = 0;
    while(i < nb)
    {
        if((nb % i) == 0)
        {
            sum += i;
        }
        i++;
    }
    if(Print_result(sum, nb) == true)
        return (prefect_or_Not::prefect);
    else
        return (prefect_or_Not::Not_prefect);
}

int main()
{
    int nb;

    nb = 0;
    nb = read_number("pleas enter a positive number : ");
    if(nb > 0)
    {
        if(Is_Prefect(nb) == prefect_or_Not::prefect)
            cout << "number Is Prefect : " << nb << endl;
        else
            cout << "number Is Not Prefect : " << nb << endl;
    }
    return (0);
}