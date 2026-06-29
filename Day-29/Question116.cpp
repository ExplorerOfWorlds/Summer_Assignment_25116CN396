//**program for inventory management system**//
#include<iostream>
#include<string>
using namespace std;
struct Product{
    int productId;
    string productName;
    int quantity;
    float price;
};
int main(){
    int n;
    cout<<"Enter the number of products: ";
    cin>>n;
    cin.ignore();
    Product p[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter product name: ";
        getline(cin,p[i].productName);
        cout<<"Enter product ID: ";
        cin>>p[i].productId;
        cout<<"Enter quantity: ";
        cin>>p[i].quantity;
        cout<<"Enter price: ";
        cin>>p[i].price;
        cin.ignore();
    }
    cout<<"\nInventory Records\n";
    for(int i=0;i<n;i++){
        cout<<"\nProduct No: "<<i+1<<"\n";
        cout<<"Product Name: "<<p[i].productName<<"\n";
        cout<<"Product ID: "<<p[i].productId<<"\n";
        cout<<"Quantity: "<<p[i].quantity<<"\n";
        cout<<"Price: "<<p[i].price<<"\n";
        cout<<"Total Value: "<<p[i].quantity * p[i].price<<"\n";
    }
    return 0;
}