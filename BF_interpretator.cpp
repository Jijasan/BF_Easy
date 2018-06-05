#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <set>
#include <map>
using namespace std;

vector<int> a(30000, 0);
int it = 0, maxn = 0;

void bf(string s){
	for(int i = 0; i<s.size(); i++){
		if(s[i]=='+')
			a[it]++;
		if(s[i]=='-')
			a[it]--;
		if(s[i]=='>')
			it++;
        maxn = max(maxn, it+1);
		if(s[i]=='<')
			it--;
		if(s[i]=='.')
			cout << a[it] << ' ';
		if(s[i]==',')
			cin >> a[it];
		if(s[i]=='['){
			string s1 = "";
			int c = 1;
			for(i = i+1; i<s.size(); i++){
				if(s[i]=='[')
					c++;
				if(s[i]==']')
					c--;
				if(c==0)
					break;
				s1 = s1+s[i];
			}
			while(a[it]>0){
				bf(s1);
			}
		}
		if(s[i]=='#'){
            cout << it << ':';
            for(int j = 0; j<maxn; j++)
                cout << a[j] << ' ';
            cout << endl;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream in("input.bf");
    string s = "", s1;
    while(in>>s1){
        if(s1.size()>1&&s1[0]==s1[1]&&s1[0]=='/'){
            getline(in, s1);
        }
        else
            s += s1;
    }
    bf(s);

    return 0;
}
