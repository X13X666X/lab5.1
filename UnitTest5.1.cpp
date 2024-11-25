#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Lorn\source\repos\lab5.1\5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 2;
			double expectation = f(x);
			double achou = 7;
			Assert::AreEqual(expectation, achou);
		}
	};
}