#include "Authorisation.hpp"
#include "Storage.hpp"
#include <io.h>
#include <fcntl.h>

int main()
{


	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	Start();

	delete[]UserId;
	delete[]LoginArr;
	delete[]PassArr;
	delete[]StatusArr;

	if (IsStorageCreated)
	{
		delete[] idArr;
		delete[] nameArr;
		delete[] countArr;
		delete[] priceArr;
	}



/*
	система авторизации, логин пароль, вход
	Продажи: выбор товара, оплата, нал безнал, чек, галя отмена
	Склад: показать товары, пополнение, списание, изменение цены
	Аккаунты: Пользователи: супер админ, админ, пользователь, прол

	Мой магаз - Кириешка (закуски к пиву)
*/



























	return 0;























































































}