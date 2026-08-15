#include "app_features.h"
#include <iostream>

/*
Feature options
-> login, profile, dashboard, settings.
-> each feature has mulitple options.
-> palceholders for current design in place
*/

// Student class is the primary struct to perform all operations.
class Student
{
public:
    std::string username;
    std::string password;
    std::string fullName;
    std::string course;
    int year = 0;
    bool notificationsEnabled = true;

    bool isEmpty() const
    {
        return username.empty();
    }
};

Student currentStudent;
bool profileExists = false;
bool loggedIn = false;

void login()
{
    // TODO: Implement
}

void createProfile()
{
    std::cout << "\n--- Create Profile ---\n";
    std::cout << "Choose a username: ";
    std::cin >> currentStudent.username;
    std::cout << "Choose a password: ";
    std::cin >> currentStudent.password;

    std::cin.ignore();
    std::cout << "Full name: ";
    std::getline(std::cin, currentStudent.fullName);
    std::cout << "Course: ";
    std::getline(std::cin, currentStudent.course);
    std::cout << "Year: ";
    std::cin >> currentStudent.year;
}

void deleteProfile()
{
    // TODO: Implement
}

void viewProfile()
{
    // TODO: Implement
}

void dashboard()
{
    // TODO: Implement
}

void viewSettings()
{
    // TODO: Implement
}

void updateSettings()
{
    // TODO: Implement
}