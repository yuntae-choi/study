#pragma once
//�̸� �����ϵ� ���
#define WIN32_LEAN_AND_MEAN             // ���� ������ �ʴ� ������ Windows ������� �����մϴ�.

//��ó���� �ܰ迡�� ����
//���̺귯�� ���� ��ġ ����
#ifdef _DEBUG
#pragma comment(lib,"Debug\\ServerCore.lib")
#else
#pragma comment(lib,"Release\\ServerCore.lib")
#endif 

#include "CorePch.h"                     //ServerCore

