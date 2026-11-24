#ifndef _STORAGE_HPP_
#define _STORAGE_HPP_

#include"Accounts.hpp"

// размер массива склада
extern size_t sizeSt;
extern size_t* idArr;
extern std::wstring* nameArr;
extern size_t* countArr;
extern double* priceArr;
extern bool IsStorageCreated;
extern double maxPrice;

extern size_t maxStoragesize;
extern size_t currentStoragesize;

void CreateStorage(int mode = 0);
void ShowStorage(int mode = 0);
void AddProduct();
void RemoveProduct();
void ChangePrice();

void ChangeStorage();
void AddNewProduct();
void ChangeProductName();
void DeleteProduct();
void ChangeMaxStorageLimits();
#endif // !_STORAGE_HPP_