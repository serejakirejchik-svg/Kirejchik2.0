#ifndef _ACCOUNTS_HPP_
#define _ACCOUNTS_HPP_

#include "ServiceFunctions.hpp"

extern size_t Usersize;
extern size_t CurrentId;
extern std::wstring CurrentStatus;


extern std::wstring* LoginArr;
extern std::wstring* PassArr;
extern std::wstring* StatusArr;
extern size_t* UserId;

void ChangeAccounts();
void CreateNewAccount();

#endif // !_ACCOUNTS_HPP_
