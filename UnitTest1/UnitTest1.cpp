#include "pch.h"
#include "CppUnitTest.h"
#include "../5.6/5.6.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t, s;
			t = 3;
			s = 4;
			double m = (f(t, s, 2) + f(1, s + t, t - s)) / (1 + pow(f(1, 1, t * t + s * s), 2));
			double expected = 6.97546;
			Assert::AreEqual(expected, m, 0.0001);
		}
	};
}
