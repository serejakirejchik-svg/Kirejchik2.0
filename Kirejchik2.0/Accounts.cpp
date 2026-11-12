#include "Accounts.hpp"


size_t Usersize = 3;
size_t CurrentId = 0;
std::wstring CurrentStatus;


std::wstring* LoginArr = new std::wstring[Usersize](L"admin", L"user1", L"user2");
std::wstring* PassArr = new std::wstring[Usersize](L"admin", L"user1", L"user2");
std::wstring* StatusArr = new std::wstring[Usersize](L"Sadmin", L"user1", L"user2");

size_t* UserId = new size_t[Usersize](0, 1, 2);