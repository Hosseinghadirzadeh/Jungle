#include <iostream>
#include "Jungle.h"
#include "DomesticAnimal.h"
#include "WildAnimal.h"

using namespace std;
int main() {
    int number_of_animal;
    cout<<"Enter the number of animal: "<<endl;
    cin>>number_of_animal;
    Jungle myJungle(number_of_animal);//the array of our animals
    for (int i = 0; i < number_of_animal/2; ++i) {//the for loop for domestic animals
        myJungle.AddAnimal(new DomesticAnimal );
    } for (int i = 0; i < number_of_animal/2; ++i) {//the for loop for wild animals
        myJungle.AddAnimal(new WildAnimal );
    }
    for (int i = 0; i < 1000; ++i) {
        myJungle.movement();
    }
    cout<<endl;
    cout<<myJungle.getTotalFall();


    return 0;
}

