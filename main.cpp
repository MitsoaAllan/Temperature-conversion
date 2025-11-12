#include <iostream>

const double fahToCel = 5/9;
const double celToFah = 9/5;
const int fahOffset = 32;

std::string askTemperatureAndShowIt(int choice);
int askChoice(std::string message);
void verifyChoice(int choice,std::string message);

int main(){
    std::string messageChoice = "Enter your choice (1-3):";
    int choice;
    double temperatureValue;

    std::cout << "1. Celsius to Fahreneit" << std::endl;
    std::cout << "2. Fahreneit to Celsius" << std::endl;
    std::cout << "3. Exit" << std::endl;

    choice = askChoice(messageChoice);
    
    while (choice < 1 || choice > 3){
        choice = askChoice(messageChoice);
    }
    std::cout << askTemperatureAndShowIt(choice) << std::endl;

    return 0;
}

int askChoice(std::string message){
    int choice;
    std::cout << message;
    std::cin >> choice;
    return choice;
}

std::string askTemperatureAndShowIt(int choice){
    double result;
    double temperatureValue;
    switch (choice)
    {
    case 1:
        std::cout << "Enter temperature in Celsius :";
        std::cin >> temperatureValue;
        result = (temperatureValue * celToFah) + fahOffset;
        return std::to_string(temperatureValue)+" C = "+std::to_string(result)+" F";
        break;

    case 2:
        std::cout << "Enter temperature in Fahreneit :";
        std::cin >> temperatureValue;
        result = (temperatureValue - fahOffset) * fahToCel ;
        return std::to_string(temperatureValue)+" F = "+std::to_string(result)+" C";
        break;
    
    case 3:
        std::cout << "Exiting the program";
        return "";
        break;
    }
}

