#include <iostream>

using namespace std;
// class object
class Vehicle{

private:
    //private variables , data members
    string powerSource;
    int numOfWheels;
    float price;

public:
    //constructor prototype
    Vehicle();
    Vehicle(string powerSource, int numOfWheels, float price);
    //mutator, accessor prototypes
    void setPowerSource(string);
    string getPowerSource();
    void setNumOfWheels(int);
    int getNumOfWheels();
    void setPrice(float);
    float getPrice();

    //virtual display
    virtual void display(){
        cout<<"The vehicle's power source is: "<<powerSource<<endl;
        cout<<"The number of wheels on this vehicle is: "<<numOfWheels<<endl;
        cout<<"The price of this vehicle is: "<<price<<endl;
    }

};
Vehicle::Vehicle(string powerSource, int numOfWheels, float price){
    this->powerSource = powerSource;
    this->numOfWheels = numOfWheels;
    this->price = price;
}

//constructor
Vehicle::Vehicle(){
    powerSource = "";
    numOfWheels = 0;
    price = 0;
}

//child class
class Sailboat:public Vehicle{
    //private variables , datamembers
private:
    int length;

public:
    //construcor prototype
    Sailboat(string powerSource, int numOfWheels, float price, int length):Vehicle(powerSource, numOfWheels,  price), length(length){}
    //mutator, accessor prototypes
    void setLength(int);
    int getLength();

    //virtual display
    void display(){
        cout<<"The boats's power source is: "<<getPowerSource()<<endl;
        cout<<"The number of wheels on this boat is: "<<getNumOfWheels()<<endl;
        cout<<"The price of this boat is: "<<getPrice()<<endl;
        cout<<"The length is: "<<length<<" feet"<<endl;
    }
};
//child class 2
class Car:public Vehicle{

private:
    //private variables , datamembers
    string color;
    string manufacturer;

public:
    //constrcor prototype
    Car(string powerSource, int numOfWheels, float price, string color, string manufacturer):Vehicle(powerSource, numOfWheels,  price), color(color), manufacturer(manufacturer){}
    //mutator, accessor prototypes
    void setColor(string);
    string getColor();
    void setManufacturer(string);
    string getManufacturer();

    //virtual display
    void display(){
        cout<<"The car's power source is: "<<getPowerSource()<<endl;
        cout<<"The number of wheels on this car is: "<<getNumOfWheels()<<endl;
        cout<<"The price of this car is: "<<getPrice()<<endl;
        cout<<"the color is: "<<color<<endl;
        cout<<"The manufacturer is: "<<manufacturer<<endl;
    }
};

//child class 3
class Bicycle:public Vehicle{
public:
    Bicycle(string powerSource, int numOfWheels, float price):Vehicle(powerSource, numOfWheels,  price){}

    void display(){
        cout<<"The bicycle has: "<<getPowerSource()<<endl;
        cout<<"the bicycle has: " <<getNumOfWheels()<<endl;
        cout<<"the bicycle costs: " <<getPrice()<<endl;
    }
};

//mutator, accessors functions
void Vehicle::setPowerSource(string p){
    powerSource = p;
}
string Vehicle::getPowerSource(){
    return powerSource;
}

void Vehicle::setNumOfWheels(int n){
    numOfWheels = n;
}
int Vehicle::getNumOfWheels(){
    return numOfWheels;
}

void Vehicle::setPrice(float pr){
    price = pr;
}
float Vehicle::getPrice(){
    return price;
}

void Sailboat::setLength(int l){
    length = l;
}
int Sailboat::getLength(){
    return length;
}

void Car::setColor(string c){
    color = c;
}
string Car::getColor(){
    return color;
}

void Car::setManufacturer(string m){
    manufacturer = m;
}
string Car::getManufacturer(){
    return manufacturer;
}
// end mutator, accessors functions
//output function that uses a pointer to to reference the dispaly() function.
void output(Vehicle *oPtr){ // using object pointers
    oPtr->display(); // when using an object pointer to point
}

int main(int argc, char** argv) {
    //class objects with perameters/arguments passed
    Vehicle *vehicle = new Vehicle("engine", 2, 20000.00);
    Sailboat *sailboat = new Sailboat("engine", 0, 10000, 12);
    Car *car = new Car("engine", 0, 10000,"red", "ford");
    Bicycle *bike = new Bicycle("feet", 2, 200.00);

    //class object output
    output(vehicle);
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    output(sailboat);
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    output(car);
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    output(bike);

    return 0;
}