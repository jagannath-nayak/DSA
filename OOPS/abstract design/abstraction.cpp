#include<iostream>
#include "bird.h"
using namespace std;

void birddoessomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();

}

int main(){
    Bird* bird = new Pigeon();
    birddoessomething(bird);

    return 0;
}