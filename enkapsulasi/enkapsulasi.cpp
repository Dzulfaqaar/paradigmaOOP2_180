#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		saklarNo[1] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};