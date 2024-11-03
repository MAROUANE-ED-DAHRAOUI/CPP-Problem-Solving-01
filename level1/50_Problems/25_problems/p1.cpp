#include <iostream>
#include <stdbool.h>

using namespace std;

void	p_header(int nb)
{
	int i;

	cout << "\t\t\t   Multipliaction Table From 1 to 10\n\n";
	i = 1;
	cout << "\t";
	while(i <= nb)
	{
		cout << "  " << i << "\t";
		if(i > nb)
		    cout << "\n";
		else
		    i++;
	}
	cout << "\n_____________________________________________________________________________________\n";
}

bool check_separate(int j)
{
	if(j == 10)
		return (true);
	else
		return (false);
}

int	p_table(int nb)
{
	int i;
	int j;

	i = 1;
	while(i <= nb)
	{
		j = 1;
		cout << i;
		if(i != 10)
			cout << "\t| ";
		else
			cout << "\t| ";
		while(j <= nb)	
		{
			if(!check_separate(j))
					cout << i * j << "\t ";
			else
					cout << " " << i * j;
			j++;
		}
		cout << "\n";
		i++;
	}
	return (1);
}
int main()
{
	int nb;
	int i;
	int res;

	nb = 10;
	p_header(nb);
	res = p_table(nb);
	if(res == 0)
	{
		cout << "Error\n";
		return (1);
	}

	return (0);
}
