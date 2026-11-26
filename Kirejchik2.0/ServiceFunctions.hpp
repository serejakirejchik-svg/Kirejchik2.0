#ifndef _SERVICE_FUNCTIONS_HPP_
#define _SERVICE_FUNCTIONS_HPP_
#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>
#include <cwctype>
#include <unordered_set>

void Getline(std::wstring& str);
bool IsNumber(const std::wstring& str);
bool IsNotSafe(const std::wstring& chooseName, std::wstring*nameArr, size_t nameArrSize);
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

template<class ArrType>
void ArrPushBack(ArrType*& arr, size_t size)
{
	size++;
	ArrType* plus = new ArrType[size];
	for (size_t i = 0; i < size - 1; i++)
	{
		plus[i] = arr[i];
	}
	std::swap(plus, arr);
	delete[] plus;
}

template<class ArrType>
void ArrDeleteIndex(ArrType*& arr, size_t size, size_t index)
{
	size--;
	ArrType* temp = new ArrType[size];

	for (size_t i = 0, j = 0; i < size; i++, j++)
	{
		if (j == index)
		{
			j++;
		}
		temp[i] = arr[j];
	}
	std::swap(temp, arr);
	delete[] temp;
}
#endif // !_SERVICE_FUNCTIONS_HPP_