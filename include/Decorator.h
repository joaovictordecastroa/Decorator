#include <iostream>
#include <string>

using namespace std;

class Servidor {

	private:

		string IP = "";

	public:

		Servidor();
		virtual void run();
};

class Service : Servidor {

	public:
		Service();
		void run();
};

class Decorator : Servidor {

	protected:
		Servidor Server;

	public:
		Decorator(Servidor Server);

};

class Extension : Decorator {
	public:
		Extension();
		void run();

	private:
		string getIP();

};
