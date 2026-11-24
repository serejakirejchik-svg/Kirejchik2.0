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
	if (mode == 0 && !IsStorageCreated) {
		const size_t staticSize = 12;

		size_t idArrstatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10,11,12 };

		std::wstring nameArrstatic[staticSize]{

			L"Чипсы Lays с крабом ", L"Сухарики 3 c огурчиками",
			L"Гренки с чесноком", L"Орешки биг боб",
			L"Сушенный осьминог", L"Сушенная Вобла",
			L"Королевские креветки", L"Обычные креветки",
			L"Слайсы колбасок", L"Сыр Чеддер",
			L"Варенный рак", L"Чипсы из лаваша"
		};

		size_t countArrstatic[staticSize]{ 25, 57, 34, 88, 28, 9, 15, 10, 19, 21, 30, 51 };
		double priceArrstatic[staticSize]{ 109.99, 35.99, 59.99, 69.99, 99.99, 89.99, 499.89, 299.49, 85.99, 120.09, 1299.99, 110.10 };
		
		sizeSt = staticSize;
		idArr = new size_t[sizeSt];
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
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
	}

	else if (mode == 2)
	{
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
	}
	else if (mode == 3)
	{
		std::wcout << L"ID\t" << std::left << std::setw(36) << L"Название товара:\t";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
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
		std::wcout << L"ID\t" << std::fixed << std::left << std::setw(40) << L"Название товара:\n\n";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << std::setprecision(2) << priceArr[i] << L"\n";
		}
		system("pause");
	}
	else if (mode == 1)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\t Пополнение товаров \"Краб с крабом\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара:\n\n";
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
		std::wcout << L"\n\n\n\t\t Списание товаров \"Краб с крабом\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара:\n\n";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
		
	}
	else if (mode == 3)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\t Изменение цены \"Краб с крабом\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара:\n\n";
		std::wcout << L"Кол-во товара\t" << L"Цена товара\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << std::setprecision(2) << priceArr[i] << L"\n";
		}
		system("pause");

	}
	else if (mode == 4)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\tТовары \"Краб с крабом\"\n\n";
		std::wcout << L"ID\t" << L"Название товара:\n\n";
		for (int i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i] << L"\n";
			
		}
	}
	else
	{
		std::wcout << L"???";
		Sleep(1400);
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
								currentStoragesize += count;
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
							countArr[id] << L"выбранного товара\n\n";
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
	std::wstring chooseId, choosePrice, choose;
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
			std::wcout << L"Завершение операции изменения цены товара \n\n";
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
				Getline(choosePrice);
				if (IsNumber(choosePrice))
				{
					price = std::stod(choosePrice);
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
								priceArr[id] -= price;
								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена изменения цены " << nameArr[id] << L"\n";
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
	std::wstring choose;
	while (true)
	{
		system("cls");

		std::wcout << L"\n\n\t\t\tРедактирование склада \"Краб лейс с крабом\"\n\n";
		std::wcout << L"1 - Добавление нового товара\n2 - Изменить название товара\n";
		std::wcout << L"3 - Удаление товара\n4 - Изменить лимиты склада\n";
		std::wcout << L"0 - Выход!\n\n";

		std::wcout << L"Ввод:";

		Getline(choose);

		if (choose == L"1")
		{
			AddNewProduct();
		}
		else if (choose == L"2" && sizeSt > 0)
		{
			ChangeProductName();
		}
		else if (choose == L"3" && sizeSt > 0)
		{
			DeleteProduct();
		}
		else if (choose == L"4")
		{

		}
		else if (choose == L"0")
		{
			std::wcout << L"Выход из редактора склада \n\n";
			Sleep(1500);
			break;
		}
		else
		{
			if (sizeSt < 1)
			{
				std::wcout << L"\nСклад пуст\n\n";
			}
			std::wcout << L"\n\nНеккоректный ввод!!!";
			Sleep(2000);
		}
	}
}

void AddNewProduct()
{
	std::wstring chooseName, chooseCount, choosePrice, choose; //?
	size_t count = 0;
	double price = 0;
	while (true)
	{
		while (true)
		{
			system("cls");

			std::wcout << L"Введите название нового товара или \"exit\" для выхода: ";
			Getline(chooseName);

			if (chooseName == L"exit" || chooseName == L"Exit")
			{
				std::wcout << L"Отмена добавления нового товара";
				Sleep(1666);
				return;
			}
			if (chooseName.size() < 3 || chooseName.size() > 40)
			{
				std::wcout << L"Ошибка длинны названия товара\n";
				std::wcout << L"Допустимое значение от 3 до 40 символов\n";
				std::wcout << L"кол-во символов в названии товара: "
					<< chooseName.size() << L"\n\n";
				Sleep(1777);
			}
			if (IsNotSafe(chooseName, nameArr, sizeSt))
			{
				break;
			}
			else
			{
				std::wcout << L"Данный товар уже есть на складе!\n\n";
			}
		}

		while (true)
		{
			system("cls");
			std::wcout << L"Заполненность склада: " << currentStoragesize
				<< L" из " << maxStoragesize;
			std::wcout << L"Введите кол-во нового товара или \"exit\" для выхода: ";
			Getline(chooseCount);

			if (chooseCount == L"exit " || chooseCount == L"Exit")
			{
				std::wcout << L"Отмена добавления нового товара";
				Sleep(1666);
				return;
			}

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
					break;
				}


			}
		}

		while (true)
		{
			std::wcout << L"Введите кол-во нового товара или \"exit\" для выхода: ";
			Getline(chooseCount);

			if (chooseCount == L"exit " || chooseCount == L"Exit")
			{
				std::wcout << L"Отмена добавления нового товара";
				Sleep(1666);
				return;
			}
			if (IsNumber(choosePrice))
			{
				price = std::stod(choosePrice);
				if (price < 0 || price > maxPrice)
				{
					std::wcout << L"Неккоректное цена! Максимально возможная цена " <<
						maxStoragesize - currentStoragesize << L"рублей\n\n";
					Sleep(2000);
				}
				else
				{
					break;
				}
			}
		}

		while (true)
		{
			system("cls");

			std::wcout << L"Новый товар: " << chooseName << L"\n";
			std::wcout << L"Кол-во " << count << L"\n";
			std::wcout << L"Цена" << std::fixed << std::setprecision(2) << price << L"\n";
			std::wcout << L"Подтвердить?\n 1 - Да\n 2 - Нет\n\nВвод: ";
			if (choose == L"1")
			{
				std::wcout << L"Загрузка новых данных в базу";
				for (size_t i = 0; i < 3; i++)
				{
					Sleep(650);
					std::wcout << L".";
				}

				ArrPushBack(idArr, sizeSt);
				ArrPushBack(nameArr, sizeSt);
				ArrPushBack(countArr, sizeSt);
				ArrPushBack(priceArr, sizeSt);

				sizeSt++;
				idArr[sizeSt - 1] = sizeSt;
				nameArr[sizeSt - 1] = chooseName;
				countArr[sizeSt - 1] = count;
				priceArr[sizeSt - 1] = price;
				currentStoragesize += count;
				// ^___^
				std::wcout << L"Новый товар успешно пополнен!";
			}
			else if (choose == L"2")
			{
				std::wcout << L"Отмена\n\n";
				Sleep(1888);
				break;
			}
			else
			{
				Err();
			}
		}
	}
}

