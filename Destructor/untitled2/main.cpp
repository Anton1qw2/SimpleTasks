#include <QCoreApplication>
#include <iostream>
class Base {
public:
    Base(){
        std::cout<< "Create Base"<< std::endl;
    }
    ~Base(){
        std::cout<< "Destruct Base"<< std::endl;
    }
};

class dervide : public virtual Base
{
public:
    dervide() {
        std::cout<< "Create Dervide"<< std::endl;
    }
    ~dervide(){
        std::cout<< "Destruct Derived"<< std::endl;
    }

};

int main(int argc, char *argv[])
{
    int z;
    Base* d = new dervide();
    delete d;

    return 0;
}
