// virus.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>]
#include <Windows.h>]
#include <conio.h>
#include <mmsystem.h>
#include <WinUser.h>
#include <random>
#include <thread>
#include <chrono>
#pragma comment(lib,"winmm.lib")
using namespace std;
int tpwt(std::string s, int t=0)
{
	for (const auto c : s) {
		std::cout << c << std::flush;
		if (t == NULL) { t = 6; }
		std::this_thread::sleep_for(std::chrono::milliseconds(t));
	}
	Sleep(50);
	return 0;
}

int space_wait()
{
	while (true)
	{
		if (_getch() == 32)
		{
			break;
		}
	}
	return 0;
}

int main()
{
	string input = "";
	int jinhang = 0;
	cout << "스페이스바를 눌러 넘기기.\n";
	tpwt("당신은 어딘가 이상한 방에서 깨어났습니다.\n주변은 어두컴컴하고 보이는 거라곤 작은 램프 뿐 입니다.\n");
first:
	cout << "입력 : ";
	cin >> input;
	cout << "\n";
	if (input == "램프")
	{
		tpwt("램프는 기름으로 동작하는 듯 해보이고, 구리로 만들어져 있습니다.\n");
		space_wait();
		tpwt("아마 키려면 불 붙일 도구가 필요할 듯 합니다.\n");
		space_wait();
		if (jinhang == 1)
		{
			tpwt("마침 당신은 성냥을 가지고 있었고 그것으로 불을 지폈습니다.\n");
			tpwt("그러자 좁은 독방과 같은 모습으 드러납니다.");
			space_wait();
			goto second;
		}
		goto first;
	}
	if (input == "둘러보기")
	{
		tpwt("바닥에 붉은 물체가 보입니다. 자세히 보니 성냥입니다.\n");
		space_wait();
		cout << "성냥을 얻었다\n";
		space_wait();
		jinhang = 1;
		goto first;
	}
second:
	system("cls");
seconds:
	cout << "(둘러보기)\n입력 : "; cin >> input;
	if (input == "둘러보기") 
	{
		tpwt("벽에는 여러 낙서들이 있습니다. \n「꺼내줘」「갇힌지 514일차」등등... 이런 불길한 것들이었습니다.\n");
		tpwt("그런데 당신을 가둘 목적이었다면 잠겨 있어야 할 문이 활짝 열려 있었습니다.\n");
		jinhang = 2;
		goto second;
	}
	

	

	
}