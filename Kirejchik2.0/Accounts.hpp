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

extern double* salesArr;
extern double* fineArr;

extern size_t maxLogin;
extern size_t minLogin;
extern size_t maxPass;
extern size_t minPass;

extern bool isSetCreated;


extern  std::unordered_set<wchar_t>loginSymbols;
extern  std::unordered_set<wchar_t>passSymbols;

void ShopUsers(int mood = 0);
void ChangeAccounts();
void CreateNewAccount();
bool CheckLogin(const std::wstring& login);
bool CheckPass(const std::wstring& pass);

void CreatedSet();

#endif // !_ACCOUNTS_HPP_
