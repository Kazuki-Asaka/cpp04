#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	{
		std::cout << "------------AnimalTest------------" << std::endl;
		Animal	animal;
		const Animal *meta = new Animal();
		const Animal *meta1 = new Animal(*meta);

		std::cout << "aniamal : type is " <<animal.getType() << std::endl;
		std::cout << "meta : type is " << meta->getType() << std::endl;
		std::cout << "meta1 : type is " << meta1->getType() << std::endl;
		std::cout << "aniamal address : " << &animal << std::endl;
		std::cout << "meta address : " << meta << std::endl;
		std::cout << "meta1 address : " << meta1 << std::endl;
		animal.makeSound();
		meta->makeSound();
		meta1->makeSound();
		delete meta;
		delete meta1;
	}
	// {
	// 	std::cout << "------------CatTest------------" << std::endl;
	// 	Cat		cat;

	// 	std::cout << "type is " << cat.getType() << std::endl;
	// 	cat.makeSound();

	// }
	// {
	// 	std::cout << "------------DogTest------------" << std::endl;
	// 	Dog	dog;

	// 	std::cout << "type is " << dog.getType() << std::endl;
	// 	dog.makeSound();
	// }
	// {
	// 	std::cout << "------------newTest------------" << std::endl;
	// 	Animal *dog = new Dog();
	// 	dog -> makeSound();
	// 	delete dog; 
	// }
}