#ifndef _AUTHORISATION_HPP_
#define _AUTHORISATION_HPP_

#include <Windows.h>
#include "ServiceFunctions.hpp"
#include "Accounts.hpp"
#include "Storage.hpp"

void Start();
bool Login();
void SuperAdminMenu();
void AdminMenu();
void UserMenu();

#endif // !_AUTHORISATION_HPP_