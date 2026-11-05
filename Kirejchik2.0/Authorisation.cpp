#include "Authorisation.hpp"
#include "Accounts.hpp"
void Start()
{

	while (true)
	{
		if (Login()
			)
		{
			if (CurrentStatus == L"Sadmin")
			{
				
			}
			else if (CurrentStatus == L"admin")
			{
				// TO_DO
			}
			else if (CurrentStatus == L"User")
			{
				// TO_DO
			}
			else
			{
				std::wcerr << L"_CURRENT_STATUS_LOGIN_ERROR_\n\n";
			}
		}
		else
		{
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