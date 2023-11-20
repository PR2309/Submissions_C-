#include <ibits/stdc++.h>
using namespace std;

template<typename T>
class CustomQueue{
private:queue<T>internalQueue;
public:
    bool operator=(const CustomQueue<T>& otherQueue) const{return this->internalQueue==otherQueue.internalQueue;}
    void enqueue(const T& element){internalQueue.push(element);}
    void display() const{
        queue<T>tempQueue=internalQueue;
        while(!tempQueue.empty()){
            cout<<tempQueue.front()<<" ";
            tempQueue.pop();}}
};

int main(){
    CustomQueue<int>queue1,queue2;
    queue1.enqueue(1);
    queue1.enqueue(2);
    queue1.enqueue(3);
    queue2.enqueue(1);
    queue2.enqueue(2);
    queue2.enqueue(3);
    cout<<"\nQueue 1: ";
    queue1.display();
    cout<<"\nQueue 2: ";
    queue2.display();
    if(queue1=queue2){cout<<"\nThe queues are equal."<<endl;} 
    else{cout<<"\nThe queues are not equal."<<endl;}
    return 0;}
