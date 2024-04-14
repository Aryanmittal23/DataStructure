/* Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers starting from 1.

For every value of ‘N’, help sam to print the corresponding N-dimensional Triangle.*/

void nTriangle(int n) {
	// Write your code here
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=i){
				cout<<j<<" ";
                        } else {
                                cout <<" "<<endl;
                        }
						
                }
        }
}