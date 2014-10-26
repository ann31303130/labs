#include "histogram.h"
#include <iostream>
#include <iomanip>
#include <string>
 
int main(){
	const char * const strProgramName = "Histogramer 1.0";

	std::cout << std::setfill('*') << std::setw(strlen(strProgramName)+4) << "" << std::endl;
	std::cout << '*' << std::setfill(' ') << std::setw(strlen(strProgramName)+3) << '*' << std::endl;
	std::cout << "* " << strProgramName << " *" << std::endl;
	std::cout << '*' << std::setfill(' ') << std::setw(strlen(strProgramName)+3) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(strlen(strProgramName)+4) << "" << std::endl << std::endl;

	Histogram myBarChart;
	
	InitHistogram(myBarChart);

	std::string MyStr;
	getline(std::cin, MyStr);
	std::cout << MyStr << std::endl;

	char *MyCharStr = new char[MyStr.size()+1];
		strcpy( MyCharStr, MyStr.c_str());

	char *Words[100] = {0};
	char *MyWord=strtok(MyCharStr, " ");
	int  i = 0;

	while(MyWord){

		Words[i] = MyWord;
		MyWord	= strtok(NULL, " ");
		std::cout << Words[i] << std::endl;
		i++;
	}
	
	for(int j=0; j<i; j++){
		AddBlock(myBarChart,(const char*)Words[j]);
	}
	SortByName(myBarChart, true);
	PrintHistogram(myBarChart);

	DestroyHistogram(myBarChart);

	
	return 0;
}