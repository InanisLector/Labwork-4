#include "Labwork4.h"
#include "iostream"
#define NO_EXCEPTION 0x0000
#define INVALID_INPUT_EXCEPTION -0x0001

using namespace std;

int Labwork4::RunTasks()
{
    TaskSelection();

    return 0;
}

#pragma region Task Selection


int Labwork4::TaskSelection()
{
    int taskNumber;
    TaskSelectionInputHandling(taskNumber);

    switch (taskNumber) {
    case 1:
        Task1main();
        break;
    case 2:
        Task2main();
        break;
    case 3:
        Task3main();
        break;
    case 4:
        Task4main();
        break;
    case 5:
        Task5main();
        break;
    }

    return 0;
}

int Labwork4::TaskSelectionInputHandling(int& n)
{
    while (TaskSelectionInputN(n))
        cout << "Invalid input\n";

    return NO_EXCEPTION;
}

int Labwork4::TaskSelectionInputN(int& n)
{
    cout << "Choose task number (1-5): ";
    cin >> n;

    if (n < 1 || n > 5)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

#pragma endregion

#pragma region Task 1

int Labwork4::Task1main()
{
    int A, B, K;
    Task1InputHandling(A, B, K);

    cout << endl << Task1(A, B, K) << endl;

    return NO_EXCEPTION;
}

int Labwork4::Task1InputHandling(int& A, int& B, int& K)
{
    while (Task1InputA(A))
        cout << "Invalid input\n";
    
    while (Task1InputB(B))
        cout << "Invalid input\n";

    if (A > B) {
        cout << "A < B, thus swapping";
        swap(A, B);
    }

    while (Task1InputK(K))
        cout << "Invalid input\n";

    return NO_EXCEPTION;
}

int Labwork4::Task1InputA(int& A)
{
    cout << "Input A: ";
    cin >> A;

    return NO_EXCEPTION;
}

int Labwork4::Task1InputB(int& B)
{
    cout << "Input B: ";
    cin >> B;

    return NO_EXCEPTION;
}

int Labwork4::Task1InputK(int& K)
{
    cout << "Input K: ";
    cin >> K;

    return NO_EXCEPTION;
}

int Labwork4::Task1(int A, int B, int K)
{
    int sum = 0;

    for (int i = A; i <= B; i++)
        sum += i % K;

    return sum;
}

#pragma endregion

#pragma region Task 2

int Labwork4::Task2main()
{
    int N;
    Task2InputHandling(N);

    cout << endl << Task2(N) << endl;

    return NO_EXCEPTION;
}

int Labwork4::Task2InputHandling(int& N)
{
    while (Task2InputN(N))
        cout << "Invalid input\n";

    return NO_EXCEPTION;
}

int Labwork4::Task2InputN(int& N)
{
    cout << "Input N (N > 0): ";
    cin >> N;

    if (N <= 0)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

double Labwork4::Task2(int N)
{
    double sum = 1.1;

    for (int i = 1.2; i < N / 10 + 1; i += 0.1)
        sum += i * (i % 2 ? -1 : 1);

    return 0;
}

double Labwork4::Task2ol(int N) 
{
    return 1.1 - 0.1 * (N / 2) + (N % 2) * N / 10 + 1;
}

#pragma endregion

#pragma region Task 3

int Labwork4::Task3main()
{
    double A;
    int N;
    Task3InputHandling(A, N);

    cout << endl << Task3(A, N) << endl;

    return NO_EXCEPTION;
}

int Labwork4::Task3InputHandling(double& A, int& N)
{
    while (Task3InputA(A))
        cout << "Invalid input\n";

    while (Task3InputN(N))
        cout << "Invalid input\n";

    return NO_EXCEPTION;
}

int Labwork4::Task3InputA(double& A)
{
    cout << "Input A: ";
    cin >> A;

    return NO_EXCEPTION;
}

int Labwork4::Task3InputN(int& N)
{
    cout << "Input N (N > 0): ";
    cin >> N;

    if (N <= 0)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

double Labwork4::Task3(double A, int N)
{
    double sum = A;
    double power = A;

    for (int i = 0; i < N; i++) {
        power *= A * A;
        sum += power;
    }

    return sum;
}

#pragma endregion

#pragma region Task 4

int Labwork4::Task4main()
{
    double X;
    int N;
    Task4InputHandling(X, N);

    cout << endl << Task4(X, N) << endl;

    return NO_EXCEPTION;
}

int Labwork4::Task4InputHandling(double& X, int& N)
{
    while (Task4InputX(X))
        cout << "Invalid input\n";
    
    while (Task4InputN(N))
        cout << "Invalid input\n";

    return NO_EXCEPTION;
}

int Labwork4::Task4InputX(double& X)
{
    cout << "Input X (|X| < 1): ";
    cin >> X;

    if (X <= -1 || X >= 1)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork4::Task4InputN(int& N)
{
    cout << "Input N (N > 0): ";
    cin >> N;

    if (N <= 0)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork4::Task4(double X, int N)
{
    double quoficient = X;
    double sum = 0;

    for (int i = 1; i <= N; i++)
        sum += (quoficient *= (-X)) / N;

    return sum;
}

#pragma endregion

#pragma region Task 5

int Labwork4::Task5main()
{
    int N;
    Task5InputHandling(N);

    Task5Parse(Task5(N));

    return NO_EXCEPTION;
}

int Labwork4::Task5InputHandling(int& N)
{
    while (Task5InputN(N))
        cout << "Invalid input\n";

    return NO_EXCEPTION;
}

int Labwork4::Task5InputN(int& N)
{
    cout << "Input N (N > 1): ";
    cin >> N;

    if (N <= 1)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork4::Task5Parse(std::vector<double> arr)
{
    cout << endl;

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;

    return NO_EXCEPTION;
}

std::vector<double> Labwork4::Task5(int N)
{
    std::vector<double> sequenceMembers (N);

    sequenceMembers[0] = 1;
    sequenceMembers[1] = 2;

    for (int i = 2; i < N; i++)
        sequenceMembers[i] = (sequenceMembers[i - 2] + sequenceMembers[i - 1] * 2) / 3;

    return sequenceMembers;
}

#pragma endregion