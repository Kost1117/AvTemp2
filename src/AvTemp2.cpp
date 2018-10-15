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
	int avn = sum / static_cast<int>(temp.size());		// — static_cast<int> переменна€ temp.size() приведетс€ к типу int и проблемы переполнени€€ при
														// отрицательных значени€х не будет.
														// ¬ таком виде в случае значений вектора temp = {-8, -7 ,3} программа будет работать корректно.
	cout << "Average value = " << avn << endl;
	/*
	for (int& i : temp)
	{
		cin >> i;
		sum += i;
	}
	int avn = sum / Q;							// ј вот в этой строке уже не будет проблемы с переполнением
												// так как Q не €вл€етс€ переменной беззнакового типа. Q это int,
												// и деление int на int проблем с не€вным преобразованием вызывать не может.
	*/

	vector<int> result;

	// for (int i = 0; i < temp.size(); ++i)						¬ таком виде компил€тор выдаст предупреждение о сравнении знакового типа с беззнаковым
	for (int i = 0; i < static_cast<int>(temp.size()); ++i)			// ј в таком случае предупреждени€ не будет. “ак как мы принудительно привели переменную
																	// беззнакового типа temp.size() к знаковому типу int методом static_cast<int>
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
