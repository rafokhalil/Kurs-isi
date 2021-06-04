#include <iostream>
#include <fstream>
using namespace std;
class Kitchen {
	Stock stock;
public:
	Kitchen() {}
	string showOrdersFromTableNo(const string& tableNumber) {
		string defaultWord = "ordersFromTableNo";
		string txt = ".txt";
		string filename = defaultWord + tableNumber + txt;
		ifstream fin(filename, ios::in);
		string result = "";
		if (fin.is_open()) {
			while (!fin.eof())
			{
				string value;
				fin >> value;
				result.append(value + " ");
			}
		}
		else {
			throw string("This file : " + filename + " does not exists");
		}
		return result;
	}
	void showAllTables() {
		std::cout << showOrdersFromTableNo("1");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("2");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("3");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("4");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("5");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("6");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("7");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("8");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("9");
		std::cout << "\n";
		std::cout << showOrdersFromTableNo("10");
		std::cout << "\n";
	}
	void showStock() {
		stock.showStock();
	}
	void showAllMeals() {
		std::cout << capitalSalad->getName();
		std::cout << "\n";
		std::cout << chickenSalad->getName();
		std::cout << "\n";
		std::cout << capitalSalad->getName();
		std::cout << "\n";
		std::cout << kingSalad->getName();
		std::cout << "\n";
		std::cout << pomegranateSauce->getName();
		std::cout << "\n";
		std::cout << ketchupSauce->getName();
		std::cout << "\n";
		std::cout << mayonnaiseSauce->getName();
		std::cout << "\n";
		std::cout << kingPilaf->getName();
		std::cout << "\n";
		std::cout << sabziPulov->getName();
		std::cout << "\n";
		std::cout << pumpkinPilaf->getName();
		std::cout << "\n";
		std::cout << sweetPilaf->getName();
		std::cout << "\n";
		std::cout << dushbara->getName();
		std::cout << "\n";
		std::cout << xangal->getName();
		std::cout << "\n";
		std::cout << gurza->getName();
		std::cout << "\n";
		std::cout << yarpaqDolmasi->getName();
		std::cout << "\n";
		std::cout << uchBaciDolmasi->getName();
		std::cout << "\n";
		std::cout << langet->getName();
		std::cout << "\n";
		std::cout << broiledLamb->getName();
		std::cout << "\n";
		std::cout << sturgeonKebab->getName();
		std::cout << "\n";
		std::cout << belugaKebab->getName();
		std::cout << "\n";
		std::cout << salmonKebab->getName();
		std::cout << "\n";
		std::cout << pikeperchKebab->getName();
		std::cout << "\n";
		std::cout << luleKebab->getName();
		std::cout << "\n";
		std::cout << tikeKebab->getName();
		std::cout << "\n";
		std::cout << antrikot->getName();
		std::cout << "\n";
		std::cout << blackCaviar->getName();
		std::cout << "\n";
		std::cout << redCaviar->getName();
		std::cout << "\n";
		std::cout << meatQutab->getName();
		std::cout << "\n";
		std::cout << vealTongue->getName();
		std::cout << "\n";
		std::cout << greenQutab->getName();
		std::cout << "\n";
		std::cout << pumpkinQutab->getName();
		std::cout << "\n";
		std::cout << cheeseQutab->getName();
		std::cout << "\n";
		std::cout << blinchik->getName();
		std::cout << "\n";
		std::cout << pawnWithTartarSauce->getName();
		std::cout << "\n";
		std::cout << pawnWithChilliSauce->getName();
		std::cout << "\n";
		std::cout << vegetableAssort->getName();
		std::cout << "\n";
		std::cout << merci->getName();
		std::cout << "\n";
		std::cout << noodle->getName();
		std::cout << "\n";
		std::cout << dovga->getName();
		std::cout << "\n";
		std::cout << chickenSoup->getName();
		std::cout << "\n";
		std::cout << tiramisu->getName();
		std::cout << "\n";
		std::cout << cheeseCake->getName();
		std::cout << "\n";
		std::cout << hotChocolateCake->getName();
		std::cout << "\n";
		std::cout << fanta05l->getName();
		std::cout << "\n";
		std::cout << fanta1l->getName();
		std::cout << "\n";
		std::cout << cocaCola05l->getName();
		std::cout << "\n";
		std::cout << cocaCola1l->getName();
		std::cout << "\n";
		std::cout << sprite05l->getName();
		std::cout << "\n";
		std::cout << sprite1l->getName();
		std::cout << "\n";
		std::cout << orangeJuice->getName();
		std::cout << "\n";
		std::cout << mixedJuice->getName();
		std::cout << "\n";
	}
	void kitchenFunc() {
		int opt;
		cout << "Return previous menu : 0\n";
		cout << "Show All Orders : 1 \n";
		cout << "Show Stock : 2 \n";
		cout << "Show All Meals : 3 \n";
		cout << "Your Choice : "; cin >> opt;
		if (opt == 0) {
			startProgramWithTableNo();
		}
		if (opt == 1) {
			showAllTables();
		}
		if (opt == 2) {
			showStock();
	}
		if (opt == 3) {
			showAllMeals();
		}
	}
};
