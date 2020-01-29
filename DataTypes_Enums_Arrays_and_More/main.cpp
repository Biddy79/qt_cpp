#include <QCoreApplication>
#include <QtDebug>
#include <iostream>
#include <array>

using namespace std;

//enum will add numbers to each stament made with ist brackets on a zero based system
enum color {red, blue, green};


//struct creating an objects
struct product{
    string name;
    int price;
    double len;
    color colors;
};

int main(int argc, char *argv[])
{
    qInfo() << "ENUMS ";

    //enum will add numbers to each stament made with ist brackets on a zero based system
    qInfo() << color::red << color::blue << color::green;

    qInfo() << "";


    qInfo() << "STRUCTS";

    //declearing an object of product
    product camara;

    //setting variabel values of object camara
    camara.name = "panasonic camara";
    camara.price = 60;
    camara.len = 9.4;
    //setting camaras color to the value of blue int the enum this will out put a int
    camara.colors = color::blue;

    //needed to use cout here as qInfo() would not out put string??? must look into this
    cout << "product:  " << camara.name << endl;
    qInfo() << "price: " << camara.price;
    qInfo() << "lenght cm: " << camara.len;
    qInfo() << "color product code  " << camara.colors;

    qInfo() << "";

    qInfo() << "SIGNED AND UNSIGNED VARIBELS ";


    //unsigned will not accept negative numbers
    unsigned int num1 = 10;
    qInfo() <<"num value is: " << num1;

    //signed int will accept negative numbers
    signed int num2 = -10;
    qInfo() <<"num value is: " << num2;

    qInfo() << "";

    qInfo() << "ARRAYS";

    array<int,5> carBay;

    carBay[0] = 10;
    carBay[1] = 24;
    carBay[2] = 12;
    carBay[3] = 63;
    carBay[4] = 4;

    for(int i=0; i<5; i++){
        qInfo() << "Number of cars in car bay " << i+1 << ": " << carBay[i];
    }

    qInfo() << "";

    qInfo() << ".SIZE() AND SIZEOF()";

    /* sizeof(carBay) will give the colletive data size of carBay.
     In this case size of int is 4 bytes and there are 5 elements in an array makeing 20 bytes
    */
    qInfo() << sizeof(carBay);

    // carBay.size() will give the number of elements int the array
    qInfo() << carBay.size();



    QCoreApplication a(argc, argv);


    return a.exec();
}
