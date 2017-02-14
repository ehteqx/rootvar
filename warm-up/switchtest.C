// ROOT 6 using C++11
// This is a simple test script for the SWITCH control statement (an ultra-trivial counter)

void switchtest() {

	long long input;
	cout << "Please, insert a positive integer... " << endl;
	cin >> input;

	{						// SWITCH-CASE
		switch(input) {
			case 0:
				printf("None \n");
				break;

			case 1:
				printf("One \n");
				break;

			case 2:
				printf("Two \n");
				break;

			default:
				printf("Many ;-) \n");
				break;
		}
	}

}
