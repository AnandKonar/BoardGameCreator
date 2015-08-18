#ifndef BOARDGAMECREATOR_H
#define BOARDGAMECREATOR_H

#include <QtWidgets/QMainWindow>
#include "ui_boardgamecreator.h"

#include <algorithm>
#include <conio.h>
#include <io.h>
#include <fcntl.h>
#include <iostream>
#include <fstream>
#include "string.h"
#include <string>
#include <vector>
#include <windows.h>
#include <process.h>
#include <sys\stat.h>

using namespace std;

class BoardGameCreator : public QMainWindow
{
	Q_OBJECT

public:
	BoardGameCreator(QWidget *parent = 0);
	~BoardGameCreator();

private:
	Ui::BoardGameCreatorClass ui;
	//opened file name
	string _filename;
	//keys for encoding
	string _xorKey;
	string _zipKey;
	vector<int> _keyElementPositions;

	//other functions
	void Clear();
	void CreateFreeFolders();

	//saving game
	void SaveToFile(string filename);
	void Zip(string key);
	void AddKey(string key);
	void Encode(string filename, string key);

	void CodeFromToFile(string from, string to, string key, bool deleteFrom);

	//open game
	void LoadFromFile(string filename);
	void Decode(string filename, string key);
	string GetKey();
	void Unzip(string key);

private slots:
	void NewGame();
	void OpenGame();
	void SaveGame();
	void SaveGameAs();
};

#endif // BOARDGAMECREATOR_H
