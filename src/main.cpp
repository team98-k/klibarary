#include <iostream>
<<<<<<< HEAD
#include <cctype>
=======
#include "hashtable.h"
#include "Point.h"
>>>>>>> 6e22edc86712a64781b4fcee8c3ce15516ac72ac
#include "hashtable_2.h"
using namespace std;

int main()
{
<<<<<<< HEAD
    // Start of (std::string) 해시테이블
    hashtable::hashtable <int>table(10); // 크기 '10' 만큼을 가진 int형 해시테이블 생성
    
    table.save(10, "number1"); // 10을 키 값 "number1" 으로 해시테이블에 저장.
    table.save(20, "number2"); // 20을 키 값 "number2" 으로 해시테이블에 저장.

    const auto* value = table.load("number1"); // 키 값 "number1" 으로 해시테이블에서 저장된 데이터 10의 주소를 가져와 value에 저장함.

    // 데이터를 불러올 때 데이터에 값이 없거나 정상적으로 불러오지 못하면 nullptr을 반환하므로 프로그램이 멈추기 전에 return 해야 함.
    if (!value) {
        cout << "value is nullptr." << endl;
        return 0;
    }

    cout << "value result : " << *value << endl; // value의 값 출력.

    table.tablelist(false); // 해시테이블에 저장된 모든 정보 출력.
    // End of (std::string) 해시테이블
=======
    ShowData<char, double>(65);

    Array<Point<int>> orr1(3);
    orr1[0]=Point<int>(3, 4);
    orr1[1]=Point<int>(5, 6);
    orr1[2]=Point<int>(7, 8);

    for(int i=0; i<orr1.GetArrLen(); i++)
        orr1[i].ShowPosition();
>>>>>>> 6e22edc86712a64781b4fcee8c3ce15516ac72ac

    return 0;
}