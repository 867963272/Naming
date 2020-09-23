#include <iostream>

// File name
//#include "class.hpp"
//#include "long_name_file.hpp"

// Define -->��̎g��Ȃ��ق�������
#define DEFINE
#define TEST_DEFINE

// Globals -->��̎g��Ȃ��ق�������
int g_GlobalVariable;
static int s_StaticVariable;
const int c_ConstVariable{};
constexpr int c_ConsteprVariable{};

namespace //cpp�̒��Ȃ�Astatic�ƈꏏ
{
	int variableName;
}

// Enum
enum ENUM // -- > ��̎g��Ȃ��ق�������
{
	ONE, TWO, THREE_FOUR
};

// Enum Class // ������g�����ق�������
enum class Enum
{
	One, Two, ThreeFour
};

// Struct
struct Struct
{
	int publicVariable;
	static int staticVariable;
	const int constVariable;
};

// Class
class Class
{
	//��Ɋ֐�
public:
	void PublicFunction();

protected:
	void ProtectedFunction();

private:
	void PrivateFunction();

	// �ϐ�
public:
	int publicVariable;

protected:
	int m_ProtectedVariable;

private:
	int m_PrivateVariable;
};

// Function
void SomeFunction(int paramName)
{
	int localVariable;
}

int main()
{
	//�ϐ��̏����� | �Ӗ��S���ꏏ
	int x1 = 0;
	int x2 = { 0 };
	int x3 = {};
	int x4{}; // -->����

	//for
	for (int i{}; i != 10; ++i) // 0����9�܂�
	{
		//std::cout << i << std::endl;
	}

	std::cout << "Welcome to HAL-HEW Team!" << std::endl;

	// new��delete �� malloc��free�@�g��Ȃ�
	// Smart pointers���g���čs���B
}