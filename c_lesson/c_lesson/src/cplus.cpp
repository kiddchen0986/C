#include"../include/cplus.h"
#include<iostream>
using namespace std;

#if lesson_2_14_0

class Student {
public:
    Student(char *name, int age, float score);
    void show();

    char *getname() const;
    int getage() const;
    float getscore() const;
private:
    char *m_name;
    int m_age;
    float m_score;
};
Student::Student(char *name, int age, float score) :m_name(name), m_age(age), m_score(score) {}
void Student::show() 
{
    cout << m_name << "'s age :" << m_age << ", score : " << m_score << endl;
}

char * Student::getname() const {
    return m_name;
}
int Student::getage() const {
    return m_age;
}
float Student::getscore() const {
    return m_score;
}
int main()
{
    Student stu1("ki.c", 22, 99.9);
    stu1.show();
    return 0;
}

#endif