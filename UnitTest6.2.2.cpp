#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5];
			Create(a, 5, -10, 10, 0);
			Assert::AreEqual(a[0], 10, 0);
		}
	};
}
