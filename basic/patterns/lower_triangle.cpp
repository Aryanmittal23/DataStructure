/*Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

An N/2-dimensional forest is represented by the lower triangle of the pattern filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N/2-dimensional forest.*/

void nForest(int n) {
	// Write your code here.
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<=i ){
				cout<<"* ";
			}
			else{
				cout<<" "<<endl;
			}
		}
	}
}
