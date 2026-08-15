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
    // gaurdrail non created profile
    if (!profileExists)
    {
        std::cout << "\nNo profile found. Please create a profile first.\n";
        return;
    }

    std::string inputUser, inputPass;
    std::cout << "\nUsername: ";
    std::cin >> inputUser;
    std::cout << "Password: ";
    std::cin >> inputPass;
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