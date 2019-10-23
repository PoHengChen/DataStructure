// Author: Po-Heng Chen on 14/Oct/2019
// This program shows:
//		- how to inheret a class
//		- inheret multiple classes
//		- the characteristic of protected data member
#include <iostream>

using namespace std;

class Shape{
	private:

	// The class which inherent Shape class 
	// can define protected data member.
	protected: 		
		int width;
		int height;
	public:
		void setWidth(int w) {
			width = w;
		}
		void setHeight(int h) {
			height = h;
		}
};

class PaintCost {
	private:
	protected:
	public:
		int getCost(int area) {
			return area * 70;
		}
};

// ============ Multiple Inheritance ==============
// __________    __________
// | class A |   | class B |
// ￣￣￣￣\￣￣   ￣/￣￣￣￣￣ 
//		   \       /
//         _\_____/__
//		   | class c|
//=======  ￣￣￣￣￣￣=============================
class Rectangle : public Shape, public PaintCost {
	private:
	protected:

	// Member function in Rectangle can get access to define 
	// protected data member in father class.
	public:
		int getArea() {
			return (width * height);
		}
};


int main(void) {
	Rectangle Rect;
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();

	// Print the area of the object.
	cout << "Total area: " << Rect.getArea() << endl;

	// Print the total cost of painting
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;
}