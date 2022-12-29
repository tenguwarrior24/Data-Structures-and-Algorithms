#include <iostream>
#include <stdlib.h>

using namespace std;
template <typename T>

struct node{
    T item; node *next;
    node(T x, node *t){
        item = x; next = t;
    };
};

typedef node<int> *link;


link reverse(link x){
    link t= NULL, y=x, r;
    while(y){
        r = y->next; y->next = t; t = y; y = r;
    }
    return t;
}

int main(){
    link x = new node<int>(0,NULL);
    link t = x;
    for(int i =1; i < 10; i ++){
        t ->next = new node<int>(i,NULL);
        t = t->next;
    }
    for(link i = x; i != NULL; i = i->next){
        cout << i->item << " ";
    }
    cout << endl;
    x = reverse(x);
    for(link i = x; i != NULL; i = i->next){
        cout << i->item << " ";
    }
    
}