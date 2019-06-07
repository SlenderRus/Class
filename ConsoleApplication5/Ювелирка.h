#pragma once
#include <iostream>
#include <string>

class Admin
{
private:
	std::string Ad_FIO;
	int Ad_number;

public:
	void set_Ad_FIO(std::string);
	std::string get_Ad_FIO();
	void set_Ad_number(int);
	int get_Ad_number();
	void toConsole();
};
class Jeweler
{
private:
	std::string Jew_FIO;
	int Jew_tel_number;

public:
	void set_Jew_FIO(std::string);
	std::string get_Jew_FIO();
	void set_Jew_tel_number(int);
	int get_Jew_tel_number();
	void toConsole();
};

class Client
{
private:
	std::string Cli_FIO;
	int Cli_tel_number;

public:
	void set_Cli_FIO(std::string);
	std::string get_Cli_FIO();
	void set_Cli_tel_number(int);
	int get_Cli_tel_number();
	void toConsole();

};

class Product
{
private:
	std::string Matherial;
	float Price;
	std::string Type;

public:
	void set_Matherial(std::string);
	std::string get_Matherial();
	void set_Price(float);
	float get_Price();
	void set_Type(std::string);
	std::string get_Type();
	void toConsole();
};

class Order
{
private:
	Product* product;
	Jeweler* jeweler;
	std::string Order_date;
	std::string Date_received;
	float Payment;

public:
	void set_Order_date(std::string);
	std::string get_Order_date();
	void set_Payment(float);
	float get_Payment();
	void set_Date_received(std::string);
	std::string get_Date_received();
	void set_Jeweler(Jeweler* newjeweler);
	Jeweler* get_Jeweler();
	void set_Product(Product* newproduct);
	Product* get_Product();
	void toConsole();
};

class Workshop
{
private:
	Order* order;
	Jeweler* jeweler;
	Admin* admin;
	Client* client;
	std::string Address;
	std::string Name;
	int Work_tel_number;

public:
	void set_Address(std::string);
	std::string get_Address();
	void set_Work_tel_number(int);
	int get_Work_tel_number();
	void set_Name(std::string);
	std::string get_Name();
	void set_Jeweler(Jeweler* newjeweler);
	Jeweler* get_Jeweler();
	void set_Admin(Admin* newadmin);
	Admin* get_Admin();
	void set_Client(Client* newclient);
	Client* get_Client();
	void set_Order(Order* neworder);
	Order* get_Order();
	void toConsole();
};
