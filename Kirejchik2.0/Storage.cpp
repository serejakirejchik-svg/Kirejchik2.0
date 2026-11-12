#include "Storage.hpp"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;

bool IsStorageCreated = false;

void CreateStorage(int mode)
{
	if (mode == 0 && ! IsStorageCreated) {
		const size_t staticSize = 12;

		size_t idArrstatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10,11,12 };

		std::wstring nameArrstatic[staticSize]{

			L"Чипсы Lays с крабом ", L"Сухарики 3 c огурчиками",
			L"Гренки с чесноком", L"Орешки биг боб",
			L"Сушенный осьминог", L"Сушенная Вобла",
			L"Королевские креветки", L"Обычные креветки",
			L"Слайсы колбасок", L"Сыр Чеддер",
			L"Варенный рак", L"Чипсы из лаваша",
		};

		size_t countArrstatic[staticSize]{ 25, 57, 34, 88, 28, 9, 15, 10, 19, 21, 30, 51 };
		double priceArrstatic[staticSize]{ 109.99, 35.99, 59.99, 69.99, 99.99, 89.99, 499.89, 299.49, 85.99, 120.09, 1299.99, 110.10 };
		
		sizeSt = staticSize;
		idArr = new size_t(sizeSt);
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];


		FillArray(idArr, idArrstatic, sizeSt);
		FillArray(nameArr, nameArrstatic, sizeSt);
		FillArray(countArr, countArrstatic, sizeSt);
		FillArray(priceArr, priceArrstatic, sizeSt);
		IsStorageCreated = true;
	}
	else if (mode == 1)
	{


	}
	else
	{
		std::wcout << L"Склад уже создан!!\n\n";

	}

}

void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");

		std::wcout << L"ID\t" << std::left << std::setw(39) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
				}
		system("pause");
	}
}

void AddProduct()
{
	std::wstring chooseId, chooseCount, choose;
	int id = 0;

	size_t count = 0;
	
	while (true) //Закончили тут!
	{

	}
}
