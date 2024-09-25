#include <iostream>
#include "user.h"

void signUp()
{
    std::string username;
    std::string password;

    User newUser;

    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;

    newUser.signUpUser(newUser, username, password);



}
void signIn();

int main()
{
   // int sel{};
  //  std::cin >> sel;

    //if (sel == 1)
        signUp();
    //else if (sel == 2)
        //signIn();
    
}