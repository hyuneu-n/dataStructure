#include "listA.h" // 리스트 관련 헤더파일 포함  
#include <stdio.h> // 표준 입출력 함수 사용을 위해 포함  
#include <stdbool.h> // bool 타입 사용을 위해 포함  

void Init(listType *Lptr) {  
    Lptr->Count = 0; // 리스트의 카운트를 0으로 초기화  
}  

bool IsEmpty(listType *Lptr) {  
    return (Lptr->Count == 0); // 리스트가 비어있으면 true 반환  
}  

int Length(listType *Lptr) {  
    return Lptr->Count; // Lptr이 가리키고 있는 리스트에 들어 있는 의미있는 값의 개수를 반환
}  

void Insert(listType *Lptr, int Position, int Item) {  
    if (Lptr == NULL) // 리스트 포인터가 NULL일 경우  
        printf("List pointer is NULL\n"); // 경고 메시지 출력  
    else if (Lptr->Count == MAX) // 리스트가 가득 찼을 경우  
        printf("List Full\n"); // 경고 메시지 출력  
    else if ((Position > (Lptr->Count + 1)) || Position < 1) // 삽입 위치가 유효하지 않을 경우  
        printf("Position out of Range\n"); // 경고 메시지 출력  
    else {  
        for (int i = Lptr->Count - 1; i >= Position - 1; i--)  
            Lptr->Data[i + 1] = Lptr->Data[i]; // 데이터를 오른쪽으로 한 칸씩 이동  
        Lptr->Data[Position - 1] = Item; // 원하는 위치에 값 삽입  
        Lptr->Count++; // 데이터 개수 증가  
        printf("Insert Completed\n"); // 완료 메시지 출력  
    }  
}  

void Delete(listType *Lptr, int Position) {  
    if (Lptr == NULL) // 리스트 포인터가 NULL일 경우  
        printf("List pointer is NULL\n"); // 경고 메시지 출력  
    else if (Lptr->Count == 0) // 리스트가 비어있을 경우  
        printf("List is Empty\n"); // 경고 메시지 출력  
    else if ((Position > Lptr->Count) || Position < 1) // 삭제 위치가 유효하지 않을 경우  
        printf("Position out of Range\n"); // 경고 메시지 출력  
    else {  
        for (int i = Position - 1; i < Lptr->Count - 1; i++)  
            Lptr->Data[i] = Lptr->Data[i + 1]; // 데이터를 왼쪽으로 한 칸씩 이동  
        Lptr->Data[Lptr->Count - 1] = 0; // 마지막 쓰레기 값 제거  
        Lptr->Count--; // 데이터 개수 감소  
        printf("Delete Completed\n"); // 완료 메시지 출력  
    }  
}  

void Retrieve(listType *Lptr, int Position, int *Itemptr) {  
    if (Lptr == NULL) // 리스트 포인터가 NULL일 경우  
        printf("List pointer is NULL\n"); // 경고 메시지 출력  
    else if (Lptr->Count == 0) // 리스트가 비어있는 경우  
        printf("List is Empty\n"); // 경고 메시지 출력  
    else if ((Position > Lptr->Count) || Position < 1) // 위치가 유효하지 않을 경우  
        printf("Position out of Range\n"); // 경고 메시지 출력  
    else {  
        *Itemptr = Lptr->Data[Position - 1]; // 해당 위치의 데이터를 포인터에 저장  
        printf("Retrieved Item: %d\n", *Itemptr); // 값을 출력  
    }  
} 