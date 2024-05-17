#include <iostream>
using namespace std;
class a {
public:
	float x = 100;
	void showx() {
		cout << "x " << x << endl;
		cout << "y " << y << endl;
		cout << "yy " << gety() << endl;
	}
	void sety(float z) { y = z; }
	float showy() { return y; }
private:
	float y = 200;
	float gety() { return y; }
};
void main() 
{
	a b;
	b.showx();  //public function
	b.sety(30); //private data 변경
	b.showx(); //private data 출력
	cout << b.showy() << endl;
}
