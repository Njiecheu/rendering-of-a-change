#include<iostream>

using namespace std;

int main()
{
    int s;
    int t[]{10000,5000,2000,1000,500,100,50,25,10,5,1};
    int p[]{};
    cout << "entrer le montant à rembourser: ";
    cin >> s;
    
    int i=0;
    do
    {
        p[i] = s / t[i];
        s = s % t[i];
        cout << p[i] << " billets de " << t[i] << endl;
        i++; 
        
    }while (s > 0);
    

    return 0;
    
}