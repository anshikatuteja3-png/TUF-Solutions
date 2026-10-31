class Solution {
public:
    void pattern15(int n) {

for(int i=0;i<n;i++) {
    for(char ch='A';ch<=n-i-1+'A';ch++) {
        cout<<ch;
    }
    cout<<endl;

}
    }
};