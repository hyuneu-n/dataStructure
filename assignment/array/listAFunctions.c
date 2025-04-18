#include "listA.h" // 리스트 관련 헤더파일 포함  
#include <stdio.h> // 표준 입출력 함수 사용을 위해 포함  
#include <stdbool.h> // bool 타입 사용을 위해 포함  

void Init(listType *Lptr) { // Lptr이 가리키고 있는 리스트를 초기화 시킴
    Lptr->Count = 0; // 리스트의 카운트를 0으로 초기화  
}  

bool IsEmpty(listType *Lptr) {  
    return (Lptr->Count == 0);  // Lptr이 가리키고 있는 리스트가 비어있으면 ‘참‘을 '비어있지 않으면 ’거짓‘을 반환
}  

int Length(listType *Lptr) {  
    return Lptr->Count; // Lptr이 가리키고 있는 리스트에 들어 있는 의미있는 값의 개수를 반환
}  

//Item이라는 data를 Position번째에 삽입
void Insert(listType *Lptr, int Position, int Item) { 
    if (Lptr->Count == MAX) // 리스트가 가득 찼을 경우  
        printf("List Full\n"); // 경고 메시지 출력  
    else if ((Position > (Lptr->Count + 1)) || Position < 1) //Position 범위가 올바르지 않을 때
        printf("Position out of Range\n"); // 경고 메시지 출력 
    else { 
        //Position번째의 공간을 비우는 작업
        for (int i = Lptr->Count - 1; i >= Position - 1; i--)// 맨 뒤에서부터 Position번째까지
            Lptr->Data[i + 1] = Lptr->Data[i]; // 한칸씩 이동
        Lptr->Data[Position - 1] = Item; //Position번째에 Item 값을 저장
        Lptr->Count++; // 리스트의 개수 하나 증가
    }  
}

//Position번째의 data를 삭제
void Delete(listType *Lptr, int Position) {
    if (Lptr->Count == 0)  //삭제할 값이 없는 경우 경고 메시지 출력
        printf("List is Empty\n");
    else if ((Position > Lptr->Count) || Position < 1) //Position 범위가 올바르지 않을 때
        printf("Position out of Range\n"); // 경고 메시지 출력  
    else {
        for (int i = Position - 1; i < Lptr->Count - 1; i++) //삭제 위치 다음부터 끝까지 반복
            Lptr->Data[i] = Lptr->Data[i + 1];//한칸씩 앞으로 보냄
        Lptr->Count--; //리스트의 개수를 하나 감소
    }
}

void Retrieve(listType *Lptr, int Position, int *Itemptr) {  
    if (Lptr->Count == 0) // 리스트가 비어있는 경우  
        printf("List is Empty\n"); // 경고 메시지 출력  
    else if ((Position > Lptr->Count) || Position < 1) //Position범위가 올바르지 않을때
        printf("Position out of Range\n"); // 경고 메시지 출력  
    else {
        *Itemptr = Lptr->Data[Position - 1]; //Position번째의 data를 Itemptr이 가리킴
    }  
} 