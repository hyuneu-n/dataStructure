#include "listA.h" // 헤더파일을 포함
#include <stdio.h>
#include <stdbool.h>

void Init(listType *Lptr){ // 초기화 루틴
    Lptr->Count = 0; // 데이터 수를 0으로 세팅
}

bool IsEmpty(listType *Lptr){ // 비어있는지 확인하는 함수
    return (Lptr->Count == 0); // 빈 리스트라면 TRUE
}

int Length(listType *Lptr){
    // return sizeof((Lptr->Data))/sizeof(int);
    return Lptr->Count;
}

void Insert(listType *Lptr, int Position, int Item){ // 삽입 함수
    if (Lptr->Count == MAX) // 현재 꽉찬 리스트 //요게 힙공간에 공간이 없는 예외처리인지 확인 필요
        printf("List Full");
    else if ((Position > (Lptr->Count+1)) || Position < 1) 
        printf("Position out of Range"); // 이격된 삽입위치 불허
    else {
        for (int i = (Lptr->Count)-1; i >= (Position-1); i--){ // 끝에서부터 삽입위치까지
            Lptr->Data[i] = Lptr->Data[i-1]; // 오른쪽으로 한 칸씩 이동
        }
        Lptr->Data[Position-1] = Item; // 원하는 위치에 삽입
        Lptr->Count++; // 리스트 길이 늘림
        printf("Insert Completed");
    }
}

void Delete(listType *Lptr, int Position){
    if ((Position > (Lptr->Count+1)) || Position < 1)
        printf("Position out of Range");
    else if (Lptr -> Count == 0)
        printf("List is empty");
    else{
        for (int i = Position-1; i <=(Lptr->Count-1); i++)
            Lptr->Data[i] = Lptr->Data[i+1];
        Lptr->Count--;
        printf("Delete Completed");
    }
}

void Retrieve(listType *Lptr, int Position, int *Itemptr){
    if ((Position > (Lptr->Count+1)) || Position < 1)
        printf("Position out of Range");
    else if ((Position > (Lptr->Count+1)) || Position < 1)
        printf("Position out of Range");
    else{
        printf(Lptr->Data[Position-1]);
        printf("\n");
    }
}

int main(){
    listType List1;
    int Result;
    Insert(&List1, 1, 23);
    Retrieve(&List1, 1, &Result);
    Insert(&List1, 2, 233);
}