// ROOT 6 using C++11
// This macro calculates the number of numbers in an array greater or equal to a cutoff stated afterwards

void arrcutoff() {

	cout << "How many numbers do you want to insert? " << endl;		// The dimension of the array is stated
	long long upbound;
	cin >> upbound;

	long double array[upbound];		// The array is initialized empty

	for(long long i=0; i<upbound; i++) {			// The array is filled
		cout << "Insert value nr. " << i << endl;
		cin >> array[i];
	};

	cout << "Select the cutoff... " << endl;	// The cutoff is determined after the array is filled
	long double cutoff;							// This way, OTF computation is impossible
	cin >> cutoff;

	long long counter = 0

	// To be concluded... //



}
