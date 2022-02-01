#include <iostream>

using namespace std;

class Calculator
{
    public:
    double a;
    double b;
    double type;
    
    double CalculatorAddition()
    {
        return a+b;
    }
    
    double CalculatorSubtraction()
    {
        return a-b;
    }
    
    double CalculatorMultiplication()
    {
        return a*b;
    }
    
    double CalculatorDivision()
    {
        return a/b;
    }
    
    double CalculatorQuestionType()
    {
        cout<<"Jaki typ działania chcesz wykonać? Jeśli chcesz dodawanie wpisz - 1, odejmowanie - 2, mnożenie - 3, dzielenie - 4" <<endl;
        cin>>type;
    }
    
    double CalculatorQuestionNumbers()
    {
        cout<<"Podaj pierwszą liczbą"<<endl;
        cin>>a;
        cout<<"Podaj drugą liczbą"<<endl;
        cin>>b;
    }
    
    double CalculatorTypeCheck()
    {
        if(type==1)
        {
            cout<<"Wynik wynosi "<<CalculatorAddition();
        }
        else if(type==2)
        {
            cout<<"Wynik wynosi "<<CalculatorSubtraction();
        }
        else if(type==3)
        {
            cout<<"Wynik wynosi "<<CalculatorMultiplication();
        }
        else if(type==1)
        {
            cout<<"Wynik wynosi "<<CalculatorDivision();
        }
    }
};

int main()
{
    Calculator count;
    count.CalculatorQuestionType();
    count.CalculatorQuestionNumbers();
    count.CalculatorTypeCheck();

    return 0;
}