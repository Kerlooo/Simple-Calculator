// Simple calculator in cpp, by Kerlooo


#include <iostream>

using namespace std;

double num1, num2;
char segno;

void addizione();
void sottrazione();
void divisione();
void moltiplicazione();

int main() 
{

    cout << "Inserire il segno dell'operazione (+, -, /, *): ";
    cin >> segno;

    switch(segno)
    {
        case '+':
            addizione();
            break;
        
        case '-':
            sottrazione();
            break;
            
        case '*':
            moltiplicazione();
            break;
        
        case 'x':
            moltiplicazione();
        break;
            
        case '/':
            divisione();
            break;
        
        case ':':
            divisione();
        break;
            
        default:
            cout << "Operazione non valida!" << endl;
    }
    
    return 0;
}

void addizione()
{
    cout << "Inserire il primo numero: ";
    cin >> num1;
    
    cout << "Inserire il secondo numero: ";
    cin >> num2;
    num1 += num2;
    cout << "Il risultato e': " << num1 << endl;
}

void sottrazione()
{
    cout << "Inserire il primo numero: ";
    cin >> num1;
    
    cout << "Inserire il secondo numero: ";
    cin >> num2;
    num1 -= num2;
    cout << "Il risultato e': " << num1 << endl;
}

void moltiplicazione()
{
    cout << "Inserire il primo numero: ";
    cin >> num1;
    
    cout << "Inserire il secondo numero: ";
    cin >> num2;
    num1 *= num2;
    cout << "Il risultato e': " << num1 << endl;
}

void divisione()
{
    cout << "Inserire il primo numero: ";
    cin >> num1;
    
    cout << "Inserire il secondo numero: ";
    cin >> num2;
    num1 /= num2;
    cout << "Il risultato e': " << num1 << endl;
}
