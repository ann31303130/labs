#pragma once

//Структура для описания гисторгаммы
typedef struct{
	char **BarNames;//массив имен столбцов
	int *Bars;//массив значений столбцов
	int nBarsSize;//колличество столбцов
	char chBlock;//знак
	int nMaxBar;//максимально значение среди Bars
} Histogram;


//Функции для работы с гисторгаммой
void inline InitHistogram(Histogram &historgam);
void inline DestroyHistogram(Histogram &historgam);
void PrintHistogram(const Histogram &historgam);
void AddBlock(Histogram &historgam, const char *strName);
void SortByName(Histogram &historgam, bool bAscending);

#include "histogram.inl"