#include <iostream>

using namespace std;

// Abstract Panel
class abstractPanel
{
public:
	virtual void displayName(abstractPanel* a) = 0;
};

class abstractButton
{
public:
	virtual void displayName(abstractButton* a) = 0;
};

class abstractTextbox
{
public:
	virtual void displayName(abstractTextbox* a) = 0;
};

// Concrete Word90
class panelWord90 : public abstractPanel
{
public:
	void displayName(abstractPanel* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};
class buttonWord90 : public abstractButton
{
public:
	void displayName(abstractButton* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};
class textboxWord90 : public abstractTextbox
{
public:
	void displayName(abstractTextbox* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};

// Concrete Word00
class panelWord00 : public abstractPanel
{
public:
	void displayName(abstractPanel* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};
class buttonWord00 : public abstractButton
{
public:
	void displayName(abstractButton* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};
class textboxWord00 : public abstractTextbox
{
public:
	void displayName(abstractTextbox* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};

// Concrete Word10
class panelWord10 : public abstractPanel
{
public:
	void displayName(abstractPanel* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};
class buttonWord10 : public abstractButton
{
public:
	void displayName(abstractButton* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};
class textboxWord10 : public abstractTextbox
{
public:
	void displayName(abstractTextbox* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};

// Concrete Word24
class panelWord24 : public abstractPanel
{
public:
	void displayName(abstractPanel* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};
class buttonWord24 : public abstractButton
{
public:
	void displayName(abstractButton* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};
class textboxWord24 : public abstractTextbox
{
public:
	void displayName(abstractTextbox* a) override
	{
		cout << typeid(*a).name() << ", ";
	}
};

//Abstract class Factory
class abstractFactoryWordProcessingApp
{
public:
	virtual abstractPanel* createPanel() = 0;
	virtual abstractButton* createButton() = 0;
	virtual abstractTextbox* createTextbox() = 0;
};

// Concrete word 90 from factory
class concreteWord90 : public abstractFactoryWordProcessingApp {
private:
	static int instanceCount;
	static concreteWord90* instance1;
	static concreteWord90* instance2;

	concreteWord90() {} // Private constructor

public:
	static concreteWord90* getInstance() {
		if (instanceCount < 2) {
			instanceCount++;
			if (instanceCount == 1) {
				instance1 = new concreteWord90();
				return instance1;
			}
			else {
				instance2 = new concreteWord90();
				return instance2;
			}
		}
		else {
			std::cout << "Warning: More than two instances of concreteWord90 are not allowed." << std::endl;
			return nullptr;
		}
	}
	//reseting the instances for multiple test runs
	static void resetInstances() {
		delete instance1;
		delete instance2;
		instance1 = nullptr;
		instance2 = nullptr;
		instanceCount = 0;
	}

	abstractPanel* createPanel() override {
		return new panelWord90();
	}

	abstractButton* createButton() override {
		return new buttonWord90();
	}

	abstractTextbox* createTextbox() override {
		return new textboxWord90();
	}
};
// Initialize static members
int concreteWord90::instanceCount = 0;
concreteWord90* concreteWord90::instance1 = nullptr;
concreteWord90* concreteWord90::instance2 = nullptr;

// Concrete word 00 from factory
class concreteWord00 : public abstractFactoryWordProcessingApp {
private:
	static int instanceCount;
	static concreteWord00* instance1;
	static concreteWord00* instance2;

	concreteWord00() {} // Private constructor

public:
	static concreteWord00* getInstance() {
		if (instanceCount < 2) {
			instanceCount++;
			if (instanceCount == 1) {
				instance1 = new concreteWord00();
				return instance1;
			}
			else {
				instance2 = new concreteWord00();
				return instance2;
			}
		}
		else {
			std::cout << "Warning: More than two instances of concreteWord00 are not allowed." << std::endl;
			return nullptr;
		}
	}
	//reseting the instances for multiple test runs
	static void resetInstances() {
		delete instance1;
		delete instance2;
		instance1 = nullptr;
		instance2 = nullptr;
		instanceCount = 0;
	}

	abstractPanel* createPanel() override {
		return new panelWord00();
	}

	abstractButton* createButton() override {
		return new buttonWord00();
	}

	abstractTextbox* createTextbox() override {
		return new textboxWord00();
	}
};
// Initialize static members
int concreteWord00::instanceCount = 0;
concreteWord00* concreteWord00::instance1 = nullptr;
concreteWord00* concreteWord00::instance2 = nullptr;



// Concrete word 10 from factory
class concreteWord10 : public abstractFactoryWordProcessingApp {
private:
	static int instanceCount;
	static concreteWord10* instance1;
	static concreteWord10* instance2;

