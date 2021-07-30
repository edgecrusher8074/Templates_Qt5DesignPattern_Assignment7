#pragma once

#include <QObject>

class TestClass : public QObject
{
    Q_OBJECT
public:
    explicit TestClass(QObject *parent = nullptr);
    ~TestClass();
    void debugObjectName();

};

