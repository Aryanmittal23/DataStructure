/* Aryan and his friends are very fond of the pattern. For a given integer ‘N’,
 they want to make the Reverse N-Number Triangle. */
void nNumberTriangle(int n) {
    // Write your code here.
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}