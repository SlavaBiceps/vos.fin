#include <iostream>

using namespace std;

long long mas[300002];
long long das[300002];
long long vas[300002];
long long fir[300002];
int main() {
    long long n,m;
    cin >> m >> n;
    for (long long i=1;i<=m;i++){
        cin >> mas[i];
    }
    long long k=0;
    for (long long i=1;i<=m;i++){
        if (das[mas[i]]==0){
            das[mas[i]]=i;
            vas[mas[i]]=i;
            fir[k]=mas[i];
            k++;
        } else {
            vas[mas[i]]=i;
            if (vas[mas[i]]!=0){
                cout << "-1";
                return 0;
            }
        }
    }
    cout << k << endl;
    for(long long i=0;i<k;i++){
        cout << fir[i] << " " << das[fir[i]] << " " << vas[fir[i]] << endl;
    }
    return 0;
}