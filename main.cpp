#include <QCoreApplication>
#include <QSharedPointer>
#include <QDebug>
#include "testclass.h"
#include "testclassnonqt.h"
#include <memory>

/**
 * @brief Assignment 7 for Qt5 Design Patterns Tutorial on Udemy.
 * @details Simple application to demonstrate how QObjects can be
 *          used with Templates.
 * @author edgecrusher8074
 */


template <class T1>
void doSomething(T1 obj)
{
    if(auto qObj = qobject_cast<QObject*>(obj))
    {
        qObj->setObjectName("templateTest 1");
    }
    else
    {
        qInfo() << "Not a QObject";
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        auto tc = QSharedPointer<TestClass>(new TestClass(nullptr));
        tc->debugObjectName();
        doSomething(tc.data());
        tc->debugObjectName();
    }

//    {
//        auto tc = std::make_shared<TestClassNonQt>();
//        doSomething(tc);
//    }

    return a.exec();
}
