#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

// __attribute__((destructor))
// static void destrucor() {
// 	system("leaks -q ex03");
// }

int main()
{
	{
		std::cout << "-------------subjectTest------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		AMateria* tmp1;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp1 = src->createMateria("cure");
		me->equip(tmp1);
		me->unequip(1);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(5, *bob);
		delete tmp;
		delete tmp1;
		delete bob;
		delete me;
		delete src;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		delete src;
	}
}