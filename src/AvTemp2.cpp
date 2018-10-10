//============================================================================
// Name        : AvTemp2.cpp
// Author      : Oleg Kostyuchenko
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int AverageNumber (const vector<int>& v)
{
	int sum;
	for (auto i : v)
	{
		sum += i;
	}
	int avn = sum / v.size();
	return avn;
}

int main()
{
	int Q;
	cin >> Q;
	int sum = 0;
	vector<int> temp(Q);

	for (int& i : temp)
	{
		cin >> i;
		sum += i;
	}
	int avtemp = sum / Q;
	vector<int> result;

	for (int i = 0; i < Q; ++i)
	{
		if (temp[i] > avtemp)
		{
			result.push_back(i);
		}
	}
	cout << result.size() << endl;

	for (auto i : result)
	{
		cout << i << " ";
	}
	return 0;
}
