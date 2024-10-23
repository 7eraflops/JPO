#include <iostream>

using std::cout, std::cin, std::endl;

class Global_class
{
   public:
    Global_class()
    {
        cout << "Constructor of Global_class called" << endl;
    }
    ~Global_class()
    {
        cout << "Destructor of Global_class called" << endl;
    }
};

class Local_class
{
   public:
    Local_class()
    {
        cout << "Constructor of Local_class called" << endl;
    }
    ~Local_class()
    {
        cout << "Destructor of Local_class called" << endl;
    }
};

class Block_class
{
   public:
    Block_class()
    {
        cout << "Constructor of Block_class called" << endl;
    }
    ~Block_class()
    {
        cout << "Destructor of Block_class called" << endl;
    }
};

Global_class global_object;

int main()
{
    cout << "Entering main() function" << endl;
    Local_class local_object;
    if(true)
    {
        Block_class block_object;
    }
    cout << "Leaving main() function" << endl;
    return 0;
}