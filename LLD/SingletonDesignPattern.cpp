#include <bits/stdc++.h>
#include <iostream>

// Eager Loading:

// Class implements eager loading
class EagerSingleton {
private: 
    static EagerSingleton instance;
    EagerSingleton(){

    }


public:
// delete copy constructor and assignment operator
    EagerSingleton(const EagerSingleton&) = delete;
    EagerSingleton& operator = (const EagerSingleton) = delete;

    static EagerSingleton& getInstance(){
        return instance;
    }

};

EagerSingleton EagerSingleton::instance;

class LazySingleton{
private:
    static LazySingleton* instance;

    LazySingleton(){

    }

public:
    LazySingleton(const LazySingleton&) = delete;
    LazySingleton& operator = (const LazySingleton&) = delete;

    static LazySingleton* getInstance(){
        if(instance == nullptr){
            instance = new LazySingleton();
        }
        return instance;
    }
};