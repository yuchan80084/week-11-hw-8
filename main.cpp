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
	b.sety(30); //change private data 
	b.showx(); //print private data 
	cout << b.showy() << endl;
}
