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

    std::cout << "\n--- Login ---\n";

    std::string inputUser, inputPass;
    int attempts = 0;
    const int maxAttempts = 3;
    while (attempts < maxAttempts)
    {
        std::string inputUser, inputPass;
        std::cout << "\nUsername: ";
        std::cin >> inputUser;
        std::cout << "Password: ";
        std::cin >> inputPass;

        if (inputUser == currentStudent.username && inputPass == currentStudent.password)
        {
            loggedIn = true;
            std::cout << "\nLogin successful. Welcome, " << currentStudent.fullName << "!\n";
            return;
        }
        attempts++;
        std::cout << "Incorrect username or password. Attempts left: " << (maxAttempts - attempts) << "\n";
    }
    std::cout << "\nToo many failed attempts. Try again later.\n";
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