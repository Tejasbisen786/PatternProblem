#include <iostream>
using namespace std;
int main()
{

	int n = 4;
	// for rows
	for (int i = 1; i <= n; i++)
	{
		// for Inner stuff

		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || j == 1 || i == n || j == n)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}