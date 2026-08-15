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
    // TODO: Implement
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
    if (!loggedIn)
    {
        std::cout << "\nPlease log in first to access the dashboard.\n";
        return;
    }

    std::cout << "\n===== Dashboard =====\n";
    std::cout << "Welcome!\n";

    std::cout << "Welcome, " << currentStudent.fullName << "!\n";
    std::cout << "Course: " << currentStudent.course << " | Year: " << currentStudent.year << "\n";
}

void viewSettings()
{
    // TODO: Implement
}

void updateSettings()
{
    // TODO: Implement
}