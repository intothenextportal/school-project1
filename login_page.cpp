#include <iostream>
#include <string>

int main()
{
    std::string username;
    std::string password;

    std::string admin = "admin";
    std::string adminPassw = "Pa$$w0rd!";

    char selection = '0';
    std::string usr, passw;

    do {
        std::cout << "Please enter your selection" << std::endl;
        std::cout << "1-Login\n" << "2-Register\n" << "q-Quit" << std::endl;
        std::cin >> selection;

        switch (selection) {
            case '1':
                std::cout << "Enter username: ";
                std::cin >> usr;
                std::cout << "Enter password: ";
                std::cin >> passw;

                if (usr == username && passw == password || usr == admin && passw == adminPassw) {
                    std::cout << "Welcome back, " << usr << "!" << std::endl;
                } else {
                    std::cout << "Incorrect username or password. Please try again." << std::endl;
                }
                break;

            case '2':
                std::cout << "Enter your desired username: ";
                std::cin >> usr;
                std::cout << "Enter your desired password (must be at least 8 characters long and"
                 << "The password should look something like this: TestPassword123!" ): ";
                std::cin >> passw;

                if (passw.length() <= 8) {
                    std::cout << "Password must be at least 8 characters long." << std::endl;
                } else {
                    username = usr;
                    password = passw;
                    std::cout << "Registration successful!" << std::endl;
                }
                break;

            case 'q':
            case 'Q':
                std::cout << "Quitting program..." << std::endl;
                break;

            default:
                std::cout << "Invalid selection. Please try again." << std::endl;
                break;
        }

    } while (selection != 'q' && selection != 'Q');

    return 0;
}
