#include <iostream>
using namespace std;

class MyArray {
		int size;
		int* arr = new int[size];

	public:
		MyArray(int size) {
			this -> size = size;
		}

		void setData(int i,int data) {
			arr[i] = data;
		}

		void display() {
			for(int i = 0;i < size;i++)
				cout << arr[i] << " ";
			cout << endl;
		}
};

int main() {
	MyArray obj(5);
	int n;
	for(int i = 0; i < 5; i++) {
		cin >> n;
		obj.setData(i,n);
	}

	obj.display();
}
