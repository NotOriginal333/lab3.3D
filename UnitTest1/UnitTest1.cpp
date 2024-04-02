#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3D/Triad.h"
#include "../lab3.3D/Triad.cpp"
#include "../lab3.3D/TimeO.h"
#include "../lab3.3D/TimeO.cpp"
#include "../lab3.3D/TimeC.h"
#include "../lab3.3D/TimeC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triad tr1(1, 2, 3);
			int t = tr1.getHour();
			Assert::AreEqual(1, t);
		}
	};
}
