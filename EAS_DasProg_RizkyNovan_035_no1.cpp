#include <iostream>
using namespace std;

int main()
{
	int v;
	cout << "Enter number of vertices: ";
	cin >> v;

	int obj[v][3];
	cout << "Enter points : " << endl;
	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> obj[i][j];
		}
	}
	int tx = 0, ty = 0, tz = 0;
	int sx = 0, sy = 0, sz = 0;
	int option;
	cout << "Object transformation" << endl;
	cout << "1. Translation" << endl
		 << "2. Scaling" << endl;
	cin >> option;

	if (option != 1 && option != 2)
	{
		cout << "Operasi tidak valid!";
		return 0;
	}

	if (option == 1)
	{
		cout << "Enter tx, ty, tz : " << endl;
		cin >> tx >> ty >> tz;
		int translate[v] = {tx, ty, tz};
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				obj[i][j] += translate[j];
			}
		}
		cout << "---Translated by (" << tx << "," << ty << "," << tz << ") ---" << endl;
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << obj[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Enter sx, sy, sz : " << endl;
		cin >> sx >> sy >> sz;
		int scale[v] = {sx, sy, sz};
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				obj[i][j] *= scale[j];
			}
		}
		cout << "---Translated by (" << sx << "," << sy << "," << sz << ") ---" << endl;
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << obj[i][j] << " ";
			}

			cout << endl;
		}
	}

	return 0;
}
