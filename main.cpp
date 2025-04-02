#include <iostream>
using namespace std;

int main() {
    int N, i, j, t;
    string s;
    bool scambio;
    cout<<"Quanti studenti ci sono in una classe?"<<endl;
    cin>>N;
    float voti[N];
    string nomi[N];
    i=0;
    while(i<N)
    {
        cout<<"come ti chiami?"<<endl;
        cin>>nomi[i];
        cout<<"Quanto hai in informatica?"<<endl;
        cin>>voti[i];
        i=i+1;
    }
    i=0;
    scambio=true;
    while(i<=N-1 and scambio)
    {
        scambio=false;
        j=0;
        while(j<=(N-2)-i)
        {
            if(voti[j]>voti[j+1])
            {
                t=voti[j];
                voti[j]=voti[j+1];
                voti[j+1]=t;
                s=nomi[j];
                nomi[j]=nomi[j+1];
                nomi[j+1]=s;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<N)
    {
        cout<<"Il "<<i+1<<"° studente si chiama "<<nomi[i]<<" e ha "<<voti[i]<<" come voto di informatica"<<endl;
        i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
