#include "Accounts.hpp"


size_t Usersize = 3;
size_t CurrentId = 0;
std::wstring CurrentStatus;


std::wstring* LoginArr = new std::wstring[Usersize]{ L"admin", L"user1", L"user2" };
std::wstring* PassArr = new std::wstring[Usersize]{ L"admin", L"user1", L"user2" };
std::wstring* StatusArr = new std::wstring[Usersize]{ L"Sadmin", L"user1", L"user2" };


size_t* UserId = new size_t[Usersize](0,1, 2);

double* salesArr = new double[Usersize] {};
double* fineArr = new double[Usersize] {};

size_t maxLogin = 15;
size_t minLogin = 5;
size_t maxPass = 15;
size_t minPass = 5;
  
std::unordered_set<wchar_t>loginSymbols;
std::unordered_set<wchar_t>passSymbols;

bool isSetCreated = false;

void ShopUsers(int mood)
{
	if (mood == 0)
	{
		system("cls");

		std::wcout << L"Id\t" << std::left << std::setw(maxLogin) << L"Логин" << std::setw(maxPass)
			<< L"Пароль\t" << std::setw(StatusArr[0].size() + 2) << L"Роль\t" << L"Продажи\t\t" << 
			L"Штраф\n\n";
		//закончили тут !!!! *___________________________________*
		std::wcout << L"\n\n";
		system("pause");
	}
}


