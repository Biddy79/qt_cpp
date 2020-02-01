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

    //not we dont need brakets if statment is all on one line
    if(age < 17) qInfo() << "You are Not old enough to drink in the U.K. drinks will not be availabel ";
    else if (age == 18){
        qInfo() << "You are just old enough to dring in the U.K. drinks will be availabel ";
    }
    else{
        qInfo() << "You are old enough to drink in the U.K. drinks will be availabel ";
    }



    std::string passWord;
    qInfo() << "Enter password: ";
    std::cin >> passWord;

    //terrnary operator

    //if true            do this                      else do this
    passWord == "moto" ? qInfo("Password correct ") : qFatal("Password Incorect !!!!!!! program stopped");





    int seatRow;
    qInfo() << "Enter number of row you require. Note only seat row 1, 2 and 3 are availabel !!";
    std::cin >> seatRow;

    //switch

    switch (seatRow) {
    case 1:
        qInfo() << "You have sellected row one";
    break;
    case 2:
        qInfo() << "You have sellected row Two ";
    break;
    case 3:
        qInfo() << "You have sellected row three ";
    break;
    default:
        qFatal("You have entered an incorrect value");

    }


    return a.exec();
}
