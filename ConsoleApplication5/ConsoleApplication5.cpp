
#include <string>
#include <iostream>
#include "Ювелирка.h"
using namespace std;


//Ювелир
void Jeweler::set_Jew_tel_number(int jeweler_Jew_tel_number) {
	Jeweler::Jew_tel_number = jeweler_Jew_tel_number;
}
int Jeweler::get_Jew_tel_number() {
	return Jeweler::Jew_tel_number;
}
void Jeweler::set_Jew_FIO(std::string jeweler_Jew_FIO) {
	Jeweler::Jew_FIO = jeweler_Jew_FIO;
}
std::string Jeweler::get_Jew_FIO() {
	return Jeweler::Jew_FIO;
}
void Jeweler::toConsole() {
	cout << "ФИО Ювелира: " << Jew_FIO << '\n';
	cout << "Тел. Ювелира: " << Jew_tel_number << '\n';
}

//Администратор
void Admin::set_Ad_number(int admin_Ad_number) {
	Admin::Ad_number = admin_Ad_number;
}
int Admin::get_Ad_number() {
	return Admin::Ad_number;
}
void Admin::set_Ad_FIO(std::string admin_Ad_FIO) {
	Admin::Ad_FIO = admin_Ad_FIO;
}
std::string Admin::get_Ad_FIO() {
	return Admin::Ad_FIO;
}
void Admin::toConsole() {
	cout << "ФИО администратора: " << Ad_FIO << '\n';
	cout << "Тел. администратора: " << Ad_number << '\n';
}

//Клиент
void Client::set_Cli_tel_number(int client_Cli_tel_number) {
	Client::Cli_tel_number = client_Cli_tel_number;
}
int Client::get_Cli_tel_number() {
	return Client::Cli_tel_number;
}
void Client::set_Cli_FIO(std::string client_Cli_FIO) {
	Client::Cli_FIO = client_Cli_FIO;
}
std::string Client::get_Cli_FIO() {
	return Client::Cli_FIO;
}
void Client::toConsole() {
	cout << "ФИО Клиента: " << Cli_FIO << '\n';
	cout << "Тел. Клиента: " << Cli_tel_number << '\n';
}

//Продукт
void Product::set_Price(float product_Price) {
	Product::Price = product_Price;
}
float Product::get_Price() {
	return Product::Price;
}
void Product::set_Matherial(std::string product_Matherial) {
	Product::Matherial = product_Matherial;
}
std::string Product::get_Matherial() {
	return Product::Matherial;
}
void Product::set_Type(std::string product_Type) {
	Product::Type = product_Type;
}
std::string Product::get_Type() {
	return Product::Type;
}
void Product::toConsole() {
	cout << "Материал: " << Matherial << '\n';
	cout << "Цена: " << Price << '\n';
	cout << "Тип изделия: " << Type << '\n';
}

//Заказ
void Order::set_Order_date(std::string order_Date) {
	Order::Order_date = order_Date;
}

std::string Order::get_Order_date() {
	return Order::Order_date;
}

void Order::set_Jeweler(Jeweler* newjeweler) {
	Order::jeweler = newjeweler;
}

Jeweler* Order::get_Jeweler() {
	return jeweler;
}

void Order::set_Product(Product* newproduct) {
	product = newproduct;
}

Product* Order::get_Product() {
	return product;
}

void Order::set_Payment(float order_Payment) {
	Order::Payment = order_Payment;
}

float Order::get_Payment() {
	return Order::Payment;
}
void Order::set_Date_received(std::string order_date_received) {
	Order::Date_received = order_date_received;
}

std::string Order::get_Date_received() {
	return Order::Date_received;
}

void Order::toConsole() {
	cout << "Дата заказа: " << Order_date << '\n';
	cout << "Дата получения: " << Date_received << '\n';
	cout << "Цена: " << Payment << '\n';
	cout << "Изделие: ";
	product->toConsole();
	cout << "Ювелир: ";
	jeweler->toConsole();
}

//Ювелирная мастерская
void Workshop::set_Jeweler(Jeweler* newjeweler) {
	Workshop::jeweler = newjeweler;
}

Jeweler* Workshop::get_Jeweler() {
	return jeweler;
}

void Workshop::set_Admin(Admin* newadmin) {
	Workshop::admin = newadmin;
}

Admin* Workshop::get_Admin() {
	return admin;
}

void Workshop::set_Client(Client* newclient) {
	Workshop::client = newclient;
}

Client* Workshop::get_Client() {
	return client;
}

void Workshop::set_Order(Order* neworder) {
	Workshop::order = neworder;
}

Order* Workshop::get_Order() {
	return order;
}

