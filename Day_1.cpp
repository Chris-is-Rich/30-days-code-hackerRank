 // Declare second integer, double, and String variables.
    int a = 0;
    double b = 0.0;
    string x;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> a;
    cin >> b;
    cin.ignore();
    getline(cin,x);
    // Print the sum of both integer variables on a new line.
    cout << a + i << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed;
    cout << setprecision(1);
    cout << b + d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + x;
