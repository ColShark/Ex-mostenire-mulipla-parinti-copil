#include <iostream>
#include <string>

class Mama
{
public:
	std::string culoareaOchilor = "caprui";
};

class Tata
{
public:
	std::string culoareaParului = "brunet";
};

class Copil : public Mama, public Tata
{
public:
	int inaltime = 165;
};

int main()
{
	Copil c;
	std::cout << "Copil " << std::endl;
	std::cout << std::endl;
	std::cout << "Proprietati si functionalitati mostenite: " << std::endl;
	std::cout << "- culoarea ochilor: " << c.culoareaOchilor << std::endl;
	std::cout << "- culoarea parului: " << c.culoareaParului << std::endl;
	std::cout << std::endl;
	std::cout << "Proprietati si functionalitati particulare: " << std::endl;
	std::cout << "- ianltime (cm): " << std::endl;
	
	system("pause");
}