void ChangeAccounts()
{
	if (!isSetCreated)
	{
		CreatedSet();
	}
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
				std::wcout << L"Отмена создания учетной записи\n\n";
				Sleep(1500);
				return;
			}
			if (CheckLogin(chooseLogin)) //ТУТ unordered_set
			{
				break;
			}
		}

		while (true)
		{
			system("cls");
			std::wcout << L"Введите пароль для нового пользователя или \"exit\" для выхода";
			Getline(choosePass);
			if (choosePass == L"exit" || choosePass == L"Exit")
			{
				std::wcout << L"Отмена создания учетной записи\n\n";
				Sleep(1500);
				return;
			}
			if (CheckPass(choosePass)) //ТУТ unordered_set
			{
				break;
			}
		}

		while (true)
		{
			system("cls");
			std::wcout << L"Введите роль для нового пользователя или \"exit\" для выхода";
			std::wcout << L"1 - Сотрудники\n2 - Администратор\n\nВвод: ";
			Getline(choosePass);
			if (choosePass == L"exit" || choosePass == L"Exit")
			{
				std::wcout << L"Отмена создания учетной записи\n\n";
				Sleep(1500);
				return;
			}

			if (choose == L"1")
			{
				chooseStatus == L"user1";
				break;
			}
			else if (choose == L"2")
			{
				std::wcout << L"Для подтверждения введите пароль СуперАдминистратора: ";
				Getline(choose);
				if (choose == PassArr[0])
				{
					chooseStatus == L"admin";
					break;
				}
				else
				{
					Err();
				}
			}
			else
			{
				Err();
			}
		}

		while (true)
		{
			system("cls");
			std::wcout << L"Логин: " << chooseLogin << L"\n\n";
			std::wcout << L"Пароль: " << choosePass << L"\n\n";
			std::wcout << L"Роль: " << chooseStatus << L"\n\n";
			std::wcout << L"Подтвержить?\n\n1 - ДА\n2 - НЕТ\n\nВвод: ";
			Getline(choose);
			if (choose == L"1")
			{
				std::wcout << L"Удаление товара";

				for (size_t i = 0; i < 3; i++)
				{
					Sleep(666);
					std::wcout << L".";
				}
				Sleep(666);

				ArrPushBack(UserId, Usersize);
				ArrPushBack(LoginArr, Usersize);
				ArrPushBack(PassArr, Usersize);
				ArrPushBack(StatusArr, Usersize);
				ArrPushBack(fineArr, Usersize);
				ArrPushBack(salesArr, Usersize);
				Usersize++;

				UserId[Usersize - 1] = Usersize - 1;
				LoginArr[Usersize - 1] = chooseLogin;
				PassArr[Usersize - 1] = choosePass;
				StatusArr[Usersize - 1] = chooseStatus;
				fineArr[Usersize - 1] = 0.0;
				salesArr[Usersize - 1] = 0.0;

				std::wcout << L"Учетная запись создана\n\n";
				Sleep(1500);
				break;

			} 
			if (choose == L"2")
			{
				std::wcout << L"Отмена создания учетной записи\n\n";
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

bool CheckPass(const std::wstring& pass)
{
	if (pass.size() < minPass || pass.size() > maxLogin)
	{
		std::wcout << L"Ошибка длины пароля! Допустимо от " << minPass <<
			L"до " << maxPass << L" символов\n\n";
		return false;
	}

	if (!IsNotSafe(pass, PassArr, Usersize))
	{
		std::wcout << L"Такой пользователь уже создан\n\n";
		Sleep(1500);
		return false;
	}
	int symbolCount = 0, letterCount = 0, letterCapCount = 0, numberCount = 0;
	for (size_t i = 0; i < pass.size(); i++)
	{
		if (!passSymbols.count(pass[i]))
		{
			std::wcout << L"Неккоректные символы в логике\nДопустимые символы: A-Z, a-z, 0-9\n\n";
			Sleep(1777);
			return false;
		}
		if (!std::iswdigit(pass[i]) && numberCount < 2)
		{
			numberCount++;
		}
		else if (pass[i] >= L'A' && pass[i] <= L'Z' && letterCapCount < 1)
		{
			letterCapCount++;
		}
		else if (pass[i] >= L'a' && pass[i] <= L'z' && letterCount < 4)
		{
			letterCount++;
		}
		else
		{
			symbolCount++;
		}
	}
	if (symbolCount > 0 && letterCount > 3 && letterCapCount > 0 && numberCount > 1)
	{
		return true;
	}
	else
	{
		std::wcout << L"Неккоректный пароль! Минимальные требования:\n\n";
		std::wcout << L"цифры - 2 и более\n";
		std::wcout << L"Нижний регистр букв - 4 и более\n";
		std::wcout << L"Верхний регистр букв - 1 и более\n";
		std::wcout << L"Специальные символы - 1 и более\n\n";
		Sleep(2222);
		return false;
	}
}

bool CheckLogin(const std::wstring& login)
{
	if (login.size() < minLogin || login.size() > maxLogin)
	{
		std::wcout << L"Ошибка длины логина! Допустимо от " << minLogin <<
			L"до " << maxLogin << L" символов\n\n";
	}
	return false;

	if (!IsNotSafe(login, LoginArr, Usersize))
	{
		std::wcout << L"Такой пользователь уже создан\n\n";
		Sleep(1500);
		return false;
	}
	int count = 0;
	for (size_t i = 0; i < login.size(); i++)
	{
		if (!loginSymbols.count(login[i]))
		{
			std::wcout << L"Неккоректные символы в логике\nДопустимые символы: A-Z, a-z, 0-9\n\n";
			Sleep(1777);
			return false;
		}
		else if (!std::iswdigit(login[i]) && count < 5)
		{
			count++;
		}
	}
	if (count >= 4)
	{
		return true;
	}
	else
	{
		std::wcout << L"Слишком мало символов! Минимум 4 символа верхнего или нижнего регистра!\n\n";
		Sleep(1444);
		return false;
	}
}

void CreatedSet()
{
	for (wchar_t i = L'0'; i <= L'9'; i++)
	{
		loginSymbols.insert(i);
	}
	for (wchar_t i = L'A'; i <= L'Z'; i++)
	{
		loginSymbols.insert(i);
	}
	for (wchar_t i = L'a'; i <= L'z'; i++)
	{
		loginSymbols.insert(i);
	}
	for (wchar_t i = L'!'; i <= L'~'; i++)
	{
		passSymbols.insert(i);
	}
	isSetCreated = true;
}