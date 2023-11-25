#include<iostream>
using namespace std;
class Animal {
    int age;
    int weight;
    public:
    // default constructor
    Animal(){
        cout<<"Default constructor called"<<endl;
    }
    // parameterized constructor
    Animal(int age){
        this->age = age;
        cout<<"Parameterized constructor called"<<endl;
    }
    Animal(int age, int weight){
        this->age = age;
        this->weight=weight;
        cout<<"Parameterized constructor with 2 args called"<<endl;
    }
    // Copy constructor
    Animal(Animal& obj){
        this->age = obj.age;
        cout<<"Copy constructor called";
    }
};
int main(){
    Animal suresh; // Default constructor
    Animal ramesh(30); // Parameterized constructor
    Animal surfgesh(19,32);
    Animal copy(suresh); // Copy constructor
    return 0;
}