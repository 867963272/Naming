#include <iostream>

// File name
//#include "class.hpp"
//#include "long_name_file.hpp"

// Define -->大体使わないほうがいい
#define DEFINE
#define TEST_DEFINE

// Globals -->大体使わないほうがいい
int g_GlobalVariable;
static int s_StaticVariable;
const int c_ConstVariable{};
constexpr int c_ConsteprVariable{};

namespace //cppの中なら、staticと一緒
{
	int variableName;
}

// Enum
enum ENUM // -- > 大体使わないほうがいい
{
	ONE, TWO, THREE_FOUR
};

// Enum Class // これを使ったほうがいい
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
	//先に関数
public:
	void PublicFunction();

protected:
	void ProtectedFunction();

private:
	void PrivateFunction();

	// 変数
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
	//変数の書き方 | 意味全部一緒
	int x1 = 0;
	int x2 = { 0 };
	int x3 = {};
	int x4{}; // -->これ

	//for
	for (int i{}; i != 10; ++i) // 0から9まで
	{
		//std::cout << i << std::endl;
	}

	std::cout << "Welcome to HAL-HEW Team!" << std::endl;

	// newとdelete と mallocとfree　使わない
	// Smart pointersを使って行く。
}