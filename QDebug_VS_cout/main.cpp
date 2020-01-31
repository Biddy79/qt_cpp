#include <QCoreApplication>
#include <iostream>
#include <QtDebug>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //out put to user
    std::cout << "hello. Please enter your age: " << std::endl;

    int age;

    //input from user
    std::cin >> age;

    //out put to user
    qInfo() << "Your age is: " << age;

    qDebug() << "QDebug is used to output information to programer ";
    qCritical() << "Used to inform user and programer of error";

    //qFatal will stop program is incorrect data type is given
    //qFatal("Program crashed!!!!!!");




    return a.exec();
}
