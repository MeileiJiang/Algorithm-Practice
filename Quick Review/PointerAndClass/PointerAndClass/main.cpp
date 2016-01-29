//
//  main.cpp
//  PointerAndClass
//
//  Created by Meilei Jiang on 12/25/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void makeMeYoung(int* age){
    
    cout << "I used to be " << *age << endl;
    *age = 21;

}

void actYourAge(int& age){
    
    age = 39;
    
}

class Animal{
private:
    int height;
    int weight;
    string name;
    
    static int numOfAnimals;
    
public:
    int getHeight(){return height;}
    int getWeight(){return weight;}
    string getName(){return name;}
    
    void setHeight(int cm){ height = cm;}
    void setWeight(int kg){ weight = kg;}
    void setName(string animalName) {name = animalName;}
    
    Animal(int,int,string);
    
    ~Animal(); // destructor
    
    Animal(); //constructor
    
    static int getNumOfAnimals() {return numOfAnimals;}
    
    void toString();

};

int Animal::numOfAnimals = 0;


Animal::Animal(int height, int weight, string name){
    
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    Animal::numOfAnimals++;
    
}

Animal::~Animal(){
    
    cout << "Animal "<< this -> name << " destroy\n";

}

Animal::Animal(){
    
    Animal::numOfAnimals++;

}

void Animal::toString(){
    
    cout << this -> name << " is " << this -> height <<
    "cms in height and " << this -> weight << "kg in weight. \n";
    
}

class Dog: public Animal{
    
private:
    string sound = "Woof";
    
public:
    void getSound() {cout << sound << endl;}
    
    Dog(int, int, string, string);
    
    Dog() : Animal(){};
    
    void toString();
    
};

Dog::Dog(int height, int weight, string name, string bark):
Animal(height, weight, name){

    this -> sound = bark;
    
}

void Dog::toString(){

    cout << this -> getName() << " is " << this -> getHeight() <<
    "cms in height and " << this -> getWeight() << "kg in weight and says " <<
    this -> sound << ".\n";
}

int main() {
    // Pointer
    
    int myAge = 39;
    char myGrade = 'A';
    
    int* agePtr = &myAge;
    
    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;
    
    cout << "myAge is located at" << &myAge << endl;
    
    cout << "Address of Pointer " << agePtr << endl;
    cout << "Data at memory address " << *agePtr << endl;
    
    int badNums[5] = {4, 13, 14, 24, 34};
    
    int* numArrayPtr = badNums;
    
    cout << "Address: " << numArrayPtr << " Value: " << *numArrayPtr << endl;
    
    numArrayPtr++;
    
    cout << "Address: " << numArrayPtr << " Value: " << *numArrayPtr << endl;
    
    makeMeYoung(&myAge);
    
    cout << "I'm " << myAge << " years old now." << endl;
    
    int& ageRef = myAge;
    
    cout << "myAge: "<< myAge << endl;
    
    ageRef++;
    
    cout << "myAge: "<< myAge << endl;
    
    actYourAge(ageRef);

    cout << "myAge: "<< myAge << endl;
    
    //Class
    
    Animal Rui;
    
    Rui.setHeight(155);
    Rui.setWeight(52);
    Rui.setName("Rui");
    
    cout << Rui.getName() << " is " << Rui.getHeight() << "cms in height and " <<
    Rui.getWeight() << "kg in weight. \n";
    
    Rui.toString();
    
    Animal Meilei(168, 61, "Meilei");
    
    Meilei.toString();
    
    //Direved Class
    
    Dog tuitui(50, 20, "tuitui", "Googoo");
    
    tuitui.toString();
    tuitui.Animal::toString();
    
    
    
    cout << "Number of animals: "<< Animal::getNumOfAnimals() << endl;
    
    return 0;
}
