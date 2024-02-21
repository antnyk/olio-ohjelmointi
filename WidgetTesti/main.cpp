#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Sovellus käynnistetään";
    a.exec();


    return a.exec();
}
