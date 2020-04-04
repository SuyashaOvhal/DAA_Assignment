//problem:Encryption
#include <bits/stdc++.h>

using namespace std;
// Complete the encryption function below.
string encryption(string s) {
	int len=s.length(),k=0;
	int val=sqrt(len),val2=val*(val+1),val3;
	string str;
	if(val2<len)
	{
		val=val+1;
		val3=val;
	}
	else
	{
		val3=val+1;
	}

	char arr[val][val3];
	k=0;
	for(int i=0;i<val;i++)
	{
		for(int j=0;j<val3;j++)
		{
			arr[i][j]=s[k];			
			k++;
		}
	}

	for(int i=0;i<val3;i++)
	{
		for(int j=0;j<val;j++)
		{
			char a=arr[j][i];			
			str=str+a;
			k++;
		}cout<<endl;
		if((i+1)<val3)	
		{	str=str+' ';
		}
	}
return str;}	

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

