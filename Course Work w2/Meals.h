#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void client();
namespace Ingredientss {
    class Ingredient {
    protected:
        string name;
        double kkal;
    public:
        Ingredient() :name(""),kkal(0) {}
        Ingredient(const string& name) {
            setName(name);
        }
        Ingredient(const string& name,const double& kkal):Ingredient(name) {
            setKkal(kkal);
        }
        void setKkal(const double& kkal) {
            if (kkal != 0) {
                this->kkal = kkal;
            }
        }
        double getKkal()const {
            return kkal;
        }
        void setName(const string& name) {
            if (!name.empty()) {
                this->name = name;
            }
        }
        string getName() {
            return name;
        }    
        void show() {
            cout << "Ingredient name : " << getName() << endl;
        }
    };
    class Ketchup : public Ingredient {
    public:
        Ketchup() {
            setName("Ketchup");
            setKkal(100);
        }

    };
    class Xardal : public Ingredient {
    public:
        Xardal() {
            setName("Xardal");
            setKkal(100);
        }

    };
    class Oil : public Ingredient {
    public:
        Oil() {
            setName("Oil");
            setKkal(120);
        }
    };
    class Mayonnaise : public Ingredient {
    public:
        Mayonnaise() {
            setName("Mayonnaise");
            setKkal(90);
        }
    
    };
    class Tomato : public Ingredient {
    public:
        Tomato() {
            setName("Tomato");
            setKkal(20);
        }

    };
    class Cucumber : public Ingredient {
    public:
        Cucumber() {
            setName("Cucumber");
            setKkal(30);
        }

    };
    class Onion : public Ingredient {
    public:
        Onion() {
            setName("Onion");
            setKkal(40);
        }

    };
    class Garlic : public Ingredient {
    public:
        Garlic() {
            setName("Garlic");
            setKkal(0.5);
        }

    };
    class Mushroom : public Ingredient {
    public:
        Mushroom() {
            setName("Mushroom");
            setKkal(20);
        }

    };
    class Cheese : public Ingredient {
    public:
        Cheese(const string& name) :Ingredient(name,kkal) {
            setKkal(120);
        }

    };
    class Meat : public Ingredient {
    public:
        Meat(const string& name) :Ingredient(name, kkal) {
            setKkal(2.26);
        }
    };
    class Lettuce : public Ingredient {
    public:
        Lettuce() {
            setName("Lettuce");
            setKkal(16);
        }

    };
    class Egg : public Ingredient {
    public:
        Egg() {
            setName("Egg");
            setKkal(72);
        }
    };
    class Eggplant : public Ingredient {
    public:
        Eggplant() {
            setName("badimcan");
            setKkal(200);
        }
    };
    class Potato : public Ingredient {
    public:
        Potato() {
            setName("Potato");
            setKkal(161);
        }

    };
    class Carrot : public Ingredient {
    public:
        Carrot() {
            setName("Carrot");
            setKkal(16);
        }

    };
    class Pear : public Ingredient {
    public:
        Pear() {
            setName("Pear");
            setKkal(16);
        }
    };
    class Dill : public Ingredient {
    public:
        Dill() {
            setName("Dill");
            setKkal(10);
        }

    };
    class Pepper : public Ingredient {
    public:
        Pepper() {
            setName("Pepper");
            setKkal(30);
        }
    };
    class Beetroot : public Ingredient {
    public:
        Beetroot() {
            setName("Beetroot");
            setKkal(22);
        }

    };
    class Raisin : public Ingredient {
    public:
        Raisin() {
            setName("Raisin");
            setKkal(1.3);
        }
    };
    class Walnut : public Ingredient {
    public:
        Walnut() {
            setName("Walnut");
            setKkal(15);
        }
    };
    class Sauce : public Ingredient {
    public:
        Sauce(const string& name) :Ingredient(name,kkal) {
            setKkal(30);
        }
    };
    class Rice : public Ingredient {
    public:
        Rice() {
            setName("Rice");
            setKkal(205);
        }
    };
    class Lavash : public Ingredient {
    public:
        Lavash() {
            setName("Lavash");
            setKkal(230);
        }
    };
    class Olive : public Ingredient {
    public:
        Olive() {
            setName("Olive");
            setKkal(4);
        }
    };
    class Dough : public Ingredient {
    public:
        Dough() {
            setName("Dough");
            setKkal(5);
        }
    };
    class Pumpkin : public Ingredient {
    public:
        Pumpkin() {
            setName("Pumpkin");
            setKkal(50);
        }
    };
    class Chestnut : public Ingredient {
    public:
        Chestnut() {
            setName("Chestnut");
            setKkal(2);
        }
    };
    class DriedFruit : public Ingredient {
    public:
        DriedFruit(const string& name):Ingredient(name){}
        DriedFruit(const string& name,const double kkal) :Ingredient(name,kkal) {}

    };
    class ChickenFillet : public Ingredient {
    public:
        ChickenFillet() {
            setName("ChickenFillet");
            setKkal(162);
        }
    };
    class Greens : public Ingredient {
    public:
        Greens(const string& name) :Ingredient(name) {
            setKkal(20);
        }

    };
    class Mint : public Ingredient {
    public:
        Mint() {
            setName("Mint");
            setKkal(2);
        }
    };
    class Yougurt : public Ingredient {
    public:
        Yougurt() {
            setName("Yougurt");
            setKkal(0.63);
        }
    };
    class Lentil : public Ingredient {
    public:
        Lentil() {
            setName("Lentil");
            setKkal(1.6);
        }
    };
    class Milk : public Ingredient {
    public:
        Milk () {
            setName("Milk");
            setKkal(125);
        }
    };
    class Pomegranate : public Ingredient {
    public:
        Pomegranate() {
            setName("Pomegranate");
            setKkal(2.34);
        }
    };
    class Cream : public Ingredient {
    public:
        Cream() {
            setName("Cream");
            setKkal(101);
        }
    };//qaymaq
    class Parsley : public Ingredient {
    public:
        Parsley() {
            setName("Parsley");
            setKkal(4);
        }
    };//ceferi
    class Flour : public Ingredient {
    public:
        Flour() {
            setName("Flour");
            setKkal(455);
        }
    };
    class Chilli : public Ingredient {
    public:
        Chilli() {
            setName("Chilli");
            setKkal(1.2);
        }
    };
    struct RecieptItem {
        Ingredient* ingredient;
        int amount;
        double gr;
        RecieptItem() :amount(0),gr(0) {}
        RecieptItem(const string& name, const int& amount,const double& gr) {
            ingredient->setName(name);
            setAmount(amount);
            setGram(gr);
        }
        void setAmount(const int& amount) {
            if (amount > -1) {
                this->amount = amount;
            }
        }
        void setGram(const double& gr) {
            if (gr > -1) {
                this->gr = gr;
            }
        }
        int getAmount() {
            return amount;
        }
        double getGram() {
            return gr;
        }
        void show() {
            ingredient->show();
            if (amount != 0) {
                cout << "Amount:" << getAmount() << endl;
            }
            if (amount == 0) {
                cout << "Gram:" << getGram() << endl;
            }
        }
        ~RecieptItem()
        {
            delete ingredient;
        }
    };
    Ingredientss::Beetroot* beetroot = new Beetroot;
    Ingredientss::Carrot* carrot = new Carrot;
    Ingredientss::Cheese* cheese = new Cheese("Cheese");
    Ingredientss::Chestnut* chestnut = new Chestnut;
    Ingredientss::ChickenFillet* chickenFillet = new ChickenFillet;
    Ingredientss::Chilli* chilli = new Chilli;
    Ingredientss::Cream* cream = new Cream;
    Ingredientss::Cucumber* cucumber = new Cucumber;
    Ingredientss::Dill* dill = new Dill;
    Ingredientss::DriedFruit* driedFruit = new DriedFruit("Dried Fruit");
    Ingredientss::Egg* egg = new Egg;
    Ingredientss::Eggplant* badimcan = new Eggplant;
    Ingredientss::Flour* flour = new Flour;
    Ingredientss::Garlic* garlic = new Garlic;
    Ingredientss::Greens* greens = new Greens("Greens");
    Ingredientss::Ketchup* ketchup = new Ketchup;
    Ingredientss::Lavash* lavash = new Lavash;
    Ingredientss::Lentil* lentil = new Lentil;
    Ingredientss::Lettuce* lettuce = new Lettuce;
    Ingredientss::Milk* milk = new Milk;
    Ingredientss::Meat* meat = new Meat("Meat");
    Ingredientss::Mint* mint = new Mint;
    Ingredientss::Mushroom* mushroom = new Mushroom;
    Ingredientss::Xardal* mustard = new Xardal;
    Ingredientss::Oil* oil = new Oil;
    Ingredientss::Olive* olive = new Olive;
    Ingredientss::Onion* onion = new Onion;
    Ingredientss::Parsley* parsley = new Parsley;
    Ingredientss::Pear* pea = new Pear;
    Ingredientss::Pepper* pepper = new Pepper;
    Ingredientss::Pomegranate* pomegranate = new Pomegranate;
    Ingredientss::Potato* potato = new Potato;
    Ingredientss::Pumpkin* pumpkin = new Pumpkin;
    Ingredientss::Raisin* raisin = new Raisin;
    Ingredientss::Rice* rice = new Rice;
    Ingredientss::Yougurt* yougurt = new Yougurt;
    Ingredientss::Sauce* sauce = new Sauce("Sauce");
    Ingredientss::Tomato* tomato = new Tomato;
    Ingredientss::Walnut* walnut = new Walnut;
    void printAvaiableIngredientsList() {
        std::cout << "Avaiable Ingredients:\n";
        std::cout << "1." << beetroot->getName() << endl;
        std::cout << "2." << carrot->getName() << endl;
        std::cout << "3." << cheese->getName() << endl;
        std::cout << "4." << chestnut->getName() << endl;
        std::cout << "5." << chickenFillet->getName() << endl;
        std::cout << "6." << chilli->getName() << endl;
        std::cout << "7." << cream->getName() << endl;
        std::cout << "8." << cucumber->getName() << endl;
        std::cout << "9." << dill->getName() << endl;
        std::cout << "10." << driedFruit->getName() << endl;
        std::cout << "11." << egg->getName() << endl;
        std::cout << "12." << badimcan->getName() << endl;
        std::cout << "13." << flour->getName() << endl;
        std::cout << "14." << garlic->getName() << endl;
        std::cout << "15." << greens->getName() << endl;
        std::cout << "16." << ketchup->getName() << endl;
        std::cout << "17." << lavash->getName() << endl;
        std::cout << "18." << lentil->getName() << endl;
        std::cout << "19." << lettuce->getName() << endl;
        std::cout << "20." << milk->getName() << endl;
        std::cout << "21." << meat->getName() << endl;
        std::cout << "22." << mint->getName() << endl;
        std::cout << "23." << mushroom->getName() << endl;
        std::cout << "24." << mustard->getName() << endl;
        std::cout << "25." << oil->getName() << endl;
        std::cout << "26." << olive->getName() << endl;
        std::cout << "27." << onion->getName() << endl;
        std::cout << "28." << parsley->getName() << endl;
        std::cout << "29." << pea->getName() << endl;
        std::cout << "30." << pepper->getName() << endl;
        std::cout << "31." << pomegranate->getName() << endl;
        std::cout << "32." << potato->getName() << endl;
        std::cout << "33." << pumpkin->getName() << endl;
        std::cout << "34." << raisin->getName() << endl;
        std::cout << "35." << rice->getName() << endl;
        std::cout << "36." << yougurt->getName() << endl;
        std::cout << "37." << sauce->getName() << endl;
        std::cout << "38." << tomato->getName() << endl;
        std::cout << "39." << walnut->getName() << endl;
    }

}
using namespace Ingredientss;
 class Meal {
protected:
    RecieptItem** ingredients;
    int count = 0;
    double price;
    string name;
    double rating;
    int mealAmount;
public:
    Meal() :name("") {}
    Meal(const string&name) {
        setName(name);
    }
    void setMealAmount(const int& mealAmount) {
        if (mealAmount >= 1) {
            this->mealAmount = mealAmount;
        }
    }
    void setRating(const double& rating) {
        if (rating < 5 && rating >1) {
            this->rating = rating;
        }
    }
    void setName(const string& name) {
        if (!name.empty()) {
            this->name = name;
        }
    }
    virtual string getName()const {
        return name;
    }
    virtual void printKcal()const {
        double kcal = 0;
        cout << "Calories in " << getName() << ":" << kcal << endl;
    }
    virtual void printMealandPrice()const {
        cout << name << endl;
        cout << "Price : " << price << endl;
    }
    virtual void printRecipe()const {
        cout << "Name of Meal : " << name << endl;
        for (size_t i = 0; i < count; i++)
        {
            ingredients[i]->show();
        }
    }
    void addIngredient(Ingredient* ingredient) {
        RecieptItem* newitem = new RecieptItem;
        newitem->ingredient = ingredient;
        auto items = new RecieptItem * [count + 1]{};
        for (size_t i = 0; i < count; i++)
        {
            items[i] = ingredients[i];
        }
        items[count] = newitem;
        ++count;
        delete[]ingredients;
        ingredients = items;
        items = nullptr;

    }
    void addIngredient(Ingredient* ingredient, int amount) {
        RecieptItem* newitem = new RecieptItem;
        newitem->ingredient = ingredient;
        newitem->setAmount(amount);
        auto items = new RecieptItem * [count + 1]{};
        for (size_t i = 0; i < count; i++)
        {
            items[i] = ingredients[i];
        }
        items[count] = newitem;
        ++count;
        delete[]ingredients;
        ingredients = items;
        items = nullptr;

    }
    void addIngredient(Ingredient* ingredient, int amount,int gr) {
        RecieptItem* newitem = new RecieptItem;
        newitem->ingredient = ingredient;
        newitem->setAmount(amount);
        newitem->setGram(gr);
        auto items = new RecieptItem * [count + 1]{};
        for (size_t i = 0; i < count; i++)
        {
            items[i] = ingredients[i];
        }
        items[count] = newitem;
        ++count;
        delete[]ingredients;
        ingredients = items;
        items = nullptr;

    }
    void setPrice(const double price) {
        this->price = price;
    }
    double getPrice()const {
        return price;
    }
    void orderFunc(Meal meal, int amount, string tableNo) {
        string defaultWord = "ordersFromTableNo";
        string txt = ".txt";
        string filename = defaultWord + tableNo + txt;
        ofstream fout(filename, ios::trunc);
        if (fout.is_open()) {
            string mealName = meal.getName();
            fout << "Table No : " << tableNo << endl;
            fout << "Meal Name : " << mealName << endl;
            fout << "Meal Amount : " << amount << endl;
            fout << "Order Time : " << __TIME__ << endl;
        }
        fout.close();
        cout << "Meal Ordered\n";
        cout << "Loading...\n";
        cout << "Please wait\n";
        Sleep(2000);
        cout << "Your Order will come in 5 minutes\n";
        cout << "Bon apetite!\n";
        Sleep(5000);
        system("cls");
        writeToProgramLog("Meal Ordered", __DATE__, __TIME__);
    }
    void addingIngredientToMeal(Meal meal) {
        int opt2;
        int amountAndGram;
        int selectIng;
        system("cls");
        int orderOpt;
        meal.printRecipe();
        cout << "\t\t\t\t\tReturn to previous menu : 0\n";
        cout << "\t\t\t\t\t\tOrder : 1\n";
        cout << "\t\t\t\t\t      Your Choice : "; cin >> orderOpt;
        if (orderOpt == 0) {
            client();
        }
        int order2;
        bool a = true;
        if (orderOpt == 1) {
            while (a) {
                cout << "\t\t\t\t\tReturn to previous menu : 0\n";
                cout << "\t\t\t\t        Add ingredient to Meal : 1\n";
                cout << "\t\t\t\t\t\tOrder Meal : 2\n";
                cout << "\t\t\t\t\t\tYour Choice : "; cin >> order2;
                if (order2 == 0) {
                    addingIngredientToMeal(meal);
               }
                if (order2 == 1) {
                    system("cls");  
                    Ingredientss::printAvaiableIngredientsList();
                    cout << "Enter id to add Ingredient \n"; cin >> selectIng;
                    switch (selectIng) {
                    case 1: {
                        cout << "You Selected : " << beetroot->getName() << endl;
                        cout << "Calories in Ingredient : " << beetroot->getKkal() << endl;
                        cout << "Enter amount : "; cin >> amountAndGram;
                        meal.addIngredient(beetroot, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 2: {
                        cout << "You Selected : " << carrot->getName() << endl;
                        cout << "Calories in Ingredient : " << carrot->getKkal() << endl;
                        cout << "Enter amount : "; cin >> amountAndGram;
                        meal.addIngredient(carrot, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 3: {
                        cout << "You Selected : " << cheese->getName() << endl;
                        cout << "Calories in Ingredient : " << cheese->getKkal() << endl;
                        cout << "Enter gram : "; cin >> amountAndGram;
                        meal.addIngredient(cheese, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 4: {
                        cout << "You Selected : " << chestnut->getName() << endl;
                        cout << "Calories in Ingredient : " << chestnut->getKkal() << endl;
                        cout << "Enter gram : "; cin >> amountAndGram;
                        meal.addIngredient(chestnut, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 5: {
                        cout << "You Selected : " << chickenFillet->getName() << endl;
                        cout << "Calories in Ingredient : " << chickenFillet->getKkal() << endl;
                        cout << "Enter amount : "; cin >> amountAndGram;
                        meal.addIngredient(chickenFillet, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 6: {
                        cout << "You Selected : " << chilli->getName() << endl;
                        cout << "Calories in Ingredient : " << chilli->getKkal() << endl;
                        cout << "Enter gram : "; cin >> amountAndGram;
                        meal.addIngredient(chilli, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 7: {
                        cout << "You Selected : " << chilli->getName() << endl;
                        cout << "Calories in Ingredient : " << chilli->getKkal() << endl;
                        cout << "Enter gram : "; cin >> amountAndGram;
                        meal.addIngredient(cream, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 8: {
                        cout << "You Selected : " << chilli->getName() << endl;
                        cout << "Calories in Ingredient : " << chilli->getKkal() << endl;
                        cout << "Enter gram : "; cin >> amountAndGram;
                        meal.addIngredient(cucumber, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 9: {
                        cout << "You Selected : " << chilli->getName() << endl;
                        cout << "Calories in Ingredient : " << chilli->getKkal() << endl;
                        cout << "Enter gram : "; cin >> amountAndGram;
                        meal.addIngredient(dill, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 10: {
                        cout << "You Selected : " << chilli->getName() << endl;
                        cout << "Calories in Ingredient : " << chilli->getKkal() << endl;
                        cout << "Enter gram : "; cin >> amountAndGram;
                        meal.addIngredient(driedFruit, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 11: {
                        cout << "You Selected : " << chilli->getName() << endl;
                        cout << "Calories in Ingredient : " << chilli->getKkal() << endl;
                        cout << "Enter gram : "; cin >> amountAndGram;
                        meal.addIngredient(egg, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 12: {
                        cout << "You Selected:" << badimcan->getName() << endl;
                        cout << "Calories in Ingredient:" << badimcan->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(badimcan, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 13: {
                        cout << "You Selected:" << flour->getName() << endl;
                        cout << "Calories in Ingredient:" << flour->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(flour, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 14: {
                        cout << "You Selected:" << garlic->getName() << endl;
                        cout << "Calories in Ingredient:" << garlic->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(garlic, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 15: {
                        cout << "You Selected:" << greens->getName() << endl;
                        cout << "Calories in Ingredient:" << greens->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(greens, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 16: {
                        cout << "You Selected:" << ketchup->getName() << endl;
                        cout << "Calories in Ingredient:" << ketchup->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(ketchup, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 17: {
                        cout << "You Selected:" << lavash->getName() << endl;
                        cout << "Calories in Ingredient:" << lavash->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(lavash, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 18: {
                        cout << "You Selected:" << lentil->getName() << endl;
                        cout << "Calories in Ingredient:" << lentil->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(lentil, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 19: {
                        cout << "You Selected:" << lettuce->getName() << endl;
                        cout << "Calories in Ingredient:" << lettuce->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(lettuce, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 20: {
                        cout << "You Selected:" << milk->getName() << endl;
                        cout << "Calories in Ingredient:" << milk->getKkal() << endl;
                        cout << "Enter ml:"; cin >> amountAndGram;
                        meal.addIngredient(milk, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 21: {
                        cout << "You Selected:" << meat->getName() << endl;
                        cout << "Calories in Ingredient:" << meat->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(meat, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 22: {
                        cout << "You Selected:" << mint->getName() << endl;
                        cout << "Calories in Ingredient:" << mint->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(mint, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 23: {
                        cout << "You Selected:" << mushroom->getName() << endl;
                        cout << "Calories in Ingredient:" << mushroom->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(mushroom, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 24: {
                        cout << "You Selected:" << mustard->getName() << endl;
                        cout << "Calories in Ingredient:" << mustard->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(mustard, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 25: {
                        cout << "You Selected:" << oil->getName() << endl;
                        cout << "Calories in Ingredient:" << oil->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(oil, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 26: {
                        cout << "You Selected:" << olive->getName() << endl;
                        cout << "Calories in Ingredient:" << olive->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(olive, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 27: {
                        cout << "You Selected:" << onion->getName() << endl;
                        cout << "Calories in Ingredient:" << onion->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(onion, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 28: {
                        cout << "You Selected:" << parsley->getName() << endl;
                        cout << "Calories in Ingredient:" << parsley->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(parsley, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 29: {
                        cout << "You Selected:" << pea->getName() << endl;
                        cout << "Calories in Ingredient:" << pea->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(pea, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 30: {
                        cout << "You Selected:" << pepper->getName() << endl;
                        cout << "Calories in Ingredient:" << pepper->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(pepper, amountAndGram);
                        cout << "Ingredient added to meal\n";
                        break;
                    }
                    case 31: {
                        cout << "You Selected:" << pomegranate->getName() << endl;
                        cout << "Calories in Ingredient:" << pomegranate->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(pomegranate, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";
                        break;
                    }
                    case 32: {
                        cout << "You Selected:" << potato->getName() << endl;
                        cout << "Calories in Ingredient:" << potato->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(potato, amountAndGram);
                        cout << "Ingredient added to meal\n";
                        break;
                    }
                    case 33: {
                        cout << "You Selected:" << pumpkin->getName() << endl;
                        cout << "Calories in Ingredient:" << pumpkin->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(pumpkin, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";
                        break;
                    }
                    case 34: {
                        cout << "You Selected:" << raisin->getName() << endl;
                        cout << "Calories in Ingredient:" << raisin->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(raisin, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";
                        break;
                    }
                    case 35: {
                        cout << "You Selected:" << rice->getName() << endl;
                        cout << "Calories in Ingredient:" << rice->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(rice, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";
                        break;
                    }
                    case 36: {
                        cout << "You Selected:" << yougurt->getName() << endl;
                        cout << "Calories in Ingredient:" << yougurt->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(yougurt, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";
                        break;
                    }
                    case 37: {
                        cout << "You Selected:" << sauce->getName() << endl;
                        cout << "Calories in Ingredient:" << sauce->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(sauce, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 38: {
                        cout << "You Selected:" << tomato->getName() << endl;
                        cout << "Calories in Ingredient:" << tomato->getKkal() << endl;
                        cout << "Enter amount:"; cin >> amountAndGram;
                        meal.addIngredient(tomato, amountAndGram);
                        cout << "Ingredient added to meal\n";

                        break;
                    }
                    case 39: {
                        cout << "You Selected:" << walnut->getName() << endl;
                        cout << "Calories in Ingredient:" << walnut->getKkal() << endl;
                        cout << "Enter gram:"; cin >> amountAndGram;
                        meal.addIngredient(walnut, 0, amountAndGram);
                        cout << "Ingredient added to meal\n";
                        break;
                    }
                    break;
                    }
                }
                if (order2 == 2) {
                    string tableNo;
                    int amount;
                    std::cout << "Enter Table No:"; std::cin >> tableNo;
                    std::cout << "Enter Amount:"; std::cin >> amount;
                    orderFunc(meal, amount, tableNo);
                }
            }
        }
    }
    void unableToAddIngredient(Meal meal) {
        system("cls");
        int order;
        meal.printRecipe();
        cout << "\t\t\t\t\tReturn to previous menu : 0\n";
        cout << "\t\t\t\t\t\tOrder : 1\n";
        cout << "\t\t\t\t\t      Your Choice : "; cin >> order;
        if (order == 0) {
            client();
        }
        if (order == 1) {
            int order2;
            bool a = true;
            while (a) {
                cout << "Return to previous menu : 0\n";
                cout << "Add ingredient : 1\n";
                cout << "Order Meal : 2\n";
                cout << "Your Choice : "; cin >> order2;
                if (order2 == 0) {
                    client();
               }
                if (order2 == 1) {
                    system("cls");
                    cout << "\t\t\t\tYou can not add ingredient to this meal\n";
                }
                if (order2 == 2) {
                    system("cls");
                    int amount;
                    std::string tableNo;
                    std::cout << "Enter amount : "; std::cin >> amount;
                    std::cout << "Enter Table Number : "; std::cin >> tableNo;
                   orderFunc(meal, amount, tableNo);
        }
        }
        }
        }

};
 namespace Salads {
        class PaytaxtSalati :public Meal {
        protected:
            Cucumber* cucumber = new Cucumber;
            Potato* potato = new Potato;
            Egg* egg = new Egg;
            Carrot* carrot = new Carrot;
            Pear* pea = new Pear;
            Dill* dill = new Dill;
            Mayonnaise* mayonnaise = new Mayonnaise;
            ChickenFillet* chickenFillet = new ChickenFillet;
        public:
            PaytaxtSalati(const string name):Meal(name) {
                addIngredient(cucumber,2);
                addIngredient(potato,2);
                addIngredient(egg,3);
                addIngredient(carrot,2);
                addIngredient(pea,3);
                addIngredient(dill,2);
                addIngredient(mayonnaise,0,80);
                addIngredient(chickenFillet,2);
                setPrice(4);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (potato->getKkal() * 2) + (egg->getKkal() * 3)+(cucumber->getKkal()*2) + (carrot->getKkal() * 2) + (chickenFillet->getKkal() * 2) + (pea->getKkal() * 100) + (dill->getKkal()*2)+mayonnaise->getKkal();
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }
            ~PaytaxtSalati()
            {
                delete cucumber;
                delete potato;
                delete egg;
                delete carrot;
                delete pea;
                delete dill;
                delete mayonnaise;
                delete chickenFillet;

            }
        };
        class ToyugSalati :public Meal {
        protected:
                Cucumber* cucumber = new Cucumber;
                Potato* potato = new Potato;
                Egg* egg = new Egg;
                Carrot* carrot = new Carrot;
                Pepper* pepper = new Pepper;
                Oil* oil = new Oil;
                ChickenFillet* chickenFillet = new ChickenFillet;
        public:
            ToyugSalati(const string name):Meal(name) {
                addIngredient(cucumber,2);
                addIngredient(potato,2);
                addIngredient(egg,2);
                addIngredient(carrot,2);
                addIngredient(pepper,2);
                addIngredient(oil,0,100);
                addIngredient(chickenFillet, 2);
                setPrice(4);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (potato->getKkal() * 2) + (egg->getKkal() * 2) + (carrot->getKkal() * 2) + (chickenFillet->getKkal() * 2) + (pepper->getKkal()*2)+(oil->getKkal());
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            ~ToyugSalati()
            {
                delete cucumber;
                delete potato;
                delete egg;
                delete carrot;
                delete pepper;
                delete oil;
                delete chickenFillet;

            }
        };
        class KingSalad :public Meal {
        protected:
            Potato* potato = new Potato;
            Egg* egg = new Egg;
            Carrot* carrot = new Carrot;
            ChickenFillet* chickenFillet = new ChickenFillet;
            Mayonnaise* mayonnaise = new Mayonnaise;
            Beetroot* beetroot = new Beetroot;
            DriedFruit* driedAppricot = new DriedFruit("Erik Qurusu",10);
            Walnut* walnut = new Walnut;
        public:
            KingSalad(const string name) :Meal(name) {
                addIngredient(potato,2);
                addIngredient(egg,3);
                addIngredient(carrot,3);
                addIngredient(beetroot,3);
                addIngredient(mayonnaise,0,80);
                addIngredient(driedAppricot,3);
                addIngredient(walnut,3);
                addIngredient(chickenFillet,3);            
                setPrice(4);
            }
            void printRecipe() {
              
                Meal::printRecipe();
                cout << "Price:" << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (potato->getKkal() * 2) + (egg->getKkal()*3) + (carrot->getKkal() * 3) + (beetroot->getKkal()*3) 
               + (mayonnaise->getKkal()) + (driedAppricot->getKkal()*3) + (walnut->getKkal()*3) + (chickenFillet->getKkal()*3);
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }
            ~KingSalad() {
                delete carrot;
                delete potato;
                delete egg;
                delete chickenFillet;
                delete mayonnaise;
                delete driedAppricot;
                delete walnut;
                delete beetroot;

        }
        };
        class MimosaSalad :public Meal {
        protected:
                Potato* potato = new Potato;
                Egg* egg = new Egg;
                Carrot* carrot = new Carrot;
                ChickenFillet* chickenFillet = new ChickenFillet;
                Mayonnaise* mayonnaise = new Mayonnaise;
                Cheese* cheese = new Cheese("Holland Cheese");
        public:
            MimosaSalad(const string name) :Meal(name) {
                addIngredient(potato,2);
                addIngredient(egg,3);
                addIngredient(carrot,3);
                addIngredient(mayonnaise,0,90);
                addIngredient(chickenFillet,2);
                addIngredient(cheese,1);
                setPrice(4);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (potato->getKkal() * 2) + (egg->getKkal() * 3) + (carrot->getKkal() * 3) + (mayonnaise->getKkal()) + (chickenFillet->getKkal() * 3) + (cheese->getKkal());
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }
            ~MimosaSalad(){
                delete carrot;
                delete potato;
                delete egg;
                delete chickenFillet;
                delete mayonnaise;
                delete cheese;
            }
        };
    }
 namespace Sauces {
        class PomegranateSauce : public Meal {
        public:
            PomegranateSauce(const string name) :Meal(name) {
                setPrice(3);
            }
            void printRecipe() {
                cout << "Name:" << getName() << endl;
                cout << "Price:" << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = 130;
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

        };
        class KetchupSauce : public Meal {
        public:
            KetchupSauce(const string name) :Meal(name) {
                setPrice(2);
            }
            void printKcal() {
                double kcal = 70;
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            void printRecipe() {
                cout << "Name:" << getName() << endl;
                cout << "Price:" << getPrice() << endl << endl;
            }
        };
        class MayonnaiseSauce : public Meal {
        public:
            MayonnaiseSauce(const string name) :Meal(name) {
                setPrice(1);
            }
            void printKcal() {
                double kcal = 90;
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            void printRecipe() {
                cout << "Name:" << getName() << endl;
                cout << "Price:" << getPrice() << endl << endl;
            }
        };
    }
 namespace Pulovlar {
        class ShahPulov :public Meal {
        protected:  
                Rice* rice = new Rice;
                Lavash* lavash = new Lavash;
                Chestnut* chestnut = new Chestnut;
                Meat* meat = new Meat("Meat");
        public:
            ShahPulov(const string name) :Meal(name) {
                setPrice(15);
            addIngredient(rice,0,1000);
                addIngredient(lavash,2);
                addIngredient(chestnut,0,100);
                addIngredient(meat,0,500);
            }
            void printKcal() {
                double kcal = (rice->getKkal() * 6) + (lavash->getKkal() * 2) + (chestnut->getKkal() * 100) + (meat->getKkal() * 500);
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            void printRecipe() {
                Meal::printRecipe();
                cout << "Price:" << getPrice() << endl << endl;
            }
            ~ShahPulov()
            {
                delete rice;
                delete lavash;
                delete chestnut;
                delete meat;
            }
        };
        class SabziPulov :public Meal {
        protected:
            Rice* rice = new Rice;
                Meat* meat = new Meat("Qoyun eti");
                Greens* greens = new Greens("Greens");
        public:
            SabziPulov(const string name) :Meal(name) {
                addIngredient(rice,0,1000);
                addIngredient(meat,0,500);
                addIngredient(greens,2);
                setPrice(8);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price:" << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (rice->getKkal() * 6) + (greens->getKkal() * 2) +(meat->getKkal() * 500);
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            ~SabziPulov()
            {
                delete rice;
                delete meat;
                delete greens;
               
            }
        };
        class BalqabagPulov :public Meal {
        protected:   
            Rice* rice = new Rice;
            Pumpkin* pumpkin = new Pumpkin;
        public:
            BalqabagPulov(const string name) :Meal(name) {
                addIngredient(rice,0,1000);
                addIngredient(pumpkin,1);
                setPrice(8);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (rice->getKkal() * 6) + (pumpkin->getKkal() * 1);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            ~BalqabagPulov()
            {
                delete rice;
                delete pumpkin;

            }
        };
        class SweetPilaf :public Meal {
        protected:
        Rice* rice = new Rice;
        DriedFruit* driedAppricot = new DriedFruit("Erik qurusu",50);
        Raisin* raisin = new Raisin;
        Meat* meat = new Meat("Qoyun eti");

        public:
            SweetPilaf(const string name) :Meal(name) {
                addIngredient(rice,1000);
                addIngredient(driedAppricot,0,50);
                addIngredient(raisin,0,100);
                addIngredient(meat,0,500);
                setPrice(8);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price:" << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (rice->getKkal() * 6) + (driedAppricot->getKkal() * 50) + (meat->getKkal() * 500)+(raisin->getKkal()*100);
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            ~SweetPilaf()
            {
                delete rice;
                delete driedAppricot;
                delete raisin;
                delete meat;

            }
        };
    }
 namespace XemirYemekleri {
    class Dushbere :public Meal {
    protected:
            Mint* mint = new Mint;
            Greens* greens = new Greens("Gogerti");
            Meat* meat = new Meat("Et qiymesi");
    public:
        Dushbere(const string name) :Meal(name) {
            addIngredient(mint,0,50);
            addIngredient(greens,2);
            addIngredient(meat,0,500);
            setPrice(5);
        }
        void printRecipe() {
            Meal::printRecipe();
            cout << "Price : " << getPrice() << endl << endl;
        }
        void printKcal() {
            double kcal = (mint->getKkal() * 50) + (greens->getKkal() * 2) + (meat->getKkal() * 500);
            cout << "Calories in " << getName() << " : " << kcal << endl;
        }

        ~Dushbere(){
            delete mint;
            delete greens;
            delete meat;

        }
    };
    class Xengel :public Meal {
    protected:
            Meat* meat = new Meat("Qoyun eti");
            Greens* greens = new Greens("Gogerti");
            Yougurt* yougurt = new Yougurt;
            Onion* onion = new Onion;
    public:
        Xengel(const string name) :Meal(name) {
            setPrice(6);
            addIngredient(meat,0,500);
            addIngredient(greens,2);
            addIngredient(yougurt,0,100);
            addIngredient(onion,2);
        }
        void printRecipe() {
            Meal::printRecipe();
            cout << "Price:" << getPrice() << endl << endl;
        }
        void printKcal() {
            double kcal = (yougurt->getKkal() * 100) + (greens->getKkal() * 2) + (meat->getKkal() * 500)+(onion->getKkal()*2);
            cout << "Calories in " << getName() << ":" << kcal << endl;
        }

        ~Xengel()
       {
            delete meat;
            delete greens;
            delete yougurt;
            delete onion;

        }
    };
    class Gurza :public Meal {
    protected:
            Greens* greens = new Greens("Greens");
            Meat* meat = new Meat("Qoyun eti");
            Dough* dough = new Dough;
    public:
        Gurza(const string name) :Meal(name) {
            addIngredient(greens,2);
            addIngredient(meat,0,500);
            addIngredient(dough, 0, 500);
            setPrice(8);
        }
        void printRecipe() {
            Meal::printRecipe();
            cout << "Price : " << getPrice() << endl << endl;
        }
        void printKcal() {
            double kcal = (greens->getKkal() * 2) +(dough->getKkal()*500)+(meat->getKkal() * 500);
            cout << "Calories in " << getName() << " : " << kcal << endl;
        }

        Gurza(){
            delete greens;
            delete meat;

        }
    };
}
 namespace EtYemekleri {
        class YarpaqDolmasi : public Meal {
        protected:
        Meat* meat = new Meat("Et");
        Rice* rice = new Rice;
        Greens* greens = new Greens("Gogerti");
        Onion* onion = new Onion;
        public:
            YarpaqDolmasi(const string name) :Meal(name) {
                setPrice(6);
                addIngredient(meat,0,400);
                addIngredient(rice,0,400);
                addIngredient(greens,0,4);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price:" << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (greens->getKkal() * 2) + (rice->getKkal() * 400) + (meat->getKkal() * 400);
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            ~YarpaqDolmasi()
            {
                delete meat;
                delete rice;
                delete greens;
                delete onion;

            }
        };
        class UchBaciDolmasi : public Meal {
        protected:
        Meat* veal = new Meat("Et");
        Rice* rice = new Rice;
        Greens* greens = new Greens("Gogerti");
        Eggplant* badimcan = new Eggplant;
        Tomato* tomato = new Tomato;
        Pepper* pepper = new Pepper;
        Onion* onion = new Onion;
        public:
            UchBaciDolmasi(const string name) :Meal(name) {
                addIngredient(veal,0,500);
                addIngredient(rice,0,300);
                addIngredient(greens,0,3);
                addIngredient(badimcan,4);
                addIngredient(tomato,4);
                addIngredient(pepper,4);
                addIngredient(onion,2);
                setPrice(6);
            }
            void printRecipe() {
                
                Meal::printRecipe();
                cout << "Price:" << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (greens->getKkal() * 3) + (rice->getKkal() * 300) + (veal->getKkal() * 500)+(badimcan->getKkal()*4)+(tomato->getKkal()*4)+(pepper->getKkal()*4)+(pepper->getKkal()*4)+(onion->getKkal()*2);
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            ~UchBaciDolmasi()
            {
                delete veal;
                delete rice;
                delete greens;
                delete onion;
                delete tomato;
                delete pepper;
                delete badimcan;

            }
        };
        class Langet : public Meal {
        protected:
                Meat* beef = new Meat("Beef");
                Tomato* tomato = new Tomato;
        public:
            Langet(const string name) :Meal(name) {
                setPrice(5);
                addIngredient(beef,0,400);
                addIngredient(tomato,4);
            }
            void printRecipe() {

                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (tomato->getKkal() * 4) + (beef->getKkal() * 400);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            ~Langet()
            {
                delete tomato;
                delete beef;
            }
        };
        class Antrikot : public Meal {
        protected:
                Meat* meat = new Meat("Qoyun eti");
                Potato* potato = new Potato;
                Tomato* tomato = new Tomato;
                Pepper* pepper = new Pepper;
        public:
            Antrikot(const string name) :Meal(name) {
                addIngredient(meat,0,400);
                addIngredient(potato,4);
                addIngredient(tomato,4);
                addIngredient(pepper,4);
                setPrice(8);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (meat->getKkal() * 400) + (potato->getKkal() * 4) + (meat->getKkal() * 500);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            ~Antrikot()
            {
                delete meat;
                delete tomato;
                delete potato;
                delete pepper;

            }
        };
    }
 namespace Kabablar {
    class BaligKababi :public Meal {
            public:
                BaligKababi(const string name) :Meal(name) {
                    setPrice(25);
                }

                void printRecipe() {
                    cout << "Name:" << getName() << endl;
                    cout << "Price:" << getPrice() << endl << endl;
                }
                void printKcal() {
                    double kcal = 3200;
                    cout << "Calories in " << getName() << ":" << kcal << endl;
                }

            };
    class BelugaKabab :public Meal {
            public:
                BelugaKabab(const string name) :Meal(name) {
                    setPrice(25);
                }
                void printRecipe() {
                    cout << "Name:" << getName() << endl;
                    cout << "Price:" << getPrice() << endl << endl;
                }
                void printKcal() {
                    double kcal = 2400;
                    cout << "Calories in " << getName() << ":" << kcal << endl;
                }

            };//ag baliq
    class QizilBaligKababi :public Meal {
            public:
                QizilBaligKababi(const string name) :Meal(name) {
                    setPrice(25);
                }
                void printRecipe() {
                    cout << "Name:" << getName() << endl;
                    cout << "Price:" << getPrice() << endl << endl;
                
                }
                void printKcal() {
                    double kcal = 2800;
                    cout << "Calories in " << getName() << ":" << kcal << endl;
                }

                };
    class PikeperchKebab :public Meal {
            public:
                PikeperchKebab(const string name) :Meal(name) {
                    setPrice(8);
                }
                void printRecipe() {
                    cout << "Name:" << getName() << endl;
                    cout << "Price:" << getPrice() << endl << endl;
                }
                void printKcal() {
                    double kcal = 2600;
                    cout << "Calories in " << getName() << ":" << kcal << endl;
                }

            };
    class LuleKababQoyun :public Meal {
            protected:
            Meat* meat = new Meat("Qoyun eti");
            Meat* tail = new Meat("Quyrug");
            Onion* onion = new Onion;
            public:
                LuleKababQoyun(const string name) :Meal(name) {
                    setPrice(5);
                    addIngredient(meat,0,500);
                    addIngredient(tail,20);
                    addIngredient(onion,10);
                }
                void printKcal() {
                    double kcal = (meat->getKkal() * 500) + (tail->getKkal() * 20) + (onion->getKkal()*10);
                    cout << "Calories in " << getName() << " : " << kcal << endl;
                }

                void printRecipe() {
                    Meal::printRecipe();
                    cout << "Price : " << getPrice() << endl << endl;
                }
                ~LuleKababQoyun()
                {
                    delete meat;
                    delete tail;
                    delete onion;

                }
            };
    class TikeKebab :public Meal {
            public:
                TikeKebab(const string name) :Meal(name) {
                    setPrice(6);
                }
                void printRecipe() {
                    cout << "Price : " << getPrice() << endl << endl;
                }
                void printKcal() {
                    double kcal = 1500;
                    cout << "Calories in " << getName() << ":" << kcal << endl;
                }


            };
    class Antrikot :public Meal {
            public:
                Antrikot(const string name) :Meal(name) {
                    setPrice(7);
                }
                void printKcal() {
                    double kcal = 1100;
                    cout << "Calories in " << getName() << " : " << kcal << endl;
                }


                void printRecipe() {
                    cout << "Price : " << getPrice() << endl << endl;
                }
            };
    }
 namespace Starters {
        class QaraKuru : public Meal {
        public:
            QaraKuru(const string name) :Meal(name) {
                setPrice(70);
            }
            void printKcal() {
                double kcal = 264;
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            void printRecipe() {
                cout << "Name :" << getName() << endl;
                cout << "Price :" << getPrice() << endl << endl;
            }
        };
        class QirmiziKuru : public Meal {
        public:
            QirmiziKuru(const string name) :Meal(name) {
                setPrice(10);
            }
            void printRecipe() {
                cout << "Name :" << getName() << endl;
                cout << "Price :" << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = 257;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

        };
        class EtQutabi : public Meal {
        protected:
        Meat* meat = new Meat("Et");
        Pomegranate* pomegranate = new Pomegranate;
        public:
            EtQutabi(const string name) :Meal(name) {
                setPrice(1);
                addIngredient(meat,0,200);
                addIngredient(pomegranate,0,80);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (meat->getKkal() * 200) + (pomegranate->getKkal() * 80);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            ~EtQutabi(){
                delete meat;
                delete pomegranate;
            }
        };
        class DanaDili :public Meal {
        protected:
        public:
            DanaDili(const string name) :Meal(name) {
                setPrice(5);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = 2.26*150;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }
        };
        class GoyQutabi : public Meal {
        protected:
                Greens* greens = new Greens("Gogerti");
                Lavash* lavash = new Lavash;
        public:
            GoyQutabi(const string name) :Meal(name) {
                setPrice(1);
                addIngredient(greens,2);
                addIngredient(lavash, 1);
            }
            void printKcal() {
                double kcal = (greens->getKkal() * 2)+(lavash->getKkal()*1) ;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            ~GoyQutabi()
            {
            delete greens;

            }
        };
        class BalqabagQutab : public Meal {
        protected:
        Pumpkin* pumpkin = new Pumpkin;
        Lavash* lavash = new Lavash;
        public:
            BalqabagQutab(const string name) :Meal(name) {
                setPrice(1);
                addIngredient(pumpkin,0,150);
                addIngredient(lavash, 1);
            }
            void printKcal() {
                double kcal = (pumpkin->getKkal() * 150) + (lavash->getKkal() * 1);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            ~BalqabagQutab()
            {
                delete pumpkin;
                delete lavash;
            }
        };
        class PendirQutab : public Meal {
        protected:
        Cheese* cheese = new Cheese("Pendir");
        Lavash* lavash = new Lavash;
        public:
            PendirQutab(const string name) :Meal(name) {
            setPrice(1);
            addIngredient(cheese,0,150);
            addIngredient(lavash, 1);
            }
            void printKcal() {
                double kcal = (cheese->getKkal() * 150) + (lavash->getKkal() * 1);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }
            void printRecipe() {
            Meal::printRecipe();
            cout << "Price : " << getPrice() << endl << endl;
            }
            ~PendirQutab()
            {
                delete cheese;
                delete lavash;
            }
        };
        class Blinchik : public Meal {
        protected:
        Meat* meat = new Meat("Et");
        Dough* dough = new Dough;
        public:
            Blinchik(const string name) :Meal(name) {
                addIngredient(meat,0,150);
                addIngredient(dough, 0, 100);
                setPrice(2);
            }
            void printKcal() {
                double kcal = (meat->getKkal() * 2) + (dough->getKkal() * 100);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            ~Blinchik() {
                delete meat;
            }
            
        };
        class KrivetkaChiliSoslu : public Meal {
        protected:
            Chilli* chilli = new Chilli;
        public:
            KrivetkaChiliSoslu(const string name) :Meal(name) {
                setPrice(10);
                addIngredient(chilli, 0, 80);
            }
            void printKcal() {
                double kcal = (chilli->getKkal() * 80) + 300;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }
            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
        class KrivetkaTarTarSoslu : public Meal {
        protected:
            Chilli* chilli = new Chilli;
        public:
            KrivetkaTarTarSoslu(const string name) :Meal(name) {
                setPrice(10);
                addIngredient(chilli, 0, 80);
            }
            void printKcal() {
                double kcal = (chilli->getKkal() * 80) + 300;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }
            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
        class Terevezler:public Meal {
        protected:
        Cucumber* cucumber = new Cucumber;
        Tomato* tomato = new Tomato;
        Olive* olive = new Olive;
        Greens* greens = new Greens("Gogerti");
        public:
            Terevezler(const string name) :Meal(name) {
                setPrice(10);
                addIngredient(cucumber,2);
                addIngredient(tomato,2);
                addIngredient(olive,10);
                addIngredient(greens,4);
            }
            void printKcal() {
                double kcal = (cucumber->getKkal() * 4) + (tomato->getKkal() * 2) + (olive->getKkal() * 10) + (greens->getKkal() * 4);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
    }
 namespace Soups {
        class Merci : public Meal {
        protected:
        Lentil* lentil = new Lentil;
        Carrot* carrot = new Carrot;
        Sauce* sauce = new Sauce("Tomato Sauce");
        public:
            Merci(const string name) :Meal(name) {
                setPrice(3);
                addIngredient(lentil,0,130);
                addIngredient(carrot,2);
                addIngredient(sauce,0,70);
            }
            void printKcal() {
                double kcal = (lentil->getKkal() * 130) + (carrot->getKkal() * 2) + (sauce->getKkal() * 10);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            ~Merci(){
                delete lentil;
                delete carrot;
                delete sauce;

            }
        };
        class GobelekSupu : public Meal {
        protected:
            Mushroom* mushroom = new Mushroom;
            Cream* cream = new Cream;
            Milk* milk = new Milk;
            Mint* mint = new Mint;
            Parsley* parsley = new Parsley;
        public:
            GobelekSupu(const string name) :Meal(name) {
                setPrice(8);
                addIngredient(mushroom,0,120);
                addIngredient(cream,0,100);
                addIngredient(milk,0,50);
                addIngredient(mint,0,30);
                addIngredient(parsley,2);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (mushroom->getKkal() * 120) + (cream->getKkal() * 100) + (milk->getKkal() * 50) + (mint->getKkal() * 30)+(parsley->getKkal()*2);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            ~GobelekSupu() {
                delete mushroom;
                delete milk;
                delete mint;
                delete parsley;

            }
        };
        class Noodle : public Meal {
        protected:
            Meat* meat = new Meat("Turshu kabab");
            Pear* pea = new Pear;
            Mint* mint = new Mint;
        public:
            Noodle(const string name) :Meal(name) {
                setPrice(4);
                addIngredient(meat,0,300);
                addIngredient(pea,0,30);
                addIngredient(mint,0,40);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price:" << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (meat->getKkal() * 300) + (pea->getKkal() * 30) + (mint->getKkal() * 40) + (mint->getKkal() * 30);
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }
            ~Noodle() {
                delete meat;
                delete pea;
                delete mint;
            }
        };
        class Dovga : public Meal {
        protected:
            Egg* egg = new Egg;
            Rice* rice = new Rice;
            Greens* greens = new Greens("Gogerti");
            Mint* mint = new Mint;
            Yougurt* yougurt = new Yougurt;
        public:
            Dovga(const string name) :Meal(name) {
                setPrice(3);
                addIngredient(egg,2);
                addIngredient(rice,0,100);
                addIngredient(greens,4);
                addIngredient(mint,0,100);
                addIngredient(yougurt,0,300);
            }
            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = (egg->getKkal() * 2) + (rice->getKkal() * 100) + (greens->getKkal() * 4) + (mint->getKkal() * 100) + (yougurt->getKkal() * 300);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            ~Dovga() {
                delete egg;
                delete rice;
                delete mint;
                delete greens;
                delete yougurt;
            }
        };
        class ToyugSupu : public Meal {
        protected:
            Meat* chicken = new Meat("Toyug");
            Potato* potato = new Potato;
            Greens* greens = new Greens("Gogerti");
            Rice* rice = new Rice;
            Tomato* tomato = new Tomato;
        public:
            ToyugSupu(const string name) :Meal(name) {
                setPrice(5);
                addIngredient(chicken,1);
                addIngredient(potato,2);
                addIngredient(greens,2);
                addIngredient(rice,0,140);
                addIngredient(tomato,2);
            }
            void printKcal() {
                double kcal = (chicken->getKkal() * 1) + (potato->getKkal() * 2) + (greens->getKkal() * 2) + (rice->getKkal() * 140) + (tomato->getKkal() * 2);
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                Meal::printRecipe();
                cout << "Price : " << getPrice() << endl << endl;
            }
            ~ToyugSupu() {
                delete chicken;
                delete potato;
                delete greens;
                delete rice;
                delete tomato;
            }
        };
    }
 namespace Desertler {
        class Tort : public Meal {
        public:
            Tort(const string name) :Meal(name) {
                setPrice(8);
            }
            void printKcal() {
                double kcal = 572;
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
            ~Tort() {

            }
        };
        class CheeseCake : public Meal {
        public:
            CheeseCake(const string name) :Meal(name) {
                setPrice(7);
            }
            void printKcal() {
                double kcal = 400;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
            ~CheeseCake() {

            }
        };
        class HotChocolateCake : public Meal {
        public:
            HotChocolateCake(const string name) :Meal(name) {
                setPrice(7);
            }
            void printKcal() {
                double kcal = 410;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }
            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
    }
 namespace Drinks {
        class Fanta05l : public Meal {
        public:
            Fanta05l(const string name) :Meal(name) {
                setPrice(1);
            }
            void printKcal() {
                double kcal = 120;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
        class Fanta1l : public Meal {
        public:
            Fanta1l(const string name) :Meal(name) {
                setPrice(2);
            }
            void printKcal() {
                double kcal = 240;
                cout << "Calories in " << getName() << ":" << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
        class CocaCola05l : public Meal {
        public:
            CocaCola05l(const string name) :Meal(name) {
                setPrice(1);
            }
            void printKcal() {
                double kcal = 120;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
        class CocaCola1l : public Meal {
        public:
            CocaCola1l(const string name) :Meal(name) {
                setPrice(2);
            }
            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = 240;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

        };
        class Sprite05l : public Meal {
        public:
            Sprite05l(const string name) :Meal(name) {
                setPrice(1);
            }
            void printKcal() {
                double kcal = 120;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
        class Sprite1l : public Meal {
        public:
            Sprite1l(const string name) :Meal(name) {
                setPrice(2);
            }
            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
            void printKcal() {
                double kcal = 240;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

        };
        class PortagalShiresi1l : public Meal {
        public:
            PortagalShiresi1l(const string name) :Meal(name) {
                setPrice(4);
            }
            void printKcal() {
                double kcal = 440;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
        class MixedFruit1l : public Meal {
        public:
            MixedFruit1l(const string name) :Meal(name) {
                setPrice(4);
            }
            void printKcal() {
                double kcal = 540;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
        class AlmeShiresi1l : public Meal {
        public:
            AlmeShiresi1l(const string name) :Meal(name) {
                setPrice(4);
            }
            void printKcal() {
                double kcal = 440;
                cout << "Calories in " << getName() << " : " << kcal << endl;
            }

            void printRecipe() {
                cout << "Name : " << getName() << endl;
                cout << "Price : " << getPrice() << endl << endl;
            }
        };
    }
