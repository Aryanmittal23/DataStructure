'''Given an integer ‘n’, return first n Fibonacci numbers using a generator function.'''



vector<int> generateFibonacciNumbers(int n) {
    vector<int> fibonacci;
    
    // Base cases
    if (n <= 0) {
        return fibonacci;
    }
    
    // Initialize the first two Fibonacci numbers
    fibonacci.push_back(0);
    if (n == 1) {
        return fibonacci;
    }
    fibonacci.push_back(1);
    
    // Generate the remaining Fibonacci numbers
    for (int i = 2; i < n; i++) {
        int nextFib = fibonacci[i - 1] + fibonacci[i - 2];
        fibonacci.push_back(nextFib);
    }
    
    return fibonacci;
}