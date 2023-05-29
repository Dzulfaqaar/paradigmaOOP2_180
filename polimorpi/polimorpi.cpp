#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesan() = 0;
	//virtual void pesan(){
		//cout<<"pesan dari seseorang"<<endl;
	//}
};

class joko : public sesorang {
public:
	void pesan() {
		cout << "pesan dari joko" << endl;
	}
};