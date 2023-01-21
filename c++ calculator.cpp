#include <iostream>
using namespace std;

float num1, num2, res;
char fun;
int p;

int main()
{
    

        
    cout << "Перше число: ";
    cin >> num1;
    cout << "Друге число: ";
    cin >> num2;
    cout << "Дія: ";
    cin >> fun;
    
    if (fun == '+')
        res = num1 + num2;
    
    if (fun == '-')
        res = num1 - num2;
    
    if (fun == '*')
        res = num1 * num2;
    
    if (fun == '/')
    {
        res = num1 / num2;
        try//Працює разом з блоком catch
        {
            if (num2 == 0)
                throw 123;
        }
        catch (int non)
        {
            cout << "Hа нуль ділити не можна " << non << endl << endl;
        }
        
        cout << "Рузультат: " << res << endl << endl;
        
        system ( "pause" ) ;
         return  0 ;
        
    }
}
