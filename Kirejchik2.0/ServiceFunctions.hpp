#ifndef _SERVICE_FUNCTIONS_HPP_
#define _SERVICE_FUNCTIONS_HPP_
#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>

void Getline(std::wstring& str);

inline void Err()
{
	std::wcout << L"\n\nНеккоректный ввод!!!";
	Sleep(2000);
}

template<typename Arrtype>
void FillArray(Arrtype* dynamArr, Arrtype* staticArr, size_t commonSize)
{
	for (int i = 0; i < commonSize; i++)
	{
		dynamArr[i] = staticArr[i];
	}
}
#endif // !_SERVICE_FUNCTIONS_HPP_