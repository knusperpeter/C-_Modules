#include "Dog.hpp"

Dog::Dog()
: Animal("Dog"){
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& other)
: Animal(other){
	*this = other;
}

Dog& Dog::operator=(const Dog& other){
	if (this == &other)
		return *this;

	Animal::operator=(other);
	this->type = other.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}

const std::string& Dog::getType() const {
	return (this->type);
}