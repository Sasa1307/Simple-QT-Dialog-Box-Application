

#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
class Konzola : public QWidget
{
    Q_OBJECT
public: Konzola();
public slots:
    void Ispis();
    void Izlaz();
private:
  QLineEdit *ulaz1;
  QLineEdit *ulaz2;
  QTextEdit *izlaz;
  QPushButton *submit;
};
