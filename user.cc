#include "user.h"


User::User()
    : username{}, password{}
{}




void User::signUpUser(User& user, std::string const& username, std::string const& password)
{
    bool exists{checkUsername(username)};

    if (exists)
    {
        user.setUsername(username);
        user.setPassword(password);
    }
    else
        std::cout << "FEL" << std::endl;
}

void User::signInUser()
{}




void User::setUsername(std::string const& username)
{}

void User::setPassword(std::string const& password)
{}

bool User::checkUsername(std::string const& inputUsername)
{
    return inputUsername == "Hugo";
}

bool User::checkPassword(std::string const& inputPassword)
{}