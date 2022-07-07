#include <iostream>
#include <cstdlib>

#include <sstream>

using namespace std;

/*int main( int argc, char *argv[]) {
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	cout<<"x+y: "<<x+y<<endl;
	return 0;
}*/

/*class Sayi{
	public: 
		int deger;
		Sayi(int deger) {
			this->deger = deger;
		}
		Sayi(){
			this->deger=0;
		}
		bool operator<(Sayi& sag) {
				return this->deger < sag.deger;
		}
		friend ostream& operator<<(ostream& ekran, Sayi& sag) {
			ekran<<sag.deger;
			return ekran;
		}
};
int MinGetir(int& x, int& y) {
	return x<y?x:y;
}
string MinGetir(string& x, string& y) {
	return x<y?x:y;
}
Sayi& MinGetir(Sayi& x, Sayi& y) {
	return x<y?x:y;
}

int main(){
	int a = 10, b = 25;
	cout<<MinGetir(a,b)<<endl;
	
	string str1= "abc",str2 = "def";
	cout<<MinGetir(str1,str2)<<endl;
	
	Sayi s1(100), s2(200);
	cout<<MinGetir(s1,s2)<<endl;
	return 0;
}*/

/*class Sayi{
	public: 
		int deger;
		Sayi(int deger) {
			this->deger = deger;
		}
		Sayi(){
			this->deger=0;
		}
		bool operator<(Sayi& sag) {
				return this->deger < sag.deger;
		}
		friend ostream& operator<<(ostream& ekran, Sayi& sag) {
			ekran<<sag.deger;
			return ekran;
		}
};

template <typename Object>
Object& MinGetir(Object& o1, Object& o2){
	return o1<o2?o1:o2;
}

int main(){
	int a = 10, b = 25;
	cout<<MinGetir(a,b)<<endl;
	
	string str1= "abc",str2 = "def";
	cout<<MinGetir(str1,str2)<<endl;
	
	Sayi s1(100), s2(200);
	cout<<MinGetir(s1,s2)<<endl;
	return 0;
}*/

/*template <typename Object>
class Kutu{
	public: 
		Object icerik;
		
		Kutu(Object icerik) {
			this->icerik = icerik;
		}
		
		Kutu() {
			this->icerik = Object();
		}
		
		friend ostream& operator<<(ostream& ekran, Kutu& sag){
			ekran<<sag.icerik;
			return ekran;
		}
};

int main(){
	int a = 100;
	
	Kutu<int> *k = new Kutu<int>(a);
	cout<<*k<<endl;
	
	Kutu<string> *isim = new Kutu<string>("Mehmet");
	cout<<*isim<<endl;
	
	string ad = "Hamza";
	printf("%s\n",ad.c_str());
	
	Kutu<Kutu<int>> *kutu = new Kutu<Kutu<int>>(*k);
	cout<<*kutu<<endl;
	
	delete k;
	delete isim;
	delete kutu;
	
	return 0;
}*/

/*int stringToInt(string str) {
	return atoi(str.c_str());
}

int main() {
	string sayi = "105";
	cout<<stringToInt(sayi) + 5;
	return 0;
}*/

/*int stringToInt(string str) {
	stringstream ss(str);
	int x;
	ss>>x;
	return x;
}

int main() {
	string sayi = "105";
	cout<<stringToInt(sayi) + 5;
	return 0;
}*/

/*void dene() {
	int x = 0;
	x++;
	cout<<"x: "<<x<<endl;
}
void dene2() {
	static int y = 0;
	y++;
	cout<<"y: "<<y<<endl;
}

int main() {
	
	dene();
	dene();
	dene();
	
	cout<<endl;
	
	dene2();
	dene2();
	dene2();

	return 0;
}*/


/*int main() {
	int a = 100;
	cout<<&a;
	return 0;
}*/

/*int main() {
	int a = 100;
	int *p;
	p = &a;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	cout<<&p<<endl;
	cout<<*p<<endl;

	return 0;
}*/

/*int main() {
	int a = 100;
	int *p;
	p = &a;
	a = 200;
	cout<<*p;
}*/

/*int main() {
	int a = 100;
	int b = 3;
	double c = a/b;
	cout<<c;
	return 0;
}*/

/*int main() {
	int a = 10;
	double b = 3;
	double c = a/b;
	cout<<c;
	return 0;
}*/

/*int main() {
	int a = 100;
	int *p;
	p = &a;
	*p = 200;
	cout<<a;
	return 0;
}*/

/*int main() {
	int a = 100;
	int b = 3;
	int *p = &a;
	int *r = &b;
	if (a == b) {
		cout<<"esit"<<endl;
	}
	else cout<<"esit degil"<<endl;

	if (p == r) {
		cout<<"esit"<<endl;
	}
	else cout<<"esit degil"<<endl;

	if (*p == *r) {
		cout<<"esit"<<endl;
	}
	else cout<<"esit degil"<<endl;
	return 0;
}*/

/*int main() {
	int a = 100;
	int b = 3;
	int *p = &a;
	int *r = &b;
	*p++;
	cout<<*p;
	return 0;
}*/

/*int main() {
	int a = 10;
	int *p = &a;
	int **pp = &p;
	cout<<*pp<<endl;
	cout<<pp<<endl;
	cout<<&p<<endl;
	return 0;
}*/

