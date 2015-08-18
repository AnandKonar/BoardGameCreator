#include "boardgamecreator.h"

BoardGameCreator::BoardGameCreator(QWidget *parent)
	: QMainWindow(parent){

	ui.setupUi(this);

	//keys initing
	_xorKey = "123writeln321";
	_zipKey = "writeln";
	for (int i = 0; i < 7; i++){
		_keyElementPositions.push_back(i*i + 5);
	}

	_filename = "";
}

BoardGameCreator::~BoardGameCreator()
{

}

void BoardGameCreator::Clear(){

}

void BoardGameCreator::CreateFreeFolders(){

}

//open save functions
//save function
void BoardGameCreator::SaveToFile(string filename){
	Zip(_zipKey);
	AddKey(_zipKey);
	Encode("tmp.key", filename);
}

void BoardGameCreator::Zip(string key){
	key = "-p" + key;
	int c = _spawnlp(P_WAIT, "7z.exe", "7z.exe", "a", "tmp.7z", key.c_str(), " - mhe", "tmp", NULL);
	int cur = open("tmp.7z", _O_TRUNC);
}

void BoardGameCreator::AddKey(string key){
	char arr[4097] = {};
	int myfile = open("tmp.7z", _O_RDONLY | _O_BINARY, _S_IWRITE);
	int mynewfile = open("tmp.key", _O_CREAT | _O_BINARY | _O_WRONLY | _O_TRUNC, _S_IWRITE);
	bool keyWrited = false;
	while (!eof(myfile))
	{
		int c = read(myfile, (void*)arr, 4096);
		if (!keyWrited){
			int allWrited = 0;
			int alreadyReaded = 0;
			for (int i = 0; i < 7; i++){
				alreadyReaded += write(mynewfile, (void*)(arr + alreadyReaded), _keyElementPositions[i] - allWrited);
				allWrited += alreadyReaded;
				allWrited += write(mynewfile, (void*)_keyElementPositions[i], 1);
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
	int cur = open("tmp.7z", _O_TRUNC);
}

void BoardGameCreator::Encode(string filename, string key){
	CodeFromToFile("tmp.key", filename, key, true);
}

//load fucntions
void BoardGameCreator::LoadFromFile(string filename){
	Decode(filename, _xorKey);
	string key = GetKey();
	Unzip(key);
}

void BoardGameCreator::Decode(string filename, string key){
	CodeFromToFile(filename, "tmp.key", key, false);
}

void BoardGameCreator::CodeFromToFile(string from, string to, string key, bool deleteFrom){
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

string BoardGameCreator::GetKey(){
	char arr[4097] = {};
	int myfile = open("tmp.key", _O_RDONLY | _O_BINARY, _S_IWRITE);
	int mynewfile = open("tmp.7z", _O_CREAT | _O_BINARY | _O_WRONLY | _O_TRUNC, _S_IWRITE);
	bool keyReaded = false;
	string key = "";
	while (!eof(myfile))
	{
		int c = read(myfile, (void*)arr, 4096);
		if (!keyReaded){
			int allWrited = 0;
			int alreadyReaded = 0;
			for (int i = 0; i < 7; i++){
				key += arr[_keyElementPositions[i]];
				alreadyReaded += write(mynewfile, (void*)(arr + alreadyReaded), _keyElementPositions[i] - allWrited);
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
	int cur = open("tmp.key", _O_TRUNC);
	return key;
}

void BoardGameCreator::Unzip(string key){
	key = "-p" + key;
	int c = _spawnlp(P_WAIT, "7z.exe", "7z.exe", "x", "tmp.7z", key.c_str(), "-aoa", NULL);
	int cur = open("tmp.7z", _O_TRUNC);
}

//work with file
void BoardGameCreator::NewGame(){
	Clear();
	CreateFreeFolders();
}

void BoardGameCreator::OpenGame(){

}

void BoardGameCreator::SaveGame(){
	(_filename == "" ? SaveGameAs() : SaveToFile(_filename));
}

void BoardGameCreator::SaveGameAs(){
	//QString filename;
	//LoadFromFile(filename);
}
