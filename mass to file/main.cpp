#include <iostream>
#include <fstream>
 
using namespace std;

 
int main() {
    int i ;
    int n;
    cout<<"enter number"<<"\n";
    cin>>n;
    int* mas = new int[n*sizeof(int)];
    int num = 1;
    for (i = 0; i < n; i++) {
        //cout << "Enter element #" << i << ": " << endl;
        mas[i] = num;
        num++;
    }
 
    ofstream out("/Users/gratchuvalsky/Desktop/output.txt");
    if (!out) {
        cout << "File Error" << endl;
        return 1;
    }
    for (i = 0; i < n; i++) {
        out << mas[i] << ' ';
    }
    out.close();
 
    cout << "Rezult" << endl;
    ifstream in("/Users/gratchuvalsky/Desktop/output.txt");
    if (!in) {
        cout << "File Error" << endl;
        return 1;
    }
    for (i = 0; i < n; i++) {
        in >> num;
        cout << num << ' ';
    }
    cout << endl;
    in.close();
    delete[] mas;
    return 0;
}

