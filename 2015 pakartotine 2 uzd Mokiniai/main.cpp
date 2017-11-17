#include <iostream>
#include <fstream>

using namespace std;

struct mok
{
    string vardas;
    char ats[11];
};

mok A[11];
struct rez
{
    string vardas2;
    int tr;
};
rez B[11];

int n, m, t, sk;

void nuskaitymas();
void rikiavimas();
int palyginimas(mok x);
void spausdinimas();


int main()
{
    nuskaitymas();
    /*cout << n << " " << m << endl;
    cout << t << endl;
    for(int i=0; i<n; i++)
    {
        cout << A[i].vardas;
        for(int j=0; j<m; j++)
        {
            cout << A[i].ats[j];
        }
        cout << endl;
    }*/

    //skaiciavimai();
    spausdinimas();

    return 0;
}

void nuskaitymas()
{
    char name[11];
    ifstream fd("U2.txt");
    fd >> n >> m;
    fd >> t;
    fd.ignore();
    for(int i=1; i<=n; i++)
    {
        fd.get(name, 10);
        A[i].vardas = name;
        for (int j = 1; j <= m; j++)
        {
            fd>>A[i].ats[j];
        }
        fd.ignore();
    }
    fd.close();

}


int palyginimas(mok x)
{
    sk = 0;
    for(int j=1; j<=m; j++)
    {
        if(x.ats[j] == A[t].ats[j]) sk++;
    }
    return sk;
}

/*void rikiavimas() //
{
    for(int =1; i<=n; i++)
    {
        B[i].vardas2 = A[i].vardas;
        B[i].tr = palyginimas(A[i]);
    }
    for(int i=1; i<=n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(B[i]>B[j])
            {
                swap(B[i, B[j])
            }
        }
    }
}*/


void spausdinimas()
{
    ofstream fr("U2rez.txt");
    fr << A[t].vardas << endl;
    for(int i=1; i<=n; i++)
    {
        if(A[i].vardas != A[t].vardas)
        {
            fr << A[i].vardas << palyginimas(A[i]) << endl;
        }
    }
    fr.close();

}


