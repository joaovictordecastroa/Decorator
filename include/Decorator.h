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

class Service : public Servidor {

	public:
		Service();
		void run();
};

class Decorator : public Servidor {

	protected:
		Servidor Server;

	public:
		Decorator(Servidor Server);
};

class Extension : public Decorator, public Servidor   {
	public:
		Extension(Servidor server);
		void run();
	private:
		string getIP();

};

class DecoratorTeste {
    public: 
        DecoratorTeste();
};
