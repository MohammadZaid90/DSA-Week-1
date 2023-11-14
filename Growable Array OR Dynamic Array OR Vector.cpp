#include <iostream>
#include <fstream>
#include <ctime>
#include <conio.h>

using namespace std;

template <typename T>
class GrowableArr
{
    int size;
    int capacity;
    T* arr;

public:
    GrowableArr()
    {
        size = 0;
        capacity = 2;
        arr = new T[capacity];
    }

    void insert(int value)
    {
        if (size == capacity)
        {
            int newCapacity = capacity +1;
            T* newArry = new T[newCapacity];
            copy(arr, arr + size, newArry);
            delete[] arr;
            arr = newArry;
            capacity = newCapacity;
        }
        arr[size] = value;
        size++;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    friend ostream& operator<<(ostream& out, GrowableArr<T>& arr);
};

template <typename T>
ostream& operator<<(ostream& cout, GrowableArr<T>& arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        cout << arr.arr[i] << " ";
    }
    return cout;
}

void createRandomFile(string filename, int size)
{
    ofstream file(filename);
    srand(time(0));
    for (int i = 0; i < size * 1024 * 1024; i++)
    {
        file << rand() % 10 << endl;
    }
}

template <typename T>
void readRandomFile(string filename, GrowableArr<T>& grow)
{
    ifstream file(filename);
    T number;
    while (file >> number)
    {
        grow.insert(number);
    }
    file.close();
}

int main()
{
    createRandomFile("OutputArrayList.txt", 2);
    cout << "Before Time : " << time(0) << endl;
    GrowableArr<int> growArr;
    readRandomFile("OutputArrayList.txt", growArr);
    cout << "After Time : " << time(0) << endl;
    //getch();

    // growArr.insert(500);
    // growArr.insert(550);
    // growArr.insert(600);
    // cout << growArr;
}