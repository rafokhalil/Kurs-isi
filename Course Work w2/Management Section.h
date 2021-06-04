#include "ExceptionClass.h"
#include <Windows.h>
#include <conio.h>
#include "Meal Functions.h"
#include "Kitchen.h"
using namespace std;
void selectionMenu();
void startProgramWithTableNo();
class Admin {
	const string username1 = "rafokhalil";
	const string password1 = "rafael123";
	string username;
	string password;
	int adminMenuOpt;
	static int tryCount;
public:
	Admin() {}
	void admin() {
		system("cls");
		cout << "Loading...";
		Sleep(2000);
		system("cls");
		cout << "Username:"; cin >> username;
		if (username != username1) {
			tryCount++;
			if (tryCount == 5) {
				writeToCriticalNotificationLog("Error 102", __DATE__, __TIME__);
				throw HackAttempException("Error 102", __FILE__, __LINE__, __DATE__, __TIME__);
			}
		}
		if (username != username1) {
			system("cls");
			cout << "Press any key to continue. . .\n";
			_getch();
			system("cls");
			return startProgramWithTableNo();
		}
		if (username == username1) {
			cout << "Password : "; cin >> password;
			if (password == password1) {
				system("cls");
				cout << "Welcome Rafael!\n";
				cout << "Stock : 1\n";
				cout << "Kitchen : 2\n";
				cin >> adminMenuOpt;
				if (adminMenuOpt == 1) {
					system("cls");
					Stock stock;
					stock.stock();
				}
				if (adminMenuOpt == 2) {
					system("cls");

					Kitchen kitchen;
					kitchen.kitchenFunc();
				}
				if (adminMenuOpt > 2 || adminMenuOpt < 0) {
					writeErrorToFile("Error 102", __FILE__, __LINE__, __DATE__, __TIME__);
					throw InvalidArgumentException("Error 102", __FILE__, __LINE__, __DATE__, __TIME__);
				}
			}
		}

	}
};
Stock stock;
int Admin::tryCount = 0;
class Restaurant {
	string name;
	string address;
	string city;
	double budget;
	Admin admin;
public:
	Restaurant():name(""),address(""),city(""),budget(0){}
	Restaurant(const string& name,const string& address,const string& city) {
		setName(name);
		setAddress(address);
		setCity(city);
	}
	void setName(const string& name) {
		if (!name.empty()) {
			this->name = name;
		}
	}
	string getName() {
		return name;
	}
	void setAddress(const string& address) {
		if (!address.empty()) {
			this->address = address;
		}
	}
	string getAddress() {
		return address;
	}
	void setCity(const string& city) {
		if (!city.empty()) {
			this->city = city;
		}
	}
	string getCity() {
		return city;
	}
	void printInfoAboutRestaurant() {
		cout << "Restaurant Name : " << getName() << endl;
		cout << "Restaurant Address : " << getAddress() << endl;
		cout << "City : " << getCity() << endl;
		cout << "Online Service :" << " Available" << endl;
		cout << "Delivery Service :" << " 7/24 Available" << endl;
	}
};
Restaurant restaurant("SAFA", "Sahil metrosu", "Baku");
void startProgramWithTableNo() {
	 system("start 50cent.mp3");
	Admin adminObj;
	string tableNo;
	cout << "\t\t\t\t" << char(218); for (int i = 0; i < 40; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t" << char(179) << "  Welcome to " << restaurant.getName() << " Restourant  " << char(179) << endl;
	cout << "\t\t\t\t" << char(192); for (int i = 0; i < 40; i++)cout << char(196); cout << char(217) << endl;
	cout << "\n\t\t\t\t\t     Table Number : "; std::cin >> tableNo;
	static Table tableNumber(tableNo);
	if (tableNo == "10" || tableNo == "9" || tableNo == "8" || tableNo == "7" || tableNo == "6" || tableNo == "5" || tableNo == "4" || tableNo == "3" || tableNo == "2" || tableNo == "1" && tableNo != "0") {
		writeToProgramLog("Customer logged in", __DATE__, __TIME__);
		selectionMenu();
	}
	if (tableNo != "10" && tableNo != "9" && tableNo != "8" && tableNo != "7" && tableNo != "6" && tableNo != "5" && tableNo != "4" && tableNo != "3" && tableNo != "2" && tableNo != "1" && tableNo != "0") {
		writeErrorToFile("Error 100", __FILE__, __LINE__, __DATE__, __TIME__);
		throw InvalidArgumentException("Error 100", __FILE__, __LINE__, __DATE__, __TIME__);


	}
	if (tableNo == "0") {
		writeToProgramLog("Admin logged in", __DATE__, __TIME__);
		adminObj.admin();
	}

}
class StartSystem {
public:
	void startSystem() {
		try {
			startProgramWithTableNo();
		}
		catch (const Exception& ex) {
			ex.printMessage();
		}
	}
};
void client() {
	system("cls");
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "       1.Starters        " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl; 
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "        2.Salatlar         " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "        3.Pulovlar         " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "        4.Xemir xorekleri      " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "        5.Et yemekleri      " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "        6.Kabablar         " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "        7.Suplar          " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "        8.Soslar         " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "       9.Desertler        " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "       10.Ickiler         " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "     Previous Menu : 0     " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;

	int opt;
	cout << "\n\t\t\t\t\t      Your Choice : "; cin >> opt;
	switch (opt) {
	case 0: {
		system("cls");
		selectionMenu();
		break;
	}
	case 1: {
		startersFunc();
		break;
	}
	case 2: {
		saladFunc();
		break;
	}
	case 3: {
		pilafFunc();
		break;
	}
	case 4: {
		doughMealsFunc();
		break;
	}
	case 5: {
		meatMealsFunc();
		break;
	}
	case 6: {
		kebabsFunc();
		break;
	}
	case 7: {
		soupFunc();
		break;
	}
	case 8: {
		sauceFunc();
		break;
	}
	case 9: {
		dessertsFunc();
		break;
	}
	case 10: {
		drinksFunc();
		break;
	}
		   break;
	}
	if (opt > 10 || opt <= 0) {
		writeErrorToFile("Error 103", __FILE__, __LINE__, __DATE__, __TIME__);
		throw InvalidArgumentException("Error 103", __FILE__, __LINE__, __DATE__, __TIME__);
	}
}
void selectionMenu() {
		cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
		cout << "\t\t\t\t\t" << char(179) << "       Main Menu : 0        " << char(179) << endl;
		cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
		cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
		cout << "\t\t\t\t\t" << char(179) << "       Meal List : 1       " << char(179) << endl;
		cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
		cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
		cout << "\t\t\t\t\t" << char(179) << "      Search Meal : 2      " << char(179) << endl;
		cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
		cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
		cout << "\t\t\t\t\t" << char(179) << " Info About Restaurant : 3 " << char(179) << endl;
		cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
		int option;
		cout << "\n\t\t\t\t\t      Your Choice : "; cin >> option;
		if (option == 0) {
			Admin admin;
			admin.admin();
		}
		if (option == 1) {
			client();
		}
		if (option == 2) {
			searchMeal();
		}
		if (option == 3) {
			restaurant.printInfoAboutRestaurant();
			Sleep(5000);
			system("cls");
			selectionMenu();
		}
		else {
			throw InvalidArgumentException("Error 103", __FILE__, __LINE__, __DATE__, __TIME__);
			writeToCriticalNotificationLog("Wrong Menu Opt Selected", __DATE__, __TIME__);
		}
	}
