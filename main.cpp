#include <QApplication>
#include "konzola.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Konzola w;
    w.setStyleSheet("QWidget {background-color: #0095dd; }"
                    " QLineEdit {background-color: #0048bb; color:#ffff00; border:rgb(0,0,0)}"
                    " QTextEdit {background-color: #0048bb; color:#ffff00; border: 5px; border-color:#ffffff}"
                    " QPushButton {background-color: #0095dd; color:#ffff00; border-color:#ffff00}");
    w.setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    w.show();
    return a.exec();
}
