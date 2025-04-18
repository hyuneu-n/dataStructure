#define MAX 100
#include <stdbool.h>

typedef struct { 
    int Count;// Count 값: 0, 1, 2 등 <-- 리스트안에 있는 의미 있는 값의 개수
    int Data[MAX]; // 리스트안에 들어있는 데이터
} listType; 

// Lptr이 가리키는 리스트의 Position 번째 원소로 Item 값을 삽입
// Position은 1번째부터 시작함
void Insert(listType *Lptr, int Position, int Item); 
// Lptr이 가리키는 리스트의 Position 번째 원소를 삭제
void Delete(listType *Lptr, int Position); 
// Lptr이 가리키는 리스트의 Position 번째 원소를 읽어서 ItemPtr이 가리키는 곳에 저장
void Retrieve(listType *Lptr, int Position, int *ItemPtr); 
// Lptr이 가리키는 리스트를 초기화. 즉, 리스트의 Count 값을 0으로 설정
void Init(listType *Lptr);
// Lptr이 가리키는 리스트가 비어있으면 True를 그렇지 않으면 False를 반환
bool IsEmpty(listType *Lptr); 
// Lptr이 가리키는 리스트에 저장되어 있는 원소 갯수를 반환
int Length(listType *Lptr);