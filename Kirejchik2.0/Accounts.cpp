#include "Accounts.hpp"


size_t Usersize = 3;
size_t CurrentId = 0;
std::wstring CurrentStatus;


std::wstring* LoginArr = new std::wstring[Usersize](L"admin", L"user1", L"user2");
std::wstring* PassArr = new std::wstring[Usersize](L"admin", L"user1", L"user2");
std::wstring* StatusArr = new std::wstring[Usersize](L"Sadmin", L"user1", L"user2");

size_t* UserId = new size_t[Usersize](0, 1, 2);

void ChangeAccounts()
{
	std::wstring choose;
	while (true)
	{
		system("cls");
		std::wcout << L"\n\n\t\t\tРедактор учетных записей \"Краб с крабом\"\n\n";
		std::wcout << L"1 - Создать новый аккаунт\n2 - Показать всех сотрудников\n";
		std::wcout << L"3 - Изменить пароль\n4 - Изменить уровень доступа\n";
		std::wcout << L"5 - Редактировать премии и штрафы сотрудников\n";
		std::wcout << L"6 - Удалить аккаунт\n";
		std::wcout << L"0 - Выход!\n\n";

		std::wcout << L"Ввод:";

		Getline(choose);

		if (choose == L"1")
		{

		}
		else if (choose == L"2")
		{
			
		}
		else if (choose == L"3")
		{
			
		}
		else if (choose == L"4")
		{
			
		}
		else if (choose == L"5")
		{
			
		}
		else if (choose == L"6")
		{
			
		}
		else if (choose == L"7")
		{

		}
		else if (choose == L"8")
		{

		}
		else if (choose == L"0")
		{
			std::wcout << L"Выход из редактирования учетных записей";
			Sleep(1500);
		}
		else
		{
			std::wcout << L"\n\nНеккоректный ввод!!!";
			Sleep(2000);
		}
	}
}

void CreateNewAccount()
{
	std::wstring chooseLogin, choosePass, chooseStatus, choose;

	while (true)
	{
		while (true)
		{
			system("cls");
			std::wcout << L"Введите логин и пароль для нового пользователя или \"exit\" для выхода";
			Getline(chooseLogin);
			if (chooseLogin == L"exit" || chooseLogin == L"Exit")
			{
				std::wcout << L"Завершение операции ополнения товара \n\n";
				Sleep(1500);
				return;
			}
			if (true) //ТУТ
			{
				break;
			}
		}
	}
}
