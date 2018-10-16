//============================================================================
// Name        : AvTemp2.cpp
// Author      : Oleg Kostyuchenko
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <limits>
// limits позволит узнать возможные максимальные и минимальные значения переменных

using namespace std;

int main()
{
	int x = 2'000'000'000;
	x *= 2;
	// В этом месте x будет больше, чем может содержать тип int. Таким образом возникнет переполнение.
	// Мы получим большое отрицательное число.
	// После переполнения более максимального значения переменная примет минимальное значение и это значение будет увеличено на разницу
	cout << x << endl;
	// Тут выведется совсем не 4 миллиарда

	cout << endl;

	// Ниже попробуем разные типы целочисленных переменных и определим их размер в байтах:

	int a;
	cout << "Size of int = " << sizeof(int) << " byte" << endl;
	// Обычно 4 байта. Знач-я от  -2^31 до 2^31-1
	cout << numeric_limits<int>::min() << ' ' <<
			numeric_limits<int>::max() << endl;

	unsigned int b;
	cout << "Size of unsigned int = " << sizeof(unsigned) << " byte" << endl;
	// Обычно 4 байта. Знач-я от 0 до 2^32-1
	cout << numeric_limits<unsigned int>::min() << ' ' <<
			numeric_limits<unsigned int>::max() << endl;


	size_t c;
	cout << "Size of size_t = " << sizeof(size_t) << " byte" << endl;
	// 4 или 8 байт (Это зависит от архитектуры - 32 или 64 битная). Знач-я от 0 до 2^32-1 или 0 до 2^64-1 (это результат вызова метода size() для контейнеров)
	cout << numeric_limits<size_t>::min() << ' ' <<
			numeric_limits<size_t>::max() << endl;

	int8_t d;
	cout << "Size of int8_t = " << sizeof(int8_t) << " byte" << endl;
	// 1 байт. Знач-я от -2^7 до 2^7-1
	cout << numeric_limits<int8_t>::min() << ' ' <<
			numeric_limits<int8_t>::max() << endl;

	uint8_t ud;
	cout << "Size of uint8_t = " << sizeof(uint8_t) << " byte" << endl;
	// 1 байт. Знач-я от 0 до 2^8-1
	cout << numeric_limits<uint8_t>::min() << ' ' <<
			numeric_limits<uint8_t>::max() << endl;

	int16_t e;
	cout << "Size of int16_t = " << sizeof(int16_t) << " byte" << endl;
	// 2 байта. Знач-я от -2^15 до 2^15-1
	cout << numeric_limits<int16_t>::min() << ' ' <<
			numeric_limits<int16_t>::max() << endl;

	uint16_t ue;
	cout << "Size of uint16_t = " << sizeof(uint16_t) << " byte" << endl;
	// 2 байта. Знач-я от 0 до 2^16-1
	cout << numeric_limits<uint16_t>::min() << ' ' <<
			numeric_limits<uint16_t>::max() << endl;

	int32_t f;
	cout << "Size of int32_t = " << sizeof(int32_t) << " byte" << endl;
	// 4 байта. Знач-я от -2^31 до 2^31-1
	cout << numeric_limits<int32_t>::min() << ' ' <<
			numeric_limits<int32_t>::max() << endl;

	uint32_t uf;
	cout << "Size of uint32_t = " << sizeof(uint32_t) << " byte" << endl;
	// 4 байта. Знач-я от 0 до 2^32-1
	cout << numeric_limits<uint32_t>::min() << ' ' <<
			numeric_limits<uint32_t>::max() << endl;

	int64_t g;
	cout << "Size of int64_t = " << sizeof(int64_t) << " byte" << endl;
	// 8 байт. Знач-я от -2^63 до 2^63-1
	cout << numeric_limits<int64_t>::min() << ' ' <<
			numeric_limits<int64_t>::max() << endl;

	uint64_t ug;
	cout << "Size of uint64_t = " << sizeof(uint64_t) << " byte" << endl;
	// 8 байт. Знач-я от 0 до 2^64-1
	cout << numeric_limits<uint64_t>::min() << ' ' <<
			numeric_limits<uint64_t>::max() << endl;


	return 0;
}
