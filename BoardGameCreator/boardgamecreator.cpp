#include "boardgamecreator.h"
#include "FileUtils.h"

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

BoardGameCreator::~BoardGameCreator(){

}

void BoardGameCreator::Clear(){

}

void BoardGameCreator::CreateFreeFolders(){

}

//open/save functions
void BoardGameCreator::SaveToFile(string filename){
	Zip("tmp", "tmp.7z", _zipKey);
	AddKey("tmp.7z", "tmp.key", _zipKey, _keyElementPositions);
	CodeFromToFile("tmp.key", filename, _zipKey, true);
}

void BoardGameCreator::LoadFromFile(string filename){
	CodeFromToFile(filename, "tmp.key", _xorKey, false);
	string key = GetKey("tmp.key", "tmp.7z", _keyElementPositions);
	Unzip("tmp.7z", "tmp", _zipKey);
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
