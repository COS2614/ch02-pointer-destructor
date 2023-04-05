#include <iostream>

class MyClass
{
private:
    int* data_;

public:
    MyClass()
    {
        data_ = new int[5];
        std::cout << "Constructor called" << std::endl;
    }

    ~MyClass()
    {
        delete[] data_;
        std::cout << "Destructor called" << std::endl;
    }
};


int main()
{
    MyClass obj;
    return 0;
}
