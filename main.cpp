#include <iostream>
using namespace std;

int impostazione;
double num1, num2;

void menu();
void addizione();
void sottrazione();
void divisione();
void moltiplicazione();



int main() 
{
    menu();
    cout << "Inserire l'opzione: ";
    do
    {
        cin >> impostazione;
        switch(impostazione)
    {
        case 1:
            addizione();
            break;
        
        case 2:
            sottrazione();
            break;
            
        case 3:
            moltiplicazione();
            break;
            
        case 4:
            divisione();
            break;
        
        case 5:
            cout << "Grazie per aver usato la calcolatrice!\nMade by Carlo :)" << endl;
            break;
        
        default:
            cout << "Operaazione non valida!" << endl;
    }

    }while(impostazione != 5);
    
    return 0;
}

void menu()
{
    cout << "**********MENU**********" << endl;
    cout << "[1] Addizione" << endl;
    cout << "[2] Sottrazione" << endl;
    cout << "[3] Moltiplicazione" << endl;
    cout << "[4] Divisione" << endl;
    cout << "[5] Esci" << endl;
    cout << "************************" << endl;
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