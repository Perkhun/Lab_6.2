#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5];
			Create(a, 5, -10, 10);
			Assert::AreEqual(a[0], 10);


		}
	};
}
