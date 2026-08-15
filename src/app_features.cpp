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
    if (profileExists)
    {
        std::cout << "\nA profile already exists. Delete it first to create a new one.\n";
        return;
    }

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

    profileExists = true;
    std::cout << "\nProfile created successfully.\n";
}

void deleteProfile()
{
    // TODO: Implement
}

void viewProfile()
{
    if (!profileExists)
    {
        std::cout << "\nNo profile exists yet.\n";
        return;
    }
    std::cout << "\n--- Profile ---\n";
    std::cout << "Username: " << currentStudent.username << "\n";
    std::cout << "Name:     " << currentStudent.fullName << "\n";
    std::cout << "Course:   " << currentStudent.course << "\n";
    std::cout << "Year:     " << currentStudent.year << "\n";
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