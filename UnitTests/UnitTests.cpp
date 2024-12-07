#include "pch.h"
#include "CppUnitTest.h"
#include "../Labwork-4/Labwork4.cpp"
#
#include <math.h>
#include <vector>
#define EPSILON 0.00001

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(Task1UnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1) // 0 iteration, impossible
		{
			int A = 1;
			int B = 0;
			int K = 3;

			Assert::AreEqual(Labwork4::Task1(A, B, K), 0);
		}

		TEST_METHOD(TestMethod2) // 1 iteration
		{
			int A = 1;
			int B = 1;
			int K = 3;

			Assert::AreEqual(Labwork4::Task1(A, B, K), 1);
		}

		TEST_METHOD(TestMethod3)
		{
			int A = 1;
			int B = 73;
			int K = 2;

			Assert::AreEqual(Labwork4::Task1(A, B, K), 37);
		}

		TEST_METHOD(TestMethod4)
		{
			int A = 4;
			int B = 8;
			int K = 17;

			Assert::AreEqual(Labwork4::Task1(A, B, K), 30);
		}

		TEST_METHOD(TestMethod5)
		{
			int A = 7;
			int B = 13;
			int K = 6;

			Assert::AreEqual(Labwork4::Task1(A, B, K), 16);
		}
	};

	TEST_CLASS(Task2UnitTests) 
	{
	public:

		TEST_METHOD(TestMethod1) // 0 iterations
		{
			int N = 1;

			Assert::IsTrue(fabs(Labwork4::Task2(N) - 1.1) < EPSILON);
		}

		TEST_METHOD(TestMethod2) // 1 iterations
		{
			int N = 2;

			Assert::IsTrue(fabs(Labwork4::Task2(N) - 2.3) < EPSILON);
		}

		TEST_METHOD(TestMethod3)
		{
			int N = 5;

			Assert::IsTrue(fabs(Labwork4::Task2(N) - 0.9) < EPSILON);
		}

		TEST_METHOD(TestMethod4)
		{
			int N = 7;

			Assert::IsTrue(fabs(Labwork4::Task2(N) - 0.8) < EPSILON);
		}

		TEST_METHOD(TestMethod5)
		{
			int N = 10;

			Assert::IsTrue(fabs(Labwork4::Task2(N) - 2.7) < EPSILON);
		}
	};

	TEST_CLASS(Task3UnitTests) {
	public:

		TEST_METHOD(TestMethod1) // 0 iterations (impossible)
		{
			double A = 1;
			int N = 0;

			Assert::IsTrue(fabs(Labwork4::Task3(A, N) - 0.0) < EPSILON);
		}

		TEST_METHOD(TestMethod2) // 1 iteration
		{
			double A = 1;
			int N = 1;

			Assert::IsTrue(fabs(Labwork4::Task3(A, N) - 1.0) < EPSILON);
		}

		TEST_METHOD(TestMethod3)
		{
			double A = 1;
			int N = 5;

			Assert::IsTrue(fabs(Labwork4::Task3(A, N) - 5.0) < EPSILON);
		}

		TEST_METHOD(TestMethod4)
		{
			double A = 2;
			int N = 2;

			Assert::IsTrue(fabs(Labwork4::Task3(A, N) - 10.0) < EPSILON);
		}

		TEST_METHOD(TestMethod5)
		{
			double A = 3;
			int N = 3;

			Assert::IsTrue(fabs(Labwork4::Task3(A, N) - 273.0) < EPSILON);
		}
	};

	TEST_CLASS(Task4UnitTests)
	{
	public:
		TEST_METHOD(TestMethod1) { // 0 iterations (impossible)
			double X = 0.5;
			int N = 0;

			Assert::IsTrue(fabs(Labwork4::Task4(X, N) - 0.0) < EPSILON);
		}

		TEST_METHOD(TestMethod2) { // 1 iteration
			double X = 0.5;
			int N = 1;

			Assert::IsTrue(fabs(Labwork4::Task4(X, N) - 0.5) < EPSILON);
		}

		TEST_METHOD(TestMethod3) {
			double X = 0.5;
			int N = 2;

			Assert::IsTrue(fabs(Labwork4::Task4(X, N) - 0.375) < EPSILON);
		}

		TEST_METHOD(TestMethod4) {
			double X = 0.3;
			int N = 3;

			Assert::IsTrue(fabs(Labwork4::Task4(X, N) - 0.264) < EPSILON);
		}

		TEST_METHOD(TestMethod5) {
			double X = 0.2;
			int N = 4;

			Assert::IsTrue(fabs(Labwork4::Task4(X, N) - 0.18226) < EPSILON);
		}
	};

	TEST_CLASS(Task5UnitTests) 
	{
	public:
		TEST_METHOD(TestMethod1)  // 0 iterations (impossible)
		{
			int N = 1;

			Assert::IsTrue(fabs(Labwork4::Task5(N)[N - 1] - 1.0) < EPSILON);
		}

		TEST_METHOD(TestMethod2) // 0 iterations
		{
			int N = 2;

			Assert::IsTrue(fabs(Labwork4::Task5(N)[N - 1] - 2.0) < EPSILON);
		}

		TEST_METHOD(TestMethod3)
		{
			int N = 3;

			Assert::IsTrue(fabs(Labwork4::Task5(N)[N - 1] - 1.66667) < EPSILON);
		}

		TEST_METHOD(TestMethod4)
		{
			int N = 4;

			Assert::IsTrue(fabs(Labwork4::Task5(N)[N - 1] - 1.77778) < EPSILON);
		}

		TEST_METHOD(TestMethod5)
		{
			int N = 5;

			Assert::IsTrue(fabs(Labwork4::Task5(N)[N - 1] - 1.74074) < EPSILON);
		}
	};
}
