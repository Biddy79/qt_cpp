#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //if statment

    int age = 0;
    qInfo() << "Enter age: ";
    std::cin >> age;

    if(age == 0 ) qFatal("invalid you did not enter a int ");

    qInfo() << "Your age is " << age;

    //not we dont nee brakets if statment is all on one line
    if(age < 17) qInfo() << "You are Not old enough to drink in the U.K ";
    else if (age == 18){
        qInfo() << "You are just old enough to dring in the U.K ";
    }
    else{
        qInfo() << "You are old enough to drink in the U.K ";
    }


    //terrnary operator

    int value;
    qInfo() << "Enter the price of the item you are selling: ";
    std::cin >> value;
    value > 0 && value < 10 ? qInfo("You enter an accetabel ammount ") : qFatal("The ammount you entered was not an accetabel ammont ");



    return a.exec();
}
