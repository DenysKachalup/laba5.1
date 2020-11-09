#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s = 3;
			int t = 4;
			int c = g(1, s) + (1 + (g(t, 1) * (t, 1)) * (1 + (g(t, 1) * (t, 1))) / 1 + g(s + t, 1) * (s + t, 1) * (s + t, 1));
			
			Assert::AreEqual(c,533);
		}
	};
}
