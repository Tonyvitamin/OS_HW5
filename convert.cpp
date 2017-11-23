#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <list>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	fstream fin, fout;
	fin.open("data.txt" , fstream::in);
	fout.open("new_data.txt" , fstream::out);
	string buffer;
	while(getline(fin, buffer))
		fout<<buffer[0]<<buffer[1]<<buffer[2]<<buffer[3]<<endl;
	fin.clear();
	fin.seekg(0);
	while(getline(fin , buffer))
		fout<<buffer<<endl;
}