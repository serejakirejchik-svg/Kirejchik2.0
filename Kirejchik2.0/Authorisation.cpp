#include "Authorisation.hpp"

void Start()
{

	while (true)
	{
		if (Login())
		{
			if (CurrentStatus == L"Sadmin")
			{
				CreateStorage();
				SuperAdminMenu();
			}
			else if (CurrentStatus == L"admin")
			{
				// TO_DO
				std::wcout << L"Admin menu не сделано!\n";
			}
			else if (CurrentStatus == L"User")
			{
				// TO_DO
				std::wcout << L"User menu не сделано!\n";
			}
			else
			{
				std::wcerr << L"_CURRENT_STATUS_LOGIN_ERROR_\n\n";
			}
		}
		else
		{
			system("cls");
			std::wcout << L"Всего хорошего. Смена окончена! \n";
			Sleep(1500);

			break;

		}
	}
}


bool Login()
{
	std::wstring login, Pass;

	while (true)
	{
		system("cls");
		std::wcout << L"\t\t Добро Пожаловать !!!! \t\t\n\n\n\t\t Добро пожаловать в Кириешка!!!!!\n\n\n";
		std::wcout << L"Введите логин или \"exit\" для выхода: \n";
		Getline(login);
		if (login == L"exit" || login == L"Exit")
		{
			return false;
		}
		else
		{
			std::wcout << L"Введите пароль: ";
			Getline(Pass);
			for (size_t i = 0; i < Usersize; i++)
			{
				if (login == LoginArr[i] && Pass == PassArr[i])
				{
					std::wcout << L"\nДобро пожаловать " << LoginArr[i] << L"\n\n";
					std::wcout << L"Ваш уровень доступа: " << StatusArr[i] << L"\n\n";
					CurrentId = UserId[i];
					CurrentStatus = StatusArr[i];
					
					return true;
				}
			}
			std::wcout << "Неверный логин или пароль! Попробуйте еще раз. \n\n";
			Sleep(2000);
		}
	}
}

void SuperAdminMenu()
{
	std::wstring choose;
	while (true)
	{
		system("cls");

		std::wcout << L"1 - Начать продажу\n2 - показать склад\n";
		std::wcout << L"3 - пополнить товары\n4 - Списать товары\n";
		std::wcout << L"5 - изменить цены\n6 - Редактировать склад\n";
		std::wcout << L"7 - Редактировать сотрудников\n8 - Отчет о прибыли\n";
		std::wcout << L"0 - Выход!\n\n";
		
		std::wcout << L"Ввод:";

		Getline(choose);

		if (choose == L"1")
		{

		}
		else if (choose == L"2")
		{
			ShowStorage();
		}
		else if (choose == L"3")
		{
			AddProduct();
		}
		else if (choose == L"4")
		{
			RemoveProduct();
		}
		else if (choose == L"5")
		{
			ChangePrice();
		}
		else if (choose == L"6")
		{
			ChangeStorage();
		}
		else if (choose == L"7")
		{

		}
		else if (choose == L"8")
		{

		}
		else if (choose == L"0")
		{
			
		}
		else
		{
				std::wcout << L"\n\nНеккоректный ввод!!!";
				Sleep(2000);
		}
	}
}
