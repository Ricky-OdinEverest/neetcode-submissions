class Singleton {
private:

    string myString;

    Singleton() {

        myString = "";
    }

public:

    static Singleton *getInstance() {

    static Singleton instance;
    return &instance;

    }

    string getValue() {

        return myString;

    }

    void setValue(string &value) {

        myString = value;

    }
};
