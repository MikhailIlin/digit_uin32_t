//============================================================================
// Name        : digit_uin32_t.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : digit_uin32_t in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstddef>

using namespace std;
void min_max_digit (uint32_t digit);

int main()
{
	cout << "uint32_t experiments program" << endl; // prints !!!
	uint32_t digit = 3421;
	min_max_digit(digit);
	return 0;
}
void min_max_digit (uint32_t dig)
{
	int t=0;
	int i=0;
	int max_shift=0;
	uint32_t mask=0x00000000;
	t=__builtin_popcount(dig);
	for (i=0; i<t; i++)
	{
		mask=mask|(uint32_t)0x00000001;
		if (t-i==1)
		{
			break;
		}
		mask<<=1;
	}
	cout << "количество единиц=" << t << endl;
	max_shift=32;
	cout << "минимальное число=" << mask << endl;
    max_shift-=t;
    //cout << "max_shift=" << max_shift << endl; //отладочный вывод
    mask=mask<<max_shift;
    cout << "максимальное число=" << mask << endl;
}

