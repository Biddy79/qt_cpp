#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    qInfo() << "Hello World";

    QCoreApplication a(argc, argv);

    return a.exec();
}
