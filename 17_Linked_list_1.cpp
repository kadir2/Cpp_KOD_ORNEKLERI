#include <iostream>

using namespace std;



class Node{
    public:
    int data;
    Node* next;

};


int main(){
    Node* head = NULL;
    Node* iki = NULL;
    Node* uc = NULL;
    Node* dort = NULL;
    Node* bes = NULL;


    head = new Node();
    iki = new Node();
    uc = new Node();
    dort = new Node();
    bes = new Node();

    head->data = 1;
    head->next = iki;

    iki->data = 2;
    iki->next = uc;

    uc->data = 3;
    uc->next = dort;

    dort->data = 4;
    dort->next = bes;

    bes->data = 5;
    bes->next = NULL;
    

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }



return 0;
}
