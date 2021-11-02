#include <iostream>
#include <string>
using namespace std;
class Pet{// base class
    string name;
    int petID;
public:
    Pet(int newID = 0){
        petID = newID;
    }
    string getName() const{
        return name;
    }
    void setName(string newName){
        name = newName;
    }
    void speak() const {};// Pure virtual function
};
class Cat: public Pet{//Cat is a pet //derived class
    double whiskerLength;
public:
    Cat(): Pet(10000) {}// explicit call to BASE constructor
    void speak() const {
        cout<<"MEOW!"<<endl;
        }
    void setLength (double newLength);
    double getLength() const{
        return whiskerLength;
    }
    void setName (string newName);
    Cat& operator=(const Pet&);
};
class Dog : public Pet{
    double earSize;
public:
    Dog(): Pet(20000){}
    void speak() const{ cout<<"WOOF!"<<endl;}
    void setSize( double newSize){
        earSize = newSize;
    }
    double getSize()const{return earSize;}
};
int main(){
    Pet** pArray = new Pet*[3];
    pArray[0] = new Cat();
    pArray[1] = new Dog();
    pArray[2] = new Cat();
    for (int i = 0; i < 3; i++){
        pArray[i] ->speak(); //MEOW, WOOF, MEOW
    }
    return 0;
}