void ChangeProductName()
{
	std::wstring chooseName, chooseId, choose;
	int id = 0;

	while (true)
	{
		

		system("cls");
		ShowStorage(4);

		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции списании товара \n\n";
			Sleep(1500);
			return;
		}
		if (IsNumber(chooseId))
		{
			id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err(); 
			}
			else
			{
				std::wcout << L"Введите новое название для товара: ";
				Getline(chooseName);

				if (chooseName.size() < 3 || chooseName.size() > 40)
				{
					std::wcout << L"Ошибка длинны названия товара\n";
					std::wcout << L"Допустимое значение от 3 до 40 символов\n";
					std::wcout << L"кол-во символов в названии товара: "
						<< chooseName.size() << L"\n\n";
					Sleep(1777);
					continue;
				}
				if (!IsNotSafe(chooseName, nameArr, sizeSt))
				{
					std::wcout << L"Данный товар уже есть на складе!\n\n";
				}
				else
				{
					while (true)
					{
						system("cls");
						std::wcout << nameArr[id] << L"----->" <<
							chooseName << L"\n\n";
						std::wcout << L"Подтвердить?\n1 - Да\n2 - Нет\n\nВвод: ";
						Getline(choose);
						if (choose == L"1")
						{
							std::wcout << L"Переименование завершено\n\n";
							nameArr[id] = chooseName;
							Sleep(1500);
							break;
						}
						else if (choose == L"2")
						{
							std::wcout << L"Отмена изменения названия " << nameArr[id] << L"\n";
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

void DeleteProduct()
{
	std::wstring chooseId, pass;
	int id = 0;
	while (true)
	{

		system("cls");
		ShowStorage(4);

		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		Getline(chooseId);

		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции изменения названия товара";
			Sleep(1666);
			return;
		}
		if (IsNumber(chooseId))
		{
			id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Подтвердите удаление товара " << nameArr[id] <<
					L"\nВведите пароль СуперАдминистратора: ";
					Getline(pass);
					if (pass == PassArr[0])
					{
						std::wcout << L"Удаление товара";

						for (size_t i = 0; i < 3; i++)
						{
							Sleep(666);
							std::wcout << L".";
						}
						Sleep(668);

						currentStoragesize -= countArr[id];
						ArrDeleteIndex(idArr, sizeSt, id);
						ArrDeleteIndex(nameArr, sizeSt, id);
						ArrDeleteIndex(countArr, sizeSt, id);
						ArrDeleteIndex(priceArr, sizeSt, id);
						sizeSt--;

						for (size_t i = 0; i < sizeSt; i++)
						{
							idArr[i] = i + 1;
						}

						std::wcout << L"Товар успешно удален\n\n";
						Sleep(1336);
						continue;
					}
					else
					{
						Err();
					}
			}
		}
	}	
}

void ChangeMaxStorageLimits()
{
	std::wcout << L"В процессе разработки\n\n";
	Sleep(1300);
}

