﻿#include "Level3.h"

using namespace std;

void ShowResult(vector<string> result)
{
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
}

void ShowResult(vector<int> result)
{
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
}

void ShowResult(int result)
{
	cout << result << endl;
}

int main()
{
	Level1 L1;
	Level2 L2;
	Level3 L3;

	{
		int n = 7; 
		int k = 3;
		vector<int> enemy = { 4, 2, 4, 5, 3, 3, 1 };
		int result = L2.DefenseGame(n, k, enemy);
		ShowResult(result);
	}
}



