#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	cin >> m;

	int **field = new int *[n+2];
	for (int i=0; i < n+2; i++)
	{
		field[i] = new int [m+2];
		for (int j=0; j < m+2; j++)
			field[i][j] = 0;
	}

	int k;
	cin >> k;

	for (int i=0; i < k; i++)
	{
		int mine_x, mine_y;
		cin >> mine_y;
		cin >> mine_x;

		field[mine_y][mine_x] = -1;
	}

	for (int i=1; i <= n; i++)
	{
		for (int j=1; j <= m; j++)
		{
			int count = 0;
			if (field[i][j] != -1)
			{
				if (field[i-1][j] == -1)
					count++;
				if (field[i-1][j-1] == -1)
					count++;
				if (field[i][j-1] == -1)
					count++;
				if (field[i+1][j-1] == -1)
					count++;
				if (field[i+1][j] == -1)
					count++;
				if (field[i+1][j+1] == -1)
					count++;
				if (field[i][j+1] == -1)
					count++;
				if (field[i-1][j+1] == -1)
					count++;
			} else
				count = -1;

			cout << count << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	for (int i=0; i < n+2; i++) {
        delete [] field[i];
    }
    delete [] field;

	return 0;
}
