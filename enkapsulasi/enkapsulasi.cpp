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

int main() {
	remoteLampu lampuRumah;

	lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
	lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
	lampuRumah.setSaklarNo(2, "Lampu kamar Tidur");
	lampuRumah.setSaklarNo(3, "Lampu Lampu Dapur");

	cout << lampuRumah.getSaklarNo(0) << endl;
	cout << lampuRumah.getSaklarNo(1) << endl;
	cout << lampuRumah.getSaklarNo(2) << endl;
	cout << lampuRumah.getSaklarNo(3) << endl;

	return 0;
}