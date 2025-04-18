#include "listB.h"

void Insert(listType *Lptr, int Position, int Item){
    if (Position < 1 || Position > (Lptr->Count+1)){
        printf("Position out of Range");
    }
    else{
        Nptr p = (node*)malloc(sizeof(node));
        if (Position == 1){
            p->Data = Item;
            p->Next = Lptr->Head;
            Lptr->Head = p;
        }
        else{
            Nptr tmp = Lptr->Head;
            for(int i; i<(Position-1); i++)
                tmp = tmp->Next;
            p->Next = tmp->Next;
            tmp->Next = p;
        }
        Lptr->Count += 1;
    }
}

void Delete(listType *Lptr, int Position){

}

void Retrieve(listType *Lptr, int Position, int *Itemptr){

}

void Init(listType *Lptr){
    Lptr->Count = 0;
    Lptr->Head  = NULL;
}

bool IsEmpty(listType *Lptr){
    return (Lptr->Count == 0);
}

int Length(listType *Lptr){
    return (Lptr->Count);
}