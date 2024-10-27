#include <iostream>

int getUserSign(){
    char sign;
    std::cout<<"Enter +, -, *, or /:";
    std::cin >> sign;
    return static_cast<int>(sign);
}

double getValueDouble()
{
    double temp {};
    std::cout<<"Enter a double value: ";
    std::cin >> temp;
    return temp;
}


int main()
{
    //we ask user 2 floating points(doubles) probs use a function twice?
    double val_1 = getValueDouble();
    double val_2 = getValueDouble();
    //Then we get + - * / 
    int sign_expression = getUserSign();
    switch (sign_expression)
    {

    //43 is +, - is 45, * is 42 and / is 47
    case (43):
        std::cout<< val_1<<" + "<<val_2<<" is "<<val_1+val_2;
        break;
    case (45):
        std::cout<< val_1<<" - "<<val_2<<" is "<<val_1-val_2;
        break;
    case (42):
        std::cout<< val_1<<" * "<<val_2<<" is "<<val_1*val_2;
        break;
    case (47):
        std::cout<< val_1<<" / "<<val_2<<" is "<<val_1/val_2;
        break;
    
    default:
        break;
    }
}