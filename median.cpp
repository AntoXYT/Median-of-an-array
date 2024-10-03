#include<iostream>
#include<ctime>
const int MAX = 200;
using namespace std;

int dimensione();
void randarray(float numero[], int dimensione);
void ordina(float a[], int dimensione);
void scambia(float& a, float& b);
void stampa(float a[], int dimensione);
float mediana(float a[], int dimensione);

int main(){
srand (time(NULL));
float a[MAX];
int n;
n = dimensione();
randarray(a, n);
ordina(a,n);
stampa(a,n);
cout<<"Mediana:"<<endl;
cout<<mediana(a,n);
}

int dimensione(){
	int dimensione;
	do{
	cout<<"Inserire Dimensione:"<<endl;
	cin>>dimensione;
	}while(dimensione<1 || dimensione>MAX);
	return dimensione;
}

void randarray(float numero[], int dimensione){
	numero[dimensione];
	for(int i = 0; i<dimensione; i++){
		numero[i] = rand()%101;
		cout<<numero[i]<<endl;
	}
			cout<<"------ Ordinato Sotto"<<endl;
}

void ordina(float a[], int dimensione){
	for(int i = 0; i<dimensione-1;i++){
		for(int j = i+1; j<dimensione;j++){
		if(a[i]>a[j]) scambia(a[i], a[j]);
	}
	}
}

void scambia(float& a, float& b)
{
	float c = a ;
	a = b;
	b = c;
}

void stampa(float a[], int dimensione)
{
for(int i= 0; i<dimensione;i++) cout<< a[i] << endl;
}

float mediana( float a[], int dimensione){
	int mediana;
	if(dimensione%2==0){	
mediana =  dimensione/2;
return   (a[mediana-1] + a[mediana])/2;
}
	else 	{
		mediana = (dimensione + 1) / 2;
		return a[mediana - 1];
	}

}
