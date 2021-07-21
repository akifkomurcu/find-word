#include<iostream>
#include <string.h>
using namespace std;
char birinci[300]="Kimse kimseyi kucumseyecek kadar buyuk degildir bilmelisin.";
char ikinci[15];
char yeni1[61];
int i,j;
int main()
{
	
	for(i=0;i<300;i++)
	cout<<birinci[i];
	
	cout<<endl;
	
	cout<<"bulunacak kelime girin :"<<endl;
	
	cin>>ikinci;

	for(i=0;i<strlen(birinci);i++)
	{
		for(j=0;j<strlen(ikinci);j++)
		{
			if(birinci[i]==ikinci[j] && birinci[i+1]==ikinci[j+1])
			{
				yeni1[i]=ikinci[j];
				yeni1[i+1]=ikinci[j+1];
			
			}
			
		}
	}
		for(i=0;i<300;i++)
	cout<<birinci[i];

	cout<<"\n";
	
	for(i=0;i<61;i++)
	cout<<yeni1[i];
	return 0;
	
}

