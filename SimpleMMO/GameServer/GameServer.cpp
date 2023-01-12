#include "pch.h"
#include <iostream>
#include "CorePch.h"

//window 라이브러리로 thread 생성시 리눅스로 옮겼을 때 문제가 생기기에 
//c++11 라이브러리의 표준 thread을 사용
#include <thread> 

int main()
{
	std::thread t;

	//5가지 쓰레드 함수
	int32 count = t.hardware_concurrency(); // cpu 코어 개수 (단 정확하지 않음)
    auto id = t.get_id();                   // 쓰레드 마다 부여되는 id
	t.detach();                             // 쓰레드 객체에서 실제 쓰레드를 분리
	t.joinable();                           // 쓰레드가 있는지 없는지 판별 실제 join을 할수있는지 판별
	t.join();                               // 쓰레드 종료될때까지 대기

}
