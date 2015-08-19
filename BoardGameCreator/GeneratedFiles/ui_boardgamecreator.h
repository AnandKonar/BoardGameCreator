/********************************************************************************
** Form generated from reading UI file 'boardgamecreator.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDGAMECREATOR_H
#define UI_BOARDGAMECREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardGameCreatorClass
{
public:
    QAction *newGame;
    QAction *openGame;
    QAction *saveGame;
    QAction *saveGameAs;
    QAction *exit;
    QWidget *centralWidget;
    QTabWidget *gameParams;
    QWidget *tab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *minPlayers;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *maxPlayers;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QPlainTextEdit *aimOfGame;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *loadRules;
    QLabel *rules;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *gameName;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QPlainTextEdit *gamedescription;
    QWidget *tab_10;
    QWidget *tab_11;
    QWidget *tab_2;
    QGroupBox *editMode;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *cardView;
    QPushButton *loadImage;
    QPushButton *saveEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *cardName;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_2;
    QListWidget *cardList;
    QPushButton *createCard;
    QPushButton *duplicateCard;
    QPushButton *editCard;
    QPushButton *removeCard;
    QWidget *tab_6;
    QWidget *tab_9;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_7;
    QWidget *tab_8;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BoardGameCreatorClass)
    {
        if (BoardGameCreatorClass->objectName().isEmpty())
            BoardGameCreatorClass->setObjectName(QStringLiteral("BoardGameCreatorClass"));
        BoardGameCreatorClass->resize(1217, 596);
        newGame = new QAction(BoardGameCreatorClass);
        newGame->setObjectName(QStringLiteral("newGame"));
        openGame = new QAction(BoardGameCreatorClass);
        openGame->setObjectName(QStringLiteral("openGame"));
        saveGame = new QAction(BoardGameCreatorClass);
        saveGame->setObjectName(QStringLiteral("saveGame"));
        saveGameAs = new QAction(BoardGameCreatorClass);
        saveGameAs->setObjectName(QStringLiteral("saveGameAs"));
        exit = new QAction(BoardGameCreatorClass);
        exit->setObjectName(QStringLiteral("exit"));
        centralWidget = new QWidget(BoardGameCreatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gameParams = new QTabWidget(centralWidget);
        gameParams->setObjectName(QStringLiteral("gameParams"));
        gameParams->setGeometry(QRect(20, 20, 1011, 481));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 90, 321, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        minPlayers = new QSpinBox(layoutWidget);
        minPlayers->setObjectName(QStringLiteral("minPlayers"));
        minPlayers->setMinimum(1);
        minPlayers->setMaximum(30);

        horizontalLayout_2->addWidget(minPlayers);

        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(380, 120, 321, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        maxPlayers = new QSpinBox(layoutWidget_2);
        maxPlayers->setObjectName(QStringLiteral("maxPlayers"));
        maxPlayers->setMinimum(1);
        maxPlayers->setMaximum(30);

        horizontalLayout_3->addWidget(maxPlayers);

        layoutWidget_3 = new QWidget(tab);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(80, 150, 191, 92));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        aimOfGame = new QPlainTextEdit(layoutWidget_3);
        aimOfGame->setObjectName(QStringLiteral("aimOfGame"));

        verticalLayout_4->addWidget(aimOfGame);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(400, 150, 269, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        loadRules = new QPushButton(layoutWidget1);
        loadRules->setObjectName(QStringLiteral("loadRules"));

        horizontalLayout_4->addWidget(loadRules);

        rules = new QLabel(layoutWidget1);
        rules->setObjectName(QStringLiteral("rules"));

        horizontalLayout_4->addWidget(rules);

        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(390, 0, 221, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        gameName = new QLineEdit(layoutWidget2);
        gameName->setObjectName(QStringLiteral("gameName"));

        horizontalLayout_5->addWidget(gameName);

        layoutWidget3 = new QWidget(tab);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(80, 50, 191, 92));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        gamedescription = new QPlainTextEdit(layoutWidget3);
        gamedescription->setObjectName(QStringLiteral("gamedescription"));

        verticalLayout_3->addWidget(gamedescription);

        gameParams->addTab(tab, QString());
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        gameParams->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        gameParams->addTab(tab_11, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        editMode = new QGroupBox(tab_2);
        editMode->setObjectName(QStringLiteral("editMode"));
        editMode->setGeometry(QRect(190, 10, 571, 431));
        groupBox = new QGroupBox(editMode);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 161, 221));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cardView = new QLabel(groupBox);
        cardView->setObjectName(QStringLiteral("cardView"));
        cardView->setLayoutDirection(Qt::LeftToRight);
        cardView->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(cardView);

        loadImage = new QPushButton(groupBox);
        loadImage->setObjectName(QStringLiteral("loadImage"));

        verticalLayout->addWidget(loadImage);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        saveEdit = new QPushButton(editMode);
        saveEdit->setObjectName(QStringLiteral("saveEdit"));
        saveEdit->setGeometry(QRect(210, 400, 161, 23));
        layoutWidget4 = new QWidget(editMode);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 11, 321, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        cardName = new QLineEdit(layoutWidget4);
        cardName->setObjectName(QStringLiteral("cardName"));

        horizontalLayout->addWidget(cardName);

        layoutWidget5 = new QWidget(tab_2);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 30, 161, 310));
        verticalLayout_2 = new QVBoxLayout(layoutWidget5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cardList = new QListWidget(layoutWidget5);
        cardList->setObjectName(QStringLiteral("cardList"));

        verticalLayout_2->addWidget(cardList);

        createCard = new QPushButton(layoutWidget5);
        createCard->setObjectName(QStringLiteral("createCard"));

        verticalLayout_2->addWidget(createCard);

        duplicateCard = new QPushButton(layoutWidget5);
        duplicateCard->setObjectName(QStringLiteral("duplicateCard"));

        verticalLayout_2->addWidget(duplicateCard);

        editCard = new QPushButton(layoutWidget5);
        editCard->setObjectName(QStringLiteral("editCard"));

        verticalLayout_2->addWidget(editCard);

        removeCard = new QPushButton(layoutWidget5);
        removeCard->setObjectName(QStringLiteral("removeCard"));

        verticalLayout_2->addWidget(removeCard);

        gameParams->addTab(tab_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gameParams->addTab(tab_6, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        gameParams->addTab(tab_9, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gameParams->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gameParams->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gameParams->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gameParams->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        gameParams->addTab(tab_8, QString());
        BoardGameCreatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BoardGameCreatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1217, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        BoardGameCreatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BoardGameCreatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BoardGameCreatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BoardGameCreatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BoardGameCreatorClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(newGame);
        menu->addAction(openGame);
        menu->addAction(saveGame);
        menu->addAction(saveGameAs);
        menu->addAction(exit);

        retranslateUi(BoardGameCreatorClass);

        gameParams->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(BoardGameCreatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *BoardGameCreatorClass)
    {
        BoardGameCreatorClass->setWindowTitle(QApplication::translate("BoardGameCreatorClass", "BoardGameCreator", 0));
        newGame->setText(QApplication::translate("BoardGameCreatorClass", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", 0));
        openGame->setText(QApplication::translate("BoardGameCreatorClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\320\263\321\200\321\203", 0));
        saveGame->setText(QApplication::translate("BoardGameCreatorClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        saveGameAs->setText(QApplication::translate("BoardGameCreatorClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", 0));
        exit->setText(QApplication::translate("BoardGameCreatorClass", "\320\222\321\213\321\205\320\276\320\264", 0));
        label_3->setText(QApplication::translate("BoardGameCreatorClass", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \320\270\320\263\321\200\320\276\320\272\320\276\320\262(\320\276\321\202 1):", 0));
        label_4->setText(QApplication::translate("BoardGameCreatorClass", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \320\270\320\263\321\200\320\276\320\272\320\276\320\262(\320\264\320\276 30):", 0));
        label_7->setText(QApplication::translate("BoardGameCreatorClass", "\320\246\320\265\320\273\321\214 \320\270\320\263\321\200\321\213", 0));
        loadRules->setText(QApplication::translate("BoardGameCreatorClass", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\277\321\200\320\260\320\262\320\270\320\273\320\260(pdf)", 0));
        rules->setText(QApplication::translate("BoardGameCreatorClass", "\320\220\320\264\321\200\320\265\321\201 \321\204\320\260\320\271\320\273\320\260 \321\201 \320\277\321\200\320\260\320\262\320\270\320\273\320\260\320\274\320\270", 0));
        label_5->setText(QApplication::translate("BoardGameCreatorClass", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\270\320\263\321\200\321\213:", 0));
        label_6->setText(QApplication::translate("BoardGameCreatorClass", "\320\232\321\200\320\260\321\202\320\272\320\276\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\270\320\263\321\200\321\213", 0));
        gameParams->setTabText(gameParams->indexOf(tab), QApplication::translate("BoardGameCreatorClass", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\270\320\263\321\200\321\213", 0));
        gameParams->setTabText(gameParams->indexOf(tab_10), QApplication::translate("BoardGameCreatorClass", "\320\232\320\276\320\273\320\276\320\264\321\213", 0));
        gameParams->setTabText(gameParams->indexOf(tab_11), QApplication::translate("BoardGameCreatorClass", "\320\243\321\201\320\273\320\276\320\262\320\270\321\217", 0));
        editMode->setTitle(QString());
        groupBox->setTitle(QString());
        cardView->setText(QApplication::translate("BoardGameCreatorClass", "\320\240\320\270\321\201\321\203\320\275\320\276\320\272 \320\272\320\260\321\200\321\202\321\213", 0));
        loadImage->setText(QApplication::translate("BoardGameCreatorClass", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
        saveEdit->setText(QApplication::translate("BoardGameCreatorClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        label_2->setText(QApplication::translate("BoardGameCreatorClass", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\260\321\200\321\202\321\213:", 0));
        createCard->setText(QApplication::translate("BoardGameCreatorClass", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", 0));
        duplicateCard->setText(QApplication::translate("BoardGameCreatorClass", "\320\224\321\203\320\261\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", 0));
        editCard->setText(QApplication::translate("BoardGameCreatorClass", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", 0));
        removeCard->setText(QApplication::translate("BoardGameCreatorClass", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", 0));
        gameParams->setTabText(gameParams->indexOf(tab_2), QApplication::translate("BoardGameCreatorClass", "\320\240\321\203\320\261\320\260\321\210\320\272\320\270 \320\272\320\260\321\200\321\202", 0));
        gameParams->setTabText(gameParams->indexOf(tab_6), QApplication::translate("BoardGameCreatorClass", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\262 \320\270\320\263\321\200\320\265", 0));
        gameParams->setTabText(gameParams->indexOf(tab_9), QApplication::translate("BoardGameCreatorClass", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\262 \320\270\320\263\321\200\320\265", 0));
        gameParams->setTabText(gameParams->indexOf(tab_3), QApplication::translate("BoardGameCreatorClass", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\270", 0));
        gameParams->setTabText(gameParams->indexOf(tab_4), QApplication::translate("BoardGameCreatorClass", "\320\240\320\276\320\273\320\270", 0));
        gameParams->setTabText(gameParams->indexOf(tab_5), QApplication::translate("BoardGameCreatorClass", "\320\232\320\260\321\200\321\202\321\213 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217", 0));
        gameParams->setTabText(gameParams->indexOf(tab_7), QApplication::translate("BoardGameCreatorClass", "\320\232\320\276\320\275\320\265\321\206 \320\270\320\263\321\200\321\213", 0));
        gameParams->setTabText(gameParams->indexOf(tab_8), QApplication::translate("BoardGameCreatorClass", "\320\230\320\263\321\200\320\276\320\262\320\276\320\265 \320\277\320\276\320\273\320\265", 0));
        menu->setTitle(QApplication::translate("BoardGameCreatorClass", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class BoardGameCreatorClass: public Ui_BoardGameCreatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDGAMECREATOR_H
