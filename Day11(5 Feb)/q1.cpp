#include<iostream>
using namespace std;
class Queue{
    public:
    int *a;
    int front,rear;
    int size;
    Queue(int size){
        this->size=size;
        a=new int[size];
        front=-1;
        rear=-1;
    }
    bool isempty(){
        if(rear==front) return 1;
        return 0;
    }
    bool isfull(){
        if(rear==size-1) return 1;
        return 0;
    }
    void enqueue(int key){
        if(!isfull()){
            a[++rear]=key;
        }
        else{
            cout<<"\nQueue is overflowed"<<endl;
        }
    }
    void display(){
        if(!isempty()){
            for(int i=front+1;i<=rear;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            cout<<"\nQueue is underflowed"<<endl;
        }
    }

};
void multiinsert(Queue *q){
    int n,k;
    cout<<"\nEnter number of elements to enqueue: ";
    cin>>n;
    cout<<"\nEnter queue elements: ";
    for(int i=0;i<n;i++){
        cin>>k;
        q->enqueue(k);
    }
    cout<<"\nElement(s) inserted into queue"<<endl;
}
int main(){
    Queue* q=new Queue(100);
    int n,k;
    multiinsert(q);
    q->display();
    cout<<endl;
    return 0;
}