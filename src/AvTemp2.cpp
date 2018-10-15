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

int main()
{
	int Q;
	cin >> Q;
	int sum = 0;
	vector<int> temp(Q);

	for (auto& i : temp)
	{
		cin >> i;
		sum += i;
	}
	int avn = sum / static_cast<int>(temp.size());		// � static_cast<int> ���������� temp.size() ���������� � ���� int � �������� ������������� ���
														// ������������� ��������� �� �����.
														// � ����� ���� � ������ �������� ������� temp = {-8, -7 ,3} ��������� ����� �������� ���������.
	cout << "Average value = " << avn << endl;
	/*
	for (int& i : temp)
	{
		cin >> i;
		sum += i;
	}
	int avn = sum / Q;							// � ��� � ���� ������ ��� �� ����� �������� � �������������
												// ��� ��� Q �� �������� ���������� ������������ ����. Q ��� int,
												// � ������� int �� int ������� � ������� ��������������� �������� �� �����.
	*/

	vector<int> result;

	// for (int i = 0; i < temp.size(); ++i)						� ����� ���� ���������� ������ �������������� � ��������� ��������� ���� � �����������
	for (int i = 0; i < static_cast<int>(temp.size()); ++i)			// � � ����� ������ �������������� �� �����. ��� ��� �� ������������� ������� ����������
																	// ������������ ���� temp.size() � ��������� ���� int ������� static_cast<int>
	{
		if (temp[i] > avn)
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
