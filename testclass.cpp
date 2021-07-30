#include "testclass.h"

#include <QDebug>

TestClass::TestClass(QObject *parent) : QObject(parent)
{
    qInfo() << "Created";
}

TestClass::~TestClass()
{
     qInfo() << "Destroyed";
}

void TestClass::debugObjectName()
{
    qInfo() << "objectName: "  << objectName();
}
