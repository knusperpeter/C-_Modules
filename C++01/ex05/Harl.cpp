#include "Harl.hpp"

Harl::Harl(){
	complaints[0] = &Harl::debug;
	complaints[1] = &Harl::info;
	complaints[2] = &Harl::warning;
	complaints[3] = &Harl::error;
}

void Harl::complain(std::string level){
	std::string levels [] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		if (level == levels[i]){
			(this->*complaints[i])();
			return;
		}
	}
	std::cout << "Unknown complaint level: " << level << std::endl;
}

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}