#include <QCoreApplication>
#include <QDebug>
#include <array>
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


    //terrnary operator

    std::string passWord;
    qInfo() << "Enter password. Password must be entered in lower case. hint used to turn over the T.V : ";
    std::cin >> passWord;

    //if true            do this                      else do this
    passWord == "remote" ? qInfo("Password correct ") : qFatal("Password Incorect !!!!!!! program stopped");




    //for loop

    std::array<int,3> seatAvailabel = {43, 12, 10};
    for(unsigned int i=0; i < seatAvailabel.size(); i++){
        qInfo() << "Number of seats availabel is row " << i << ": " << seatAvailabel[i];
    }



    //switch

    int seatRow;
    qInfo() << "Enter number of row you require. Note only seat row 1, 2 and 3 are availabel !!";
    std::cin >> seatRow;

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


    //do while loop

    int money;
    //do this
    do{
    qInfo() << "Enter a ammount of deposit to be payed. value must be more than £10 ";

    std::cin >> money;
    //if money is grater than 10 do this
    if(money > 10){
        qInfo() << "You are depositing £" << money  << " to your seats" ;
         }
    }
    //while money is less than 10
    while(money < 10);

    return a.exec();
}
