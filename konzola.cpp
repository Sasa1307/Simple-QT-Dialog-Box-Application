#include "konzola.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <QString>
Konzola::Konzola()
{
    ulaz1= new QLineEdit(this);
    ulaz2= new QLineEdit(this);
    izlaz= new QTextEdit(this);
    izlaz->setMinimumHeight(500);
    izlaz->setMinimumWidth(500);
    submit= new QPushButton("submit", this);
    izlaz->setReadOnly(true);
    connect(submit, SIGNAL(clicked()), this, SLOT(Ispis()));
    connect(submit, SIGNAL(clicked()), ulaz1, SLOT(clear()));
    connect(submit, SIGNAL(clicked()), ulaz2, SLOT(clear()));
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout -> addWidget(izlaz);
    mainLayout -> addWidget(ulaz1);
    mainLayout -> addWidget(ulaz2);
    mainLayout -> addWidget(submit);
    setLayout(mainLayout);
}
void Konzola::Ispis()
{
    static QString plus = "+";
    QString ulaztekst;
    if(!ulaz1->text().isEmpty() || !ulaz2->text().isEmpty())
       {
        ulaztekst=ulaz1->text();
        ulaztekst.append("e ");
        ulaztekst.append("banjguro oprdiš!!!" );
        if (!ulaz2->text().isEmpty())
           {
        ulaztekst.append(" - ");
        }
   izlaz->setText(ulaztekst.append(ulaz2->text()));
    }
    }
