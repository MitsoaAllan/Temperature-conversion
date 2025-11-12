#include <iostream>

const double fahToCel = 5/9;
const double celToFah = 9/5;
const int fahOffset = 32;

int main(){
    std::string messageChoice = "Enter your choice (1-3):";
    int choice;
    double temperatureValue, result;

    while (true){
        std::cout << "1. Celsius to Fahreneit" << std::endl;
        std::cout << "2. Fahreneit to Celsius" << std::endl;
        std::cout << "3. Exit" << std::endl;

        std::cout << messageChoice;
        std::cin >> choice;

        if (choice == 3){
            std::cout << "Exiting the program\n";
            break;
        }else if(choice == 2){
            std::cout << "Enter temperature in Fahreneit :";
            std::cin >> temperatureValue;
            result = (temperatureValue - fahOffset) * fahToCel;
            std::cout << std::to_string(temperatureValue)+" C = "+std::to_string(result)+" F\n\n";
        }else if(choice == 1){
            std::cout << "Enter temperature in Celsius :";
            std::cin >> temperatureValue;
            result = (temperatureValue * celToFah) + fahOffset;
            std::cout << std::to_string(temperatureValue)+" C = "+std::to_string(result)+" F\n\n";
        }else{
            std::cout << "Try Again\n";
        }
    }
    
}

