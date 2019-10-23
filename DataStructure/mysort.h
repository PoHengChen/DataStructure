#pragma once

#ifndef MYSORT_H
#define MYSORT_H
#include <iostream>
#include <vector>

class mysort {
	private:
	protected:
	public:
		//void showdata(int*);

		void swap(int*, int*);
		void showdata(int*);
		void bubblesort(int*);
		void bubblesort2(int*);
		void selectionsort(int*);
		void insertionsort(int*);
		void shellsort(int*);
		void quicksort1(int*, int, int); //first element as pivot
		void quicksort2(int*, int, int); //last element as pivot
		int partition(int*, int, int);
		void mergesort(std::vector<int>& vec, int left, int right);
		void merge(std::vector<int>& vec, int left, int right, int mid);
		};

#endif
