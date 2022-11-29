//Calculation.h
#pragma once
#ifdef CALCULATIONDLL_EXPORTS  
#define CALCULATION_API __declspec(dllexport)   
#else  
#define CALCULATION_API __declspec(dllimport)   
#endif  
class  CALCULATION_API CalculationApi
{
public:
    void Addition(void);
    void Subtraction(void);
    void Multiply(void);
};