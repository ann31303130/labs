#pragma once

//��������� ��� �������� �����������
typedef struct{
	char **BarNames;//������ ���� ��������
	int *Bars;//������ �������� ��������
	int nBarsSize;//����������� ��������
	char chBlock;//����
	int nMaxBar;//����������� �������� ����� Bars
} Histogram;


//������� ��� ������ � ������������
void inline InitHistogram(Histogram &historgam);
void inline DestroyHistogram(Histogram &historgam);
void PrintHistogram(const Histogram &historgam);
void AddBlock(Histogram &historgam, const char *strName);
void SortByName(Histogram &historgam, bool bAscending);

#include "histogram.inl"