#include <iostream>
#include <memory>

using std::cout, std::cin, std::endl;

class Animal
{
   public:
    virtual void make_sound() = 0;
    Animal();
    ~Animal();
};

class Dog : public Animal
{
   public:
    void make_sound() override
    {
        cout << "Woof!" << endl;
    }
    Dog();
    ~Dog();
};

class Cat : public Animal
{
   public:
    void make_sound() override
    {
        cout << "Meow!" << endl;
    }
    Cat();
    ~Cat();
};

// Define USE_UNIQUE_PTR to switch to unique_ptr version
// #define USE_UNIQUE_PTR
#ifdef USE_UNIQUE_PTR
std::unique_ptr<Animal> choose_animal(int number)
{
    if (number % 2 == 0)
    {
        return std::make_unique<Dog>();
    }
    else
    {
        return std::make_unique<Cat>();
    }
}
#else
Animal* choose_animal(int number)
{
    if (number % 2 == 0)
    {
        return new Dog();
    }
    else
    {
        return new Cat();
    }
}
#endif

int main()
{
    cout << "Enter a number: ";
    int x{};
    cin >> x;

#ifdef USE_UNIQUE_PTR
    auto animal = choose_animal(x);
    animal->make_sound();
#else
    Animal* animal = choose_animal(x);
    animal->make_sound();
    delete animal;
#endif

    return 0;
}
