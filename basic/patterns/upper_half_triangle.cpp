/* Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

For every value of ‘N’, print the field if the trees are represented by ‘*’. */

void seeding(int n) {
  // Write your code here.
  cin>>n;
  for(int i=n;i>0;i--){
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}