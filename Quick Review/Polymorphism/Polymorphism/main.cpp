//
//  main.cpp
//  Polymorphism
//
//  Created by Meilei Jiang on 12/27/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Animal{

public:
    void getFamily() { cout << "We are animals!" << endl;}
    virtual void getClass() { cout << "I am an animal!" << endl;}
    virtual void makeSound() { cout <<"The animal says hehe! "<<endl;}
    
};

class Dog: public Animal{
public:
    void getClass() { cout << "I am a dog!" << endl;}
    void makeSound() { cout <<"The dog says woof!"<<endl;}
    
};

class GermanShepard: public Dog{
    
public:
    void getClass() { cout << "I am a GermanShepard \n";}
    void getDerived() { cout <<"I am an anaimal and a dog \n";}

};

class Cat: public Animal{
public:
    void getClass() { cout << "I am a cat!" << endl;}
    void makeSound() { cout <<"The cat says mew!"<<endl;}
};

void whatClassAreYou(Animal *animal){

    animal -> getClass();
    
}

// Abstract Data Type

class Car{
public:
    virtual void getNumWheels(){};
    virtual void getNumDoors(){};
};

class StationWagon: public Car{

public:
    void getNumWheels(){cout << "Station wagon has 4 wheels"<<endl;}
    void getNumDoors(){cout << "Station wagon has 4 doors"<<endl;}
    StationWagon(){};
    ~StationWagon(){};
};

int main() {
    // Virtual method
    Animal* Monkey = new Animal;
    Dog* Pluto = new Dog;
    Cat* Mimi = new Cat;
    Animal* Tom = new GermanShepard;
    GermanShepard* Lily = new GermanShepard;
    
    Monkey ->getFamily();
    Monkey ->getClass();
    Pluto ->getClass();
    Tom ->getFamily();
    Tom ->getClass();
    Tom ->makeSound();
    Mimi ->makeSound();
    Lily ->getDerived();
    Lily ->getFamily();
    Lily ->getClass();
    
    whatClassAreYou(Monkey);
    whatClassAreYou(Pluto);
    whatClassAreYou(Mimi);
    whatClassAreYou(Tom);
    whatClassAreYou(Lily);
    
    //Abstract Data Type
    StationWagon* wagonPtr = new StationWagon;
    wagonPtr->getNumDoors();
    wagonPtr->getNumWheels();
    
    return 0;
}
