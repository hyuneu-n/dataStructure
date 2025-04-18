typedef struct nodeRecord {
    int Data;
    nodeRecord *Next;
} node;

typedef node *Nptr;
typedef struct {
    int Count;
    Nptr Head;
} listType;

 void Insert(listType *Lptr, int Position, int Item); 
 // Lptr이 가리키는 리스트의 Position 번째 원소로 Item 값을 삽입ㄴ
 // Position은 1번째부터 시작함
 void Delete(listType *Lptr, int Position); 
 // Lptr이 가리키는 리스트의 Position 번째 원소를 삭제
 void Retrieve(listType *Lptr, int Position, int *ItemPtr); 
 // Lptr이 가리키는 리스트의 Position 번째 원소를 읽어서 ItemPtr이 가리키는 곳에 저장할 것
 void Init(listType *Lptr); 
 // Lptr이 가리키는 리스트를 초기화할 것. 즉, 리스트의 Count 값을 0으로 할 것
 bool IsEmpty(listType *Lptr); 
 // Lptr이 가리키는 리스트가 비어있으면 True를 그렇지 않으면 False를 반환할 것
 int Length(listType *Lptr);
 // Lptr이 가리키는 리스트에 저장되어 있는 원소 갯수를 반환할 것