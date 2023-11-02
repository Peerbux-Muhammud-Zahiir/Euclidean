#include <iostream>

using namespace std;

int Euclidean(int x,int y){
if(x%y==0){
return y;
}else{
return Euclidean(y,x%y);}
}
int main()
{   cout << "---------------" << endl;
    cout << "Euclidean Algo" << endl;
    cout << "---------------" << endl;
    cout<<endl;
    int larger,smaller;
    cout<<"Input 2 different positive integers"<<endl;
    do{
    cout<<"Input larger number: ";
    cin>>larger;
      cout<<"Input smaller number: ";
    cin>>smaller;
    cout<<endl;
    }while(smaller>=larger||larger==0||smaller==0);
    int GCD;
    GCD=Euclidean(larger,smaller);

    cout<<"The GCD of "<<larger<<" and "<<smaller<<" is "<<GCD<<endl;
    return 0;
}
