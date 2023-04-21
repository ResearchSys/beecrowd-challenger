#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stack>


using namespace std;
int main(void)
{
	string fita;
	
	while (cin >> fita)
	{
		string resp;
		
		int cont = 0;
        stack <char> pilha;
        
        for ( int i=0; i < fita.size(); i++)
        {
            if (fita[i] == 'S')
				resp += 'B';
			else if (fita[i] == 'B')
			    resp += 'S';
			else if (fita[i] == 'C')
				resp += 'F';
			else if (fita[i] == 'F')
				resp += 'C';
        }
	
		for (int i=0; i < fita.size(); i++)
		{
			if (pilha.empty() || pilha.top() != resp[i])
				{pilha.push(fita[i]);}

			else 
			{
				while (true)
			    {
			    
					if (pilha.empty())
			        {i--;
					    break;}



	                	else if (resp[i] == pilha.top() )
						{
							cont++;
							pilha.pop();
							i++;
				

						}
					
					
					
					else
					{
						
						i--;
					    break;
					}
					
					
					if (i >= resp.size())
					{
					    i--;
					    break;
					}

				}
			}
		}
		
		printf("%d\n", cont);
	}
		system ("pause");
	return 0;
}
