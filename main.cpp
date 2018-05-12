#include <fstream>
#include <iostream>
using namespace std;

void main()
{
	ofstream outfile("C:\\ClkBiasAddress.txt");
	char address_name[100];
	for(int i=1982;i<=2000;i++)
	{
		for(int j=0;j<=6;j++)
		{
			sprintf(address_name,"ftp://cddis.gsfc.nasa.gov/pub/gps/products/mgex/%4d/gbm%4d%d.clk.Z",i,i,j);
			cout<<address_name<<endl;
			outfile<<address_name<<endl;
		}
	}
	outfile.close();
}
