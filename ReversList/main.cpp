#include <QCoreApplication>
#include <iostream>
#include <vector>

class arr{
public :
    int value;
    arr* next;
};
void print(arr* head){
    arr* z= head;
    while (z!= NULL){
        std::cout<< z->value<<" ";
        z=z->next;
    }
    std::cout << std::endl;
}
void revers(arr* head, arr* previos){
     if (head==NULL){
         std::cout << std::endl;
         return;
     }
     revers(head->next, head);
     head->next= previos;
     return;
}
arr* altrevers(arr* head){
    std::vector<arr*> l;
    arr* z= head;
    while (z!=NULL){
        l.push_back(z);
        z=z->next;
    }
    for (int i =0; i< l.size()/2; i++){
        std::swap(l[i]->value, l[l.size()-1-i]->value);
    }
    std::cout<< l[0]->value;
    return l[0];
}

int main(int argc, char *argv[])
{
    arr* z = new arr();
    z->value = -1;
    arr* start = z;
    for (int i= 0; i<5; i++){
        z->next=new arr();
        z= z->next;
        z->value = i;
    }
    std::cout << "Fist List:"<< std::endl;
    print (start);
    arr* end= start;
    while (end->next!= NULL){
        end=end->next;
    }
    std::cout<< std::endl;
    std::cout <<"end:";
    std::cout<< std::endl;
    print (end);
    revers(start, NULL);
    std::cout << "Second List:"<< std::endl;
    print(end);

//    std::cout << start->value<<std::endl;
    return 0;
}
