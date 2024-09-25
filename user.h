#pragma once

#include <string>
#include <iostream>


class User
{
public:
    User();

    void signUpUser(User& user, std::string const& username, std::string const& password);
    void signInUser();

private: //private functions
    void setUsername(std::string const& usename);
    void setPassword(std::string const& password);

    bool checkUsername(std::string const& inputUsername);
    bool checkPassword(std::string const& inputPassword);

private: //private variables
    std::string username;
    std::string password;
    
};