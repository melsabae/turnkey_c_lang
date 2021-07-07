#ifndef   NULL_CLASS_H
#define   NULL_CLASS_H


#include "gmock/gmock.h"


class NullClass
{
    public:
        virtual void EmptyFunction() = 0;
};


namespace Mocks
{
    class MockNullClass : public NullClass
    {
        public:
            MOCK_METHOD(void, EmptyFunction, (), (override));
    };
}


#endif // NULL_CLASS_H

