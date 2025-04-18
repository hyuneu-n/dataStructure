#define MAX 100 // 최대 데이터 100개 저장
#include <stdbool.h>

typedef struct listRecord
{
    int Count; // 리스트 길이(데이터 개수)를 추적
    int Data[MAX]; // 리스트 데이터는 정수형
} listType; // 리스트 타입은 구조체

void Insert(listType *Lptr, int Position, int Item); // 데이터 삽입
void Delete(listType *Lptr, int Position); // 데이터 삭제
void Retrieve(listType *Lptr, int Position, int *ItemPtr); // 데이터 검색

void Init(listType *Lptr); // 초기화
bool IsEmpty(listType *Lptr); // 비어있는지 확인
int Length(listType *Lptr); // 리스트 내 데이터 개수