void Workshop::set_Address(std::string work_address) {
	Workshop::Address = work_address;
}

std::string Workshop::get_Address() {
	return Workshop::Address;
}

void Workshop::set_Name(std::string work_name) {
	Workshop::Name = work_name;
}

std::string Workshop::get_Name() {
	return Workshop::Name;
}

void Workshop::set_Work_tel_number(int work_works_tel_number) {
	Workshop::Work_tel_number = work_works_tel_number;
}

int Workshop::get_Work_tel_number() {
	return Workshop::Work_tel_number;
}

void Workshop::toConsole() {
	cout << "Название: " << Name << '\n';
	cout << "Адрес: " << Address << '\n';
	cout << "Телефон: " << Work_tel_number << '\n';
	cout << "Заказ: ";
	order->toConsole();
	cout << "Ювелир: ";
	jeweler->toConsole();
	cout << "Клиент: ";
	client->toConsole();
	cout << "Администратор: ";
	admin->toConsole();
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Admin admin1;
	Admin admin2("James");
	Admin admin3(&admin2);

	Jeweler jeweler1;
	Jeweler jeweler2("George");
	Jeweler jeweler3(&jeweler2);

	Client client1;
	Client client2("Robert");
	Client client3(&client2);

	Product product1;
	Product product2("Ring");
	Product product3(&product2);
	/*
	Order order1;
	Order order2("Today");
	Order order3;

	Workshop workshop1;
	Workshop workshop2("Popova.19.st");
	Workshop workshop3(&workshop2);
	*/
	admin1.toConsole();
	admin2.toConsole();
	admin3.toConsole();

	jeweler1.toConsole();
	jeweler2.toConsole();
	jeweler3.toConsole();

	product1.toConsole();
	product2.toConsole();
	product3.toConsole();

	client1.toConsole();
	client2.toConsole();
	client3.toConsole();
	/*
	order1.toConsole();
	order2.toConsole();
	order3.toConsole();

	workshop1.toConsole();
	workshop2.toConsole();
	workshop3.toConsole();
	*/
	Admin admin;
	std::string Ad_FIO;
	int Ad_number;

	cout << "Admin FIO: ";
	cin >> Ad_FIO;

	cout << "Telephone number:";
	cin >> Ad_number;

	admin.set_Ad_number(Ad_number);
	admin.set_Ad_FIO(Ad_FIO);
	admin.toConsole();

	Jeweler jeweler;
	std::string Jew_FIO;
	int Jew_tel_number;

	cout << "Jeweler FIO: ";
	cin >> Jew_FIO;

	cout << "Telephone number:";
	cin >> Jew_tel_number;

	jeweler.set_Jew_tel_number(Jew_tel_number);
	jeweler.set_Jew_FIO(Jew_FIO);
	jeweler.toConsole();

	Client client;
	std::string Cli_FIO;
	int Cli_tel_number;

	cout << "Client FIO: ";
	cin >> Cli_FIO;

	cout << "Telephone number:";
	cin >> Cli_tel_number;

	client.set_Cli_tel_number(Cli_tel_number);
	client.set_Cli_FIO(Cli_FIO);
	client.toConsole();

	Product product;

	std::string Matherial;
	float Price;
	std::string Type;

	cout << "Материал: ";
	cin >> Matherial;

	cout << "Цена:";
	cin >> Price;

	cout << "Тип:";
	cin >> Type;

	product.set_Matherial(Matherial);
	product.set_Type(Type);
	product.set_Price(Price);
	product.toConsole();

	Order order;

	std::string Order_date;
	std::string Date_received;
	float Payment;

	cout << "Дата заказа: ";
	cin >> Order_date;

	cout << "Дата получения: ";
	cin >> Date_received;

	cout << "Цена: ";
	cin >> Payment;

	order.set_Product(&product);
	order.set_Jeweler(&jeweler);
	order.set_Order_date(Order_date);
	order.set_Date_received(Date_received);
	order.set_Payment(Payment);
	order.toConsole();

	Workshop workshop;

	std::string Address;
	std::string Name;
	int Work_tel_number;

	cout << "Адрес: ";
	cin >> Address;

	cout << "Название: ";
	cin >> Name;

	cout << "Телефон: ";
	cin >> Work_tel_number;

	workshop.set_Admin(&admin);
	workshop.set_Jeweler(&jeweler);
	workshop.set_Order(&order);
	workshop.set_Client(&client);
	workshop.set_Address(Address);
	workshop.set_Name(Name);
	workshop.set_Work_tel_number(Work_tel_number);
	workshop.toConsole();

	system("pause");
	return 0;
}
