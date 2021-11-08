#include <iostream>
#include <string>
#include <list>
using namespace std;
template<class T>
class Stack{
    list<T> data;
public:
    void push(T newItem){
        data.push_front(newItem);
    }
    T pop(){
        return data.pop_front();
    }
    T top()const {
        return  *data.begin();
    }
    bool isEmpty()const{
        return data.size() == 0;
    }
    int size() const{
        return data.size();
    }
    void clear(){
        data.clear();
    }
};
template<class T>
class Queue{
    list<T> data;
public:
    void enqueue(T newItem){
        data.push_back(newItem);
    }
    T dequeue(){
        return data.pop_front();
    }
    T top() const{
        return *data.begin();
    }
    bool isEmpty()const{
        return data.size()==0;
    }
    int size() const{
        return data.size();
    }
    void clear(){
        data.clear();
    }
};

int main(){
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    return 0;
}