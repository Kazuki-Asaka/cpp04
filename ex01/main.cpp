#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
// #include "WrongCat.hpp"
#include "Brain.hpp"

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
	{
		std::cout << "------------CatTest------------" << std::endl;
		Cat		cat;
		const Animal *cat1 = new Cat();
		// const Animal *cat2 = new Cat(static_cast<const Cat&>(*cat1));
		const Animal *cat2 = new Cat(cat);
		
		std::cout << "cat : type is " << cat.getType() << std::endl;
		std::cout << "cat1 : type is " << cat1->getType() << std::endl;
		std::cout << "cat2 : type is " << cat2->getType() << std::endl;
		cat.makeSound();
		cat1->makeSound();
		cat2->makeSound();
		delete cat1;
		delete cat2;
	}
	{
		std::cout << "------------DogTest------------" << std::endl;
		Dog	dog;
		const Animal *dog1 = new Dog();
		const Animal *dog2 = new Dog(dog);

		std::cout << "dog type is " << dog.getType() << std::endl;
		std::cout << "dog1 type is " << dog1->getType() << std::endl;
		std::cout << "dog2 type is " << dog2->getType() << std::endl;

		dog.makeSound();
		dog1->makeSound();
		dog2->makeSound();
		delete dog1;
		delete dog2;
	}
	// {
	// 	std::cout << "------------WrongAnimalTest------------" << std::endl;
	// 	WrongAnimal wrongAnimal;
	// 	const WrongAnimal *meta = new WrongAnimal();
	// 	const WrongAnimal *meta1 = new WrongAnimal(wrongAnimal);

	// 	std::cout << "WrongAnimal type is " << wrongAnimal.getType() << std::endl;
	// 	std::cout << "meta type is " << meta->getType() << std::endl;
	// 	std::cout << "meta1 type is " << meta1->getType() << std::endl;

	// 	wrongAnimal.makeSound();
	// 	meta ->makeSound();
	// 	meta1->makeSound();
	// 	delete meta;
	// 	delete meta1;
	// }
	// {
	// 	std::cout << "------------WrongCatTest------------" << std::endl;
	// 	WrongCat		wcat;
	// 	const WrongAnimal *wcat1 = new WrongCat();
	// 	// const Animal *cat2 = new Cat(static_cast<const Cat&>(*cat1));
	// 	const WrongAnimal *wcat2 = new WrongCat(wcat);
		
	// 	std::cout << "wcat : type is " << wcat.getType() << std::endl;
	// 	std::cout << "wcat1 : type is " << wcat1->getType() << std::endl;
	// 	std::cout << "wcat2 : type is " << wcat2->getType() << std::endl;
	// 	wcat.makeSound();
	// 	wcat1->makeSound();
	// 	wcat2->makeSound();
	// 	delete wcat1;
	// 	delete wcat2;
	// }
}