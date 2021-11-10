#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}
int IndexMaxElem(int a[], const int size, int& index, int max, int i)
{
    if (max < a[i] && a[i] % 2 == 0)
    {
        max = a[i];
        index = i;
    }
    if (i < size-1)
        return IndexMaxElem(a, size, index, max, i+1);
    else
        return index;
        
        
    
}

 int main()
{
    srand((unsigned)time(NULL));

    int n;
    cout << "n= "; cin >> n;

    int* a = new int[n];
    int Low = -10;
    int High = 10;
    Create(a, n, Low, High, 0);
    Print(a, n, 0);

    
    int index = -1;
    int i = IndexMaxElem(a, n, index, 0, 0);
    if (index != -1)
    {
        cout << "index = " << i << endl;
    }
    else
    {
        cout << "There isn't zero" << endl;
    }
    

    delete[]a;

    return 0;
}