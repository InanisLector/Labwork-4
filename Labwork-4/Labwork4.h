#include <vector>

#pragma once
class Labwork4
{
public:
	static int RunTasks();

#pragma region Task Seletion
	
private:
	static int TaskSelection();
	static int TaskSelectionInputHandling(int& n);
	static int TaskSelectionInputN(int& n);

#pragma endregion

#pragma region Task 1

private:
	static int Task1main();
	static int Task1InputHandling(int& A, int& B, int& K);
	static int Task1InputA(int& A);
	static int Task1InputB(int& B);
	static int Task1InputK(int& K);
public:
	static int Task1(int A, int B, int K);

#pragma endregion

#pragma region Task 2

private:
	static int Task2main();
	static int Task2InputHandling(int& N);
	static int Task2InputN(int& N);
public:
	static double Task2(int N);
	static double Task2ol(int N);

#pragma endregion

#pragma region Task 3

private:
	static int Task3main();
	static int Task3InputHandling(double& A, int& N);
	static int Task3InputA(double& A);
	static int Task3InputN(int& N);
public:
	static double Task3(double A, int N);

#pragma endregion

#pragma region Task 4

private:
	static int Task4main();
	static int Task4InputHandling(double& X, int& N);
	static int Task4InputX(double& X);
	static int Task4InputN(int& N);
public:
	static int Task4(double X, int N);

#pragma endregion

#pragma region Task 5

private:
	static int Task5main();
	static int Task5InputHandling(int& N);
	static int Task5InputN(int& N);
	static int Task5Parse(std::vector<double> arr);
public:
	static std::vector<double> Task5(int N);

#pragma endregion

};

