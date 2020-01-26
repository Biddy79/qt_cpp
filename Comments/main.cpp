#include <QCoreApplication>
#include <QDebug>


//  Here is a singel line comment

/*
 * Here is a mulity line comment block
 *
*/

/**
 * @brief main // starting point for program
 * @param argc // int paramitor
 * @param argv // char pointer array paramitor
 * @return     // return value int
 */

int main(int argc, char *argv[])
{

    qInfo("Hello all");

    QCoreApplication a(argc, argv);

    return a.exec();
}
