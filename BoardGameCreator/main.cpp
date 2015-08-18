#include "boardgamecreator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BoardGameCreator w;
	w.show();
	return a.exec();
}
