#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = t(0);
			Assert::AreEqual(a, 2.);
		}
	};
}
