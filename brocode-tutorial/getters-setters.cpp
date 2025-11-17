#include <iostream>

class Stove{
    private:
        int temp = 0;

    public:

    int getTemp(){
        return temp;
    }

    void setTemp(int temp){
        if(temp < 0){
            this->temp = 0;
        }
        else if(temp >= 10){
            this->temp = 10;
        }
        else{
            this->temp = temp;
        }
    }
};

int main(){
    Stove stove;

    std::cout << "The temp setting is: " << stove.getTemp() << '\n';

    stove.setTemp(5);
    std::cout << "The temp setting is: " << stove.getTemp() << '\n';


    return 0;
}