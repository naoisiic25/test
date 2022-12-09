#include <bits/stdc++.h>
#include <String.h>

using namespace std;
struct kh{
	string id;
	string name;
	string sdt;
	string email;
	string hd;
};


int main() {
	ifstream doc;
	doc.open("DATA.txt",ios::in);
	ofstream ghi;
	ghi.open("PRO.txt",ios::out);
	string s;
	int demkh=-1;
	kh list[100000];
	while(!getline(doc,s)) {
		demkh++;
		string a[10];
		int l=s.length();
		int dem=0;
		string x="";
		for (int i=0;i<l;i++) {
			if (s[i]!=' '){
				x+=s[i];
			}
			else{
				a[dem]=x;
				dem++;
				x="";
			}
		}
		for(int i=1;i<=dem-3;i++) {
			list[dem].name+=a[i];
		}
		list[dem].id=a[0];
		list[dem].hd=a[dem];
		list[dem].sdt=a[dem-1];
		list[dem].email=a[dem-2];
//		ghi<<list[dem].id<<" "<<list[dem].name<<" "<<list[dem].email<<" "<<list[dem].sdt<<" "<<list[dem].hd<<endl;
		ghi<<list[dem].id<<endl;
	} 
	doc.close();
	ghi.close();
}