	concreteWord10() {} // Private constructor

public:
	static concreteWord10* getInstance() {
		if (instanceCount < 2) {
			instanceCount++;
			if (instanceCount == 1) {
				instance1 = new concreteWord10();
				return instance1;
			}
			else {
				instance2 = new concreteWord10();
				return instance2;
			}
		}
		else {
			std::cout << "Warning: More than two instances of concreteWord10 are not allowed." << std::endl;
			return nullptr;
		}
	}
	//reseting the instances for multiple test runs
	static void resetInstances() {
		delete instance1;
		delete instance2;
		instance1 = nullptr;
		instance2 = nullptr;
		instanceCount = 0;
	}

	abstractPanel* createPanel() override {
		return new panelWord10();
	}

	abstractButton* createButton() override {
		return new buttonWord10();
	}

	abstractTextbox* createTextbox() override {
		return new textboxWord10();
	}
};
// Initialize static members
int concreteWord10::instanceCount = 0;
concreteWord10* concreteWord10::instance1 = nullptr;
concreteWord10* concreteWord10::instance2 = nullptr;

// Concrete word 24 from factory
class concreteWord24 : public abstractFactoryWordProcessingApp {
private:
	static int instanceCount;
	static concreteWord24* instance1;
	static concreteWord24* instance2;

	concreteWord24() {} // Private constructor

public:
	static concreteWord24* getInstance() {
		if (instanceCount < 2) {
			instanceCount++;
			if (instanceCount == 1) {
				instance1 = new concreteWord24();
				return instance1;
			}
			else {
				instance2 = new concreteWord24();
				return instance2;
			}
		}
		else {
			std::cout << "Warning: More than two instances of concreteWord24 are not allowed." << std::endl;
			return nullptr;
		}
	}
	//reseting the instances for multiple test runs
	static void resetInstances() {
		delete instance1;
		delete instance2;
		instance1 = nullptr;
		instance2 = nullptr;
		instanceCount = 0;
	}

	abstractPanel* createPanel() override {
		return new panelWord24();
	}

	abstractButton* createButton() override {
		return new buttonWord24();
	}

	abstractTextbox* createTextbox() override {
		return new textboxWord24();
	}
};
// Initialize static members
int concreteWord24::instanceCount = 0;
concreteWord24* concreteWord24::instance1 = nullptr;
concreteWord24* concreteWord24::instance2 = nullptr;

class client
{
private:
	abstractPanel* abstractPanel;
	abstractButton* abstractButton;
	abstractTextbox* abstractTextbox;
public:
	//Constructor
	client(abstractFactoryWordProcessingApp* factory)
	{
		abstractPanel = factory->createPanel();
		abstractButton = factory->createButton();
		abstractTextbox = factory->createTextbox();
	}
	
	void run()
	{
		abstractPanel->displayName(abstractPanel);
		abstractButton->displayName(abstractButton);
		abstractTextbox->displayName(abstractTextbox);
	}
};

int main()
{
	string configurationFile[] = { "word90, word00, word90, word24, word10, word00, word24, word90, word00" };

	for (int j = 0; j < 2; j++) { //test run for loop, this loops twice
		if (j == 0)
		{
			cout << "---TEST RUN 1---\n";
		}
		else
		{
			cout << "\n---TEST RUN 2---\n";
			concreteWord90::resetInstances();
			concreteWord00::resetInstances();
			concreteWord10::resetInstances();
			concreteWord24::resetInstances();
		}
		for (int i = 0; i < 9; i++) //this for loop reads the configuration file
		{
			if (i == 0 || i == 2 || i == 7) //if statement checks for word90
			{
				abstractFactoryWordProcessingApp* factoryWord90 = concreteWord90::getInstance();
				if (factoryWord90 != nullptr) {
					client* c1 = new client(factoryWord90);
					c1->run();
					cout << endl;
					delete c1;
					
				}
			}
			else if (i == 1 || i == 5 || i == 8) //if statement checks for word00
			{
				abstractFactoryWordProcessingApp* factoryWord00 = concreteWord00::getInstance();
				if (factoryWord00 != nullptr) {
					client* c2 = new client(factoryWord00);
					c2->run();
					cout << endl;
					delete c2;
					
				}
			}
			else if (i == 4)//if statement checks for word10
			{
				abstractFactoryWordProcessingApp* factoryWord10 = concreteWord10::getInstance();
				if (factoryWord10 != nullptr) {
					client* c3 = new client(factoryWord10);
					c3->run();
					cout << endl;
					delete c3;
					
				}
			}
			else if (i == 3 || i == 6)//if statement checks for word24
			{
				abstractFactoryWordProcessingApp* factoryWord24 = concreteWord24::getInstance();
				if (factoryWord24 != nullptr) {
					client* c4 = new client(factoryWord24);
					c4->run();
					cout << endl;
					delete c4;
					
				}
			}

		}
	}


	return 0;
}