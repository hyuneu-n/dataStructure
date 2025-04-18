#include "listA.h" //리스트를 구현한 인터페이스 파일 포함
#include <stdio.h>

int main() {
    listType L; // 리스트 L 생성
    Init(&L); // 리스트 초기화

    // 1부터 10까지 Insert
    for (int i = 1; i <= 10; i++) {
        Insert(&L, i, i); // i번째 위치에 i값 삽입
    }

    // 리스트 내용 출력
    printf("=== 리스트 전체 출력 (삽입 완료 후) ===\n");
    int len = Length(&L); // 현재 리스트 길이 구함
    int result;
    for (int i = 1; i <= len; i++) {
        Retrieve(&L, i, &result); // i번째 값 출력
    }

    // 3, 6, 9번째 원소 삭제
    Delete(&L, 9); //먼저 9번째 삭제 (뒤부터 삭제해야 인덱스 밀림 없음)
    Delete(&L, 6);
    Delete(&L, 3);

    // 삭제 후 리스트 출력
    printf("\n=== 리스트 전체 출력 (삭제 후) ===\n");
    len = Length(&L); // 삭제 이후 리스트 길이 갱신
    for (int i = 1; i <= len; i++) {
        Retrieve(&L, i, &result); // i번째 값 출력
    }

    return 0;
}