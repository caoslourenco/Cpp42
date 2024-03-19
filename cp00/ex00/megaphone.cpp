#include <iostream>
#include <string>

class Megaphone {

public:

    std::string loud_message; 
    
    Megaphone();
    ~Megaphone();
    
    void amplify_sound(char *small_sound);
};

Megaphone::Megaphone(){
    Megaphone::loud_message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return;
}

Megaphone::~Megaphone(){
    return;
}

void Megaphone::amplify_sound(char *small_sound){
    int i = 0;
    while(small_sound[i]){
        if (small_sound[i] >= 'a' && small_sound[i] <= 'z')
            std::cout << (char)(small_sound[i] - 32);
        else
            std::cout << small_sound[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    Megaphone mega;
    int i;

    if (argc == 1){
        std::cout << mega.loud_message << std::endl;
        return 1;
    }
    i = 1;
    while(argv[i]){
        mega.amplify_sound(argv[i]);
        std::cout << std::endl;
        i++;
    }
    return 0;
}
