// C++ code
#include <iostream>
#include <vector>

const int Max = 1000;

void Merge(std::vector<int>& Array, int front, int mid, int end) {

	// 利用 std::vector 的constructor, 
	// 把array[front]~array[mid]放進 LeftSub[]
	// 把array[mid+1]~array[end]放進 RightSub[]
	std::vector<int> LeftSub(Array.begin() + front, Array.begin() + mid + 1);
	std::vector<int> RightSub(Array.begin() + mid + 1, Array.begin() + end + 1);

	LeftSub.insert(LeftSub.end(), Max);      // 在LeftSub[]尾端加入值為 Max 的元素
	RightSub.insert(RightSub.end(), Max);    // 在RightSub[]尾端加入值為 Max 的元素

	int idxLeft = 0, idxRight = 0;

	for (int i = front; i <= end; i++) {

		if (LeftSub[idxLeft] <= RightSub[idxRight]) {
			Array[i] = LeftSub[idxLeft];
			idxLeft++;
		}
		else {
			Array[i] = RightSub[idxRight];
			idxRight++;
		}
	}
}

void MergeSort(std::vector<int>& array, int front, int end) {
	// front與end為矩陣範圍
	if (front < end) {                   // 表示目前的矩陣範圍是有效的
		int mid = (front + end) / 2;         // mid即是將矩陣對半分的index
		MergeSort(array, front, mid);    // 繼續divide矩陣的前半段subarray
		MergeSort(array, mid + 1, end);    // 繼續divide矩陣的後半段subarray
		Merge(array, front, mid, end);   // 將兩個subarray做比較, 並合併出排序後的矩陣
	}
}

void PrintArray(std::vector<int>& array) {
	for (int i = 0; i < array.size(); i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

int main() {

	int arr[] = { 5,3,8,6,2,7,1,4 };
	std::vector<int> array(arr, arr + sizeof(arr) / sizeof(int));

	std::cout << "original:\n";
	PrintArray(array);

	MergeSort(array, 0, 7);
	std::cout << "sorted:\n";
	PrintArray(array);

	return 0;
}