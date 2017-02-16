// ROOT 6 macro
// This macro is a simple exercise about pointers

void pointexercise() {

	int *a;		// Initialize a pointer to an int
	a = new int[5];		// And make it point to free memory for a 5-int array

	// Filling the array interactively
	cout << "Use numbers 3 7 11 15 19";
	cout << " " << endl;		// White line

	for(int i=0;i<5;i++) {
		cout << "Insert the number in position " << i << " : " << endl;
		cin >> a[i];
	}

	// Printout
	cout << " " << endl;
	cout << " " << endl;
	cout << "ARRAY PRINTOUT...";
	cout << " " << endl;
	for(int i=0;i<5;i++) {
	cout << a[i] << endl;
	}

	// Deallocate memory
	delete[] a;
}
