//Find a better approach for the solution.
#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1,j,k=1;

    while(i<=n){

        j=1;

        while(j<=i){
                
            cout<<k;
            
            j++;
        }

        cout<<endl;
        i++;
        k++;
    }
}