/*int main() {
	int *p = new int (100);
	*p = 250;
	delete p;
	return 0;
}*/

/*class Sayi {
	public: 
		int deger;
		Sayi(int deger) {
			this->deger = deger;
		}
		Sayi(){
			deger = 0;
		}
};
int main() {
	Sayi *s1 = new Sayi(100);
	cout<<s1->deger<<endl;
	delete s1;
	return 0;
}*/

/*class Sayi {
	public: 
		int deger;
		Sayi(int deger) {
			this->deger = deger;
		}
		Sayi(){
			deger = 0;
		}
};
int main() {
	Sayi *s1 = new Sayi(100);
	Sayi s2(250);
	cout<<s1->deger<<endl;
	cout<<s2.deger<<endl;
	delete s1;
	return 0;
}*/

/*class Sayi {
	public: 
		int *p;
		Sayi(int deger) {
			this->p = new int(deger);
		}
		Sayi(){
			this->p = new int(0);
		}
		~Sayi() {
			delete p;
		}
};
int main() {
	Sayi *s1 = new Sayi(100);
	cout<<*s1->p<<endl;
	delete s1;
	return 0;
}*/

/*class Sayi {
	public: 
		int *p;
		Sayi(int deger) {
			this->p = new int(deger);
		}
		Sayi(){
			this->p = new int(0);
		}
		~Sayi() {
			delete p;
		}
};
int main() {
	Sayi *s1;
	for(int i= 0; i<10; i++) {
		s1 = new Sayi(100);
		cout<<*s1->p<<endl;
	}
	delete s1;
	return 0;
}*/

/*class Sayi {
	public: 
		int *p;
		Sayi(int deger) {
			this->p = new int(deger);
		}
		Sayi(){
			this->p = new int(0);
		}
		~Sayi() {
			delete p;
		}
};
int main() {
	Sayi *s1;
	for(int i= 0; i<10; i++) {
		s1 = new Sayi(100);
		cout<<*s1->p<<endl;
		delete s1;
	}
	return 0;
}*/

/*class Sayi {
	public: 
		int *p;
		Sayi(int deger) {
			this->p = new int(deger);
		}
		Sayi(){
			this->p = new int(0);
		}
		~Sayi() {
			delete p;
		}
};
int main() {
	Sayi *s1;
	for(int i= 0; i<10; i++) {
		s1 = new Sayi(100);
		cout<<s1<<endl;
		delete s1;
	}
	return 0;
}*/

/*class Sayi {
	public: 
		int *p;
		Sayi(int deger) {
			this->p = new int(deger);
		}
		Sayi(){
			this->p = new int(0);
		}
		~Sayi() {
			delete p;
		}
};
int main() {
	Sayi *s1;
	for(int i= 0; i<10; i++) {
		s1 = new Sayi(100);
		cout<<s1<<endl;
	}
	delete s1;
	return 0;
}*/

/*class Sayi {
	public: 
		int deger;
		Sayi(int deger) {
			this->deger = deger;
		}
		Sayi(){
			this->deger =0;
		}
};
int main() {
	Sayi *s1 = new Sayi(100);
	Sayi *s2 = s1;
	delete s2;
	s1 == NULL;
	Sayi *s3 = new Sayi(500);
	cout<<s1->deger<<endl;
	delete s3;
	return 0;
}*/

/*class Sayi {
	public: 
		int deger;
		Sayi(int deger) {
			this->deger = deger;
		}
		Sayi(){
			this->deger = 0;
		}
};
int main() {
	Sayi *s1 = new Sayi(100);
	Sayi *s2 = new Sayi(200);

	cout<<s1->deger<<endl;
	cout<<s2->deger<<endl;

	Sayi *tmp = s1;
	s1 = s2;
	s2 = tmp;

	delete s1;
	delete s2;
	return 0;
}*/

/*class Sayi {
	public: 
		int deger;
		Sayi(int deger) {
			this->deger = deger;
		}
		Sayi(){
			this->deger = 0;
		}
};
int main() {
	int *p= NULL;
	cout<<p<<endl;
	return 0;
}*/

/*void Degistir(int a) {
	a = 500;
}
int main() {
	int x = 100;
	Degistir(x);
	cout<<x<<endl;
	return 0;
}*/

/*void Degistir(int *a) {
	*a = 500;
}
int main() {
	int x = 100;
	int *p = &x;
	Degistir(p);
	cout<<x<<endl;
	return 0;
}*/

/*void Degistir(int *&a) {
	a = NULL;
}
int main() {
	int x = 100;
	int *p = &x;
	Degistir(p);
	cout<<*p<<endl;
	return 0;
}*/

/*int main() {
	int a = 100;
	int b = 200;
	int *p = &a;
	*p = b;
	cout<<*p<<endl;
	cout<<a<<endl;
	if(p == &a) cout<<"esit"<<endl;
	return 0;
}*/

/*int main() {
	char *p;
	char a = 'T';
	p = &a;
	cout<<*p<<endl;
	return 0;
}*/

/*int main() {
	char *p = "izmir";

	cout<<p<<endl;
	cout<<*p<<endl;
	
	p++;

	cout<<p<<endl;
	cout<<*p<<endl;

	return 0;
}*/