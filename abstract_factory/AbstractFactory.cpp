#include <iostream>
#include <string>

class AbstractProduct {
    protected: 
        std::string name_;
public:
    AbstractProduct(std::string name = "") 
        : name_(name) {
        }

    const std::string& GetName() const {
        return name_;
    }

    void SetName(const std::string& name) {
        name_ = name;
    }
};

class AbstractProductB;
class AbstractProductA : public AbstractProduct {
public:
    AbstractProductA() {
        name_ = "abstract a";
    }
    virtual void Interact(const AbstractProductB& product_b) {

    }

};

class AbstractProductB : public AbstractProduct {
public:
    AbstractProductB() {
        name_ = "abstract b";
    }
    virtual void Interact(const AbstractProductA& product_a) {

    }


};

class ProductA1 : public AbstractProductA {
public:
    ProductA1() {
        name_ = "product A1";
    }

    virtual void Interact(const AbstractProductB& product_b) override {
        std::cout << name_ << " is interating with " << product_b.GetName() << std::endl;
}

};

class ProductA2 : public AbstractProductA {
public:
    ProductA2() {
        name_ = "prodcut A2";
    }

    virtual void Interact(const AbstractProductB& product_b) override {
        std::cout << name_ << " is interating with " << product_b.GetName() << std::endl;
}
};

class ProductB1 : public AbstractProductB {
public:
    ProductB1() {
        name_ = "prodcut B1";
    }
    virtual void Interact(const AbstractProductA& product_a) override {
        std::cout << name_ << " is interating with " << product_a.GetName() << std::endl;
    }
};

class ProductB2 : public AbstractProductB {
public:
    ProductB2() {
        name_ = "prodcut B2";
    }
    virtual void Interact(const AbstractProductA& product_a) override {
        std::cout << name_ << " is interating with " << product_a.GetName() << std::endl;
}
};


class AbstractFactory {
    public:
    AbstractFactory() {

    }

    virtual AbstractProductA* CreateProductA() = 0;

    virtual AbstractProductB* CreateProductB() = 0;
};

class ConcreteFactory1 : public AbstractFactory {
    public:

    virtual AbstractProductA* CreateProductA() override {
        return new ProductA1();
    }

    virtual AbstractProductB* CreateProductB() override {
        return new ProductB1();
    }
};

class ConcreteFactory2 : public AbstractFactory {
    public:

    virtual AbstractProductA* CreateProductA() override {
        return new ProductA2();
    }

    virtual AbstractProductB* CreateProductB() override {
        return new ProductB2();
    }
};

class Client {
    private:
    AbstractProductA* product_a_;
    AbstractProductB* product_b_;

    public:
    Client(AbstractFactory* factory) {
        product_a_ = factory->CreateProductA();
        product_b_ = factory->CreateProductB();
    }

    void Run() {
        product_b_->Interact(*product_a_);
    }

    ~Client() {
        delete product_a_;
        delete product_b_;
    }
};

int main() {
    ConcreteFactory1 factory;
    Client client(&factory);
    client.Run();
}