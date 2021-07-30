#include "testclassnonqt.h"
#include <QDebug>

TestClassNonQt::TestClassNonQt()
{
    qInfo() << "Created";
}

void TestClassNonQt::setObjectName(const QString &name)
{
    qInfo() << "doin nohting for: " << name;
}
