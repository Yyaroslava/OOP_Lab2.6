#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab2.6/Date.h"
#include "../OOP Lab2.6/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date::Triad a(3, 6, 12), b(3, 7, 11);
			Assert::AreEqual(a == b, false);
			Date::Triad c(10, 3, 19), d(10, 3, 21);
			Assert::AreEqual(c < d, true);
		}
	};
}
