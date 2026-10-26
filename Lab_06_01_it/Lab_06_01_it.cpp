

#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void create(int* t, const int n, const int Low, const int High) {
    for (int i = 0; i < n;i++) {
        t[i] = Low + rand() % (High - Low + 1);
    }
}

void print(int* t, const int n) {
    for (int i = 0; i < n;i++) {
        cout << setw(4) << t[i]; 
    }
    cout << endl;
}

int Count(int* t, const int n) {
    int c = 0;
    for (int i = 0;i < n;i++) {
        if (t[i] < 0 && i % 3 != 0) {
            c++;
        }
        
    }
    return c;
}

int Sum(int* t, const int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] < 0 && i % 3 != 0) {
            s += t[i];
        }
    }
    return s;

}

void Replace(int* t, const int n) {
    for (int i = 0; i < n; i++) {
        if (t[i] < 0 && i % 3 != 0) {
            t[i] = 0;
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int const n = 25;
    int const Low = -11, High = 13;
    int t[n];
  

    create(t, n, Low, High);
    print(t, n);
    int count = Count(t, n);
    int sum = Sum(t, n);
    Replace(t, n);
    print(t, n);

    cout << "Count = " << count << endl;
    cout << "Sum = " << sum;

    return 0;
}

