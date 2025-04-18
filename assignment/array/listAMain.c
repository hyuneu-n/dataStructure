#include "listA.h"

int main(){
    listType L;
    Init(&L);
    for(int i=1;i<=10;i++)
        Insert(&L, i, i);
    for(int i=1;i<=10;i++)
        Retrieve(&L, i, &L);
    Length(&L);
    for(int i=1;i<10;i++){
        if(i%3==0)
            Delete(&L, i);
        else
            return 0;
    }
    for(int i=1;i<=10;i++)
        Retrieve(&L, i, &L);
    Length(&L);
}