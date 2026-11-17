#include "Storage.hpp"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;

size_t maxStoragesize = 1337;
size_t currentStoragesize;
double maxPrice = 1337;

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

		for (size_t i = 0; i < sizeSt; i++)
		{
			currentStoragesize += countArrstatic[i];
		}

		IsStorageCreated = true;
	}
	else if (mode == 1)
	{
		std::wcout << L"ID\t" << std::left << std::setw(37) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(31) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
	}

	else if (mode == 2)
	{
		std::wcout << L"ID\t" << std::left << std::setw(37) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(31) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
	}
	else if (mode == 3)
	{
		std::wcout << L"ID\t" << std::left << std::setw(37) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(31) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
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
		std::wcout << L"ID\t" << std::left << std::setw(38) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
		system("pause");
	}
	else if (mode == 1)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\t Пополнение товаров \"Краб с крабом\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(38) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
		
	}

	else if (mode == 2)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\t Списение товаров \"Краб с крабом\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(37) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(31) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
		
	}
	else if (mode == 3)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\t Изменение цены \"Краб с крабом\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(37) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(31) << nameArr[i]
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
		ShowStorage(1);
		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции ополнения товара \n\n";
			Sleep(1500);
			return;
		}
		else if (IsNumber(chooseId))
		{
			id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите кол-во товара для пополнения: ";
				Getline(chooseCount);

				if (IsNumber(chooseCount))
				{
					count = std::stoull(chooseCount);
					if (count < 0 || count > maxStoragesize - currentStoragesize)
					{
						std::wcout << L"Неккоректное кол-во! На складе осталось " <<
							maxStoragesize - currentStoragesize << L"свободных мест\n\n";
						Sleep(2000);
					}
					else
					{
					
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\n" << countArr[id] << L"----->" <<
								countArr[id] + count;
							std::wcout << L"Подтвердить?\n 1 - Да\n2 - Нет\n\nВвод: ";
							Getline(choose); 
							if (choose == L"1")
							{
								std::wcout << L"Товар успешно пополнен\n\n";
								countArr[id] += count;
								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена пополнения " << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void RemoveProduct()
{
	std::wstring chooseId, chooseCount, choose;
	int id = 0;

	size_t count = 0;

	while (true) //Закончили тут!
	{
		ShowStorage(2);
		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции списании товара \n\n";
			Sleep(1500);
			return;
		}
		else if (IsNumber(chooseId))
		{
			id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите кол-во товара для списания: ";
				Getline(chooseCount);

				if (IsNumber(chooseCount))
				{
					count = std::stoull(chooseCount);
					if (count < 0 || count > countArr[id])
					{
						std::wcout << L"Неккоректное кол-во! На складе осталось " <<
							maxStoragesize - currentStoragesize << L"выбранного товара\n\n";
						Sleep(2000);
					}
					else
					{

						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\n" << countArr[id] << L"----->" <<
								countArr[id] - count << L"\n\n";
							std::wcout << L"Подтвердить?\n1 - Да\n2 - Нет\n\nВвод: ";
							Getline(choose);
							if (choose == L"1")
							{
								std::wcout << L"Товар успешно списан\n\n";
								countArr[id] -= count;
								currentStoragesize -= count;
								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена списания " << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void ChangePrice()
{
	std::wstring chooseId, chooseCount, choose;
	int id = 0;
	double price = 0;

	size_t count = 0;

	while (true) //Закончили тут!
	{
		ShowStorage(2);
		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции списании товара \n\n";
			Sleep(1500);
			return;
		}
		else if (IsNumber(chooseId))
		{
			id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите новую стоимость товара: ";
				Getline(chooseCount);

				if (IsNumber(chooseCount))
				{
					count = std::stoull(chooseCount);
					if (price < 0 || price > maxPrice)
					{
						std::wcout << L"Неккоректное цена! Максимально возможная цена " <<
							maxStoragesize - currentStoragesize << L"рублей\n\n";
						Sleep(2000);
					}
					else
					{

						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\n" << countArr[id] << L"----->" <<
								price << L"\n\n";
							std::wcout << L"Подтвердить?\n 1 - Да\n2 - Нет\n\nВвод: ";
							Getline(choose);
							if (choose == L"1")
							{
								std::wcout << L"Успешное изменение цены\n\n";
								countArr[id] -= count;
								currentStoragesize -= count;
								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена списания " << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void ChangeStorage()
{
	
}
