#include <iostream>
#include <string>


//расстения
class Plants {
public:
    Plants(){}
    Plants(std::string name, int height) {
        Name = name;
        Height = height;
    }
    std::string getName() {
        return Name;
    }
    void setName(std::string name) {
        Name = name;
    }
    int getHeight() {
        return Height;
    }
    void setHeight(int height) {
        Height = height;
    }
    
    
    std::string Name;
    int  Height;//высота
};
//деревья
class Tress : public Plants {
public:
    Tress(){}
    Tress(std::string features,std::string name, int height) {
        Features = features;
        Name = name;
        Height = height;
    }
    void setFeatures(std::string features) {
        Features = features;
    }
    std::string getFeatures() {
        return Features;
    }

    void printT() {
        std::cout << "Класс дерева:\n" << getName() << "\n" << getFeatures() << "\n" << "Высота - " << getHeight() << "\n\n";
    }


    std::string Features;//свойства
};
//кусты
class Bushes : public Plants {
public:
    Bushes(){}
    Bushes(std::string type, std::string name, int height) {
        Type = type;
        Name = name;
        Height = height;
    }
    void setType(std::string type) {
        Type = type;
    }
    std::string getType() {
        return Type;
    }
    
    void printB() {
        std::cout << "Класс кустарника:\n" << getName() << "\n" << getType() << "\n" << "Высота - " << getHeight() << "\n\n";
    }
    
    std::string Type;//тип
};
//плоды
class Seeds : public Tress, Bushes {
public:
    Seeds(){}
    Seeds(std::string name, int weight) {
        Name = name;
        Weight = weight;
    }
    void setName(std::string name) {
        Name = name;
    }
    std::string getName() {
        return Name;
    }
    void setWeight(int weight) {
        Weight = weight;
    }
    int getWeight() {
        return Weight;
    }


    std::string Name;
    int Weight;
    
};
//фрукты
class Fruits : public Seeds,Tress {
public:
    Fruits(){}
    Fruits(std::string taste) {
        Taste = taste;
    }
    void setTaste(std::string taste) {
        Taste = taste;
    }
    std::string getTaste() {
        return Taste;
    }


    std::string Taste;
};
//ягоды
class Berries : public Seeds,Bushes {
public:
    Berries(){}
    Berries(std::string color) {
        Color = color;
    }
    void setColor(std::string color) {
        Color = color;
    }
    std::string getColor() {
        return Color;
    }


    std::string Color;
};

int main(){
    setlocale(LC_ALL, "ru");
    using namespace std;
    
    
    Tress tr;
    Tress tr2 = {"Хвойное", "Ель", 300};
    tr.setFeatures("Лиственное");
    tr.setHeight(150);
    tr.setName("Яблоня");
    tr.printT();
    tr2.printT();
    
    Bushes bs;
    Bushes bs2 = {"Ягодное", "Облепиха", 150};
    bs.setName("Смородина");
    bs.setType("Ягодное");
    bs.setHeight(90);
    bs.printB();
    bs2.printB();
    
    
    
}