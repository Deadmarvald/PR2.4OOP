#include "pch.h"
#include "CppUnitTest.h"
#include "../PR2.4/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT24
{
	TEST_CLASS(UT24)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector a, b;
			b.AddElem(3);
			b.AddElem(1);
			
			Assert::AreEqual(b.Norma(), sqrt(4));
		}
	};
}