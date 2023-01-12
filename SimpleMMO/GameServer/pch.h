#pragma once
//미리 컴파일된 헤더
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.

//전처리기 단계에서 실행
//라이브러리 파일 위치 설정
#ifdef _DEBUG
#pragma comment(lib,"Debug\\ServerCore.lib")
#else
#pragma comment(lib,"Release\\ServerCore.lib")
#endif 

#include "CorePch.h"                     //ServerCore

