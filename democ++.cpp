#include<iostream>
using namespace std;

class Car{
	private:
		string model;
		int price;
		public:
			//setter methods
			void setmodel(string m){
				model=m;
			}
			void setprice(int p){
				price=p;
			}	
			//getter methods
			string getmodel(){
				return model;
			}
			int getprice(){
				return price;
			}
			
};
int main()
{
	Car c;
	c.setmodel("olo");
	c.setprice(67);
	
	cout<<"car:"<<c.getmodel()<<endl;
	cout<<"price:"<<c.getprice()<<endl;
	
}
