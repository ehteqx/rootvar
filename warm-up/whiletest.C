// ROOT 6 using C++11
// This script is a simple test for using the WHILE loop

void whiletest() {

	bootstrap:
	int trigger = 1;
	while(trigger < 10) {
	    cout << "Sampling... // Sample nr. " << trigger << endl;
	    trigger +=1;
	}
	cout << "HOLD!" << endl;
	goto bootstrap;		// GOTO considered harmful? I won't give a f**k!
}
