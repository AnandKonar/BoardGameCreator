#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <conio.h>
#include <fstream>
#include<iostream>
#include <io.h>
#include <fcntl.h>
#include "string.h"
#include <string>
#include <vector>
#include <windows.h>
#include <process.h>
#include <sys\stat.h>

using namespace std;

void CodeFromToFile(string from, string to, string key, bool deleteFrom){
	char arr[4097] = {};
	int myfile = open(from.c_str(), _O_RDONLY | _O_BINARY, _S_IWRITE);
	int mynewfile = open(to.c_str(), _O_CREAT | _O_BINARY | _O_WRONLY | _O_TRUNC, _S_IWRITE);
	while (!eof(myfile))
	{
		int c = read(myfile, (void*)arr, 4096);
		for (int i = 0; i < c; i++)		{
			arr[i] = arr[i] ^ key[i % key.length()];
		}
		arr[c] = '0';
		write(mynewfile, (void*)arr, c);
	}

	CloseHandle(Handle64ToHandle(&mynewfile));
	CloseHandle(Handle64ToHandle(&myfile));
	//close(mynewfile);
	//close(myfile);

	if (deleteFrom){
		int cur = open(from.c_str(), _O_TRUNC);
	}
}

string GetKey(string from, string to, vector<int> &keyElementPositions){
	char arr[4097] = {};
	int myfile = open(from.c_str(), _O_RDONLY | _O_BINARY, _S_IWRITE);
	int mynewfile = open(to.c_str(), _O_CREAT | _O_BINARY | _O_WRONLY | _O_TRUNC, _S_IWRITE);
	bool keyReaded = false;
	string key = "";
	while (!eof(myfile))
	{
		int c = read(myfile, (void*)arr, 4096);
		if (!keyReaded){
			int allWrited = 0;
			int alreadyReaded = 0;
			for (int i = 0; i < 7; i++){
				key += arr[keyElementPositions[i]];
				alreadyReaded += write(mynewfile, (void*)(arr + alreadyReaded), keyElementPositions[i] - allWrited);
				alreadyReaded++;
				allWrited += alreadyReaded;
			}
			write(mynewfile, (void*)(arr + alreadyReaded), c - allWrited);
			keyReaded = true;
		}
		else{
			write(mynewfile, (void*)arr, c);
		}
	}

	CloseHandle(Handle64ToHandle(&mynewfile));
	CloseHandle(Handle64ToHandle(&myfile));
	//close(mynewfile);
	//close(myfile);
	int cur = open(from.c_str(), _O_TRUNC);
	return key;
}

void AddKey(string from, string to, string key, vector<int> &keyElementPositions){
	char arr[4097] = {};
	int myfile = open(from.c_str(), _O_RDONLY | _O_BINARY, _S_IWRITE);
	int mynewfile = open(to.c_str(), _O_CREAT | _O_BINARY | _O_WRONLY | _O_TRUNC, _S_IWRITE);
	bool keyWrited = false;
	while (!eof(myfile))
	{
		int c = read(myfile, (void*)arr, 4096);
		if (!keyWrited){
			int allWrited = 0;
			int alreadyReaded = 0;
			for (int i = 0; i < 7; i++){
				alreadyReaded += write(mynewfile, (void*)(arr + alreadyReaded), keyElementPositions[i] - allWrited);
				allWrited += alreadyReaded;
				allWrited += write(mynewfile, (void*)keyElementPositions[i], 1);
			}
			write(mynewfile, (void*)(arr + alreadyReaded), c - allWrited);
			keyWrited = true;
		}
		else{
			write(mynewfile, (void*)arr, c);
		}
	}

	CloseHandle(Handle64ToHandle(&mynewfile));
	CloseHandle(Handle64ToHandle(&myfile));
	//close(mynewfile);
	//close(myfile);
	int cur = open(from.c_str(), _O_TRUNC);
}

void Unzip(string from, string to, string key){
	key = "-p" + key;
	int c = _spawnlp(P_WAIT, "7z.exe", "7z.exe", "x", from.c_str(), key.c_str(), "-aoa", NULL);
	int cur = open("tmp.7z", _O_TRUNC);
}

void Zip(string from, string to, string key){
	key = "-p" + key;
	int c = _spawnlp(P_WAIT, "7z.exe", "7z.exe", "a", to.c_str(), key.c_str(), " - mhe", from.c_str(), NULL);
	int cur = open("tmp.7z", _O_TRUNC);
}

string ReadJSONFromFile(string filename){
	ifstream file(filename, ios::in);
	string str;
	getline(file, str);
	file.close();
	return str;
}

void WriteJSONToFile(string data, string filename){
	ofstream out(filename);
	out << data;
	out.close();
}

void CopyFileToPath(string filename, string destName){
	std::ifstream in(filename);
	std::ofstream out(destName);
	out << in.rdbuf();
	out.close();
	in.close();
}

#endif // FILEUTILS_H
