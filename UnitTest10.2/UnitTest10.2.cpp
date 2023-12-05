#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB10.2/LAB10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest102
{
	TEST_CLASS(UnitTest102)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			using namespace std;

			string fileName = "test.txt";
			ofstream file(fileName);
			file << "abc def abc\n";
			file.close();

			bool result = hasWordStartingWithA(fileName);

			Assert::IsTrue(result);
		}
	};
}
