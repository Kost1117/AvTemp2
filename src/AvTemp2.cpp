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
	int avn = sum / temp.size();				// ���������� ����� size() ��� ����������� �������� ��������.
												// ����� size() � ����������� C++ ���������� ����������� ��� size_t
												// ����� ��������������� ���������� � ����������� ���� ���������� ��������� �������

												// 1. ��� ���� ������ int � int
												// 2. �� 2-� ����� ���������� ������� �� �������
												// 3. ���� ������ ����������, �� ���������� ����������� ���

												// ����� ������� sum �� ��������� int ���� ��������� � ������������ ���� size_t
												// �������� � ���, ��� sum ����� � ������ ������ ��������� ������������� ��������
												// � ���������� ���� ���������� ������������ sum, � ��������� �� ����� ���� ��������� �������
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

	for (int i = 0; i < Q; ++i)
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
