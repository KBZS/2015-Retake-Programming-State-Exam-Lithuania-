#include <iostream>
#include <fstream>

using namespace std;

void nuskatymas();
void skaiciavimai();
void isvedimas();

int A[5], B[10];

int main()
{
    nuskatymas();
    skaiciavimai();
    isvedimas();
    /*for(int i=0; i<5; i++)
    {
        cout << A[i] << " ";
    }*/

    return 0;
}

void nuskatymas()
{
    for(int i=0; i<10; i++)
    {
        B[i] = 0;
    }

    ifstream fd("U1.txt");
    for(int i=0; i<5; i++)
    {
        fd >> A[i];
    }
    fd.close();
}

void skaiciavimai()
{
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(A[i]>0)
            {
                B[j]++;
                A[i]--;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        if(A[i]>0) B[i]+=A[i];
    }

}

void isvedimas()
{
    ofstream fr("U1rez.txt");
    for(int i=0; i<10; i++)
    {
        fr << B[i] << " ";
    }

    fr.close();
}
