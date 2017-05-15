#include <iostream>
using namespace std;
#include <string>
#include <ctime>

int main() {
	string quotes[5];

	srand(time(NULL));
	cout << "There is an NPC over there.  Press enter to talk to him." << endl;
	quotes[0] = "He is my squishy and he shall be mine.";
	quotes[1] = "Get up on the Hydra's back!";
	quotes[2] = "I AM PUCHING YOUR SALAD!";
	quotes[3] = "I buy you a wrench and you try to kill me with it!";
	quotes[4] = "Execute Order 66.";
	while (true){
		system("Pause");
	int number = rand() % 5 + 1;
	switch (number) {
	case 1:
		cout << quotes[0] << endl;
		break;
	case 2:
		cout << quotes[1] << endl;
		break;
	case 3:
		cout << quotes[2] << endl;
		break;
	case 4:
		cout << quotes[3] << endl;
		break;
	case 5:
		cout << quotes[4] << endl;

	}
	}
}
