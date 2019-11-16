#include <iostream>
#include <string>
#include "../include/Decorator.h"

using namespace std;

Servidor::Servidor(){
    cout << "Initiate..." << endl;
}

Service::Service(){
    cout << "Initiating Service ..." << endl;
}

void Service::run(){
    cout << "Rodando o Serviço" << endl;
}

Decorator::Decorator(Servidor Server){
    this->Server = Server;
}

Extension::Extension(Servidor Server){
    Decorator(Server);
}

void Extension::run() {
    cout << this->getIP() << endl;;
    Decorator::run();
}

string Extension::getIP(){
    return ("192.168.101.0");
}

DecoratorTeste::DecoratorTeste(){
    Service Service;
    Servidor Servidor = Extension(Service);
}