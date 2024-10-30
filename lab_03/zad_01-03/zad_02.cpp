#include <iostream>
#include <stdexcept>
#include <string>

class Student
{
   private:
    std::string m_name;
    int m_age;

   public:
    void setAge(const int& a)
    {
        if (a < 0)
        {
            throw std::invalid_argument("Age can't be less than 0");
        }
        m_age = a;
    }
    int getAge() const
    {
        return m_age;
    }
    void setName(const std::string& n)
    {
        if (n.empty())
        {
            throw std::invalid_argument("Name cannot be empty");
        }
        m_name = n;
    }
    std::string getName() const
    {
        return m_name;
    }
};

int main()
{
    Student s1;
    std::string new_name{};
    int new_age{};

    while (true)
    {
        try
        {
            std::cout << "Enter a new name: ";
            std::cin >> new_name;
            s1.setName(new_name);
            break;
        }
        catch (const std::invalid_argument& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    while (true)
    {
        try
        {
            std::cout << "Enter a new age: ";
            std::cin >> new_age;
            s1.setAge(new_age);
            break;
        }
        catch (const std::invalid_argument& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << "Student's name: " << s1.getName() << std::endl;
    std::cout << "Student's age: " << s1.getAge() << std::endl;

    return 0;
}