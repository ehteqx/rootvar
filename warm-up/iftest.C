// ROOT 6 using C++11
// This script is a simple test using IF control statements

void iftest() {

	for (int i = 1; i < 101; i++) {
		cout << i << endl;
		if (i<25) {
			printf("Primo quarto \n");
		}
		else if (i>24 && i<50) {
			printf("Secondo quarto \n");
		}
		else if (i>49 && i<75) {
			printf("Terzo quarto \n");
		}
		else if (i==100) {
			printf("FULL HOUSE! ;-) \n");	// Has no meaning at all!
		}
		else {							// More efficient if not --funroll-loops || less comparisons
			printf("Ultimo quarto \n");
		}
		cout << " " << endl; // Just a newline || Equivalently printf("/n")
	}
}
