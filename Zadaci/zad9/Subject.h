#pragma once

class Subject {
public:
    virtual void f1() = 0;
    virtual void f2() = 0;
    virtual int f3() = 0;
    virtual int id() = 0;
};

#include "SubjectImpl.h"
#include "SubjectProxy.h"