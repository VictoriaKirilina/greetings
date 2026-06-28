#include <iostream>
#include <string>  
int main() {
    std::string firstName;
    std::string lastName;
    
   
    std::cout << "Введите имя: ";
    std::cin >> firstName;
    
   
    std::cout << "Введите фамилию: ";
    std::cin >> lastName;
    
    
    std::string greeting = "Здравствуйте, " + firstName + " " + lastName + "!";
    
   
    std::cout << greeting << std::endl;
    
    return 0;
}