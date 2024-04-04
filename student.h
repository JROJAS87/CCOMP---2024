#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    explicit Student(std::string n, int a) : name(n), age(a) {}

    void setName(std::string StudentName) {
        name = StudentName;
    }

    std::string getName() const {
        return name;
    }

    void setAge(int StudentAge) {
        age = StudentAge;
    }

    int getAge() const {
        return age;
    }

    bool isOlder() const {
        return age >= 18;
    }

private:
    std::string name;
    int age;
};

#endif
