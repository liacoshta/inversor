/* Data de submissao:17/03/2020
 * Nome: Lia Costa	
 * RA:159834
 */

#include <stdio.h>
const int tam_buffer=100;
char pilha [100];
int n_pilha=0;
	void push (char c){
	/*insere caracteres na pilha*/
	
	pilha[n_pilha++]=c;
	
	}

	char pop (){
	/*remove caracteres do topo da pilha*/
	char p;
	if (n_pilha>0){
	n_pilha--;
	p=pilha[n_pilha];
	}
	return p;
	}
int main() {

  char buffer[tam_buffer];
 fgets(buffer, tam_buffer, stdin);

  char c;

	
	for (int i=0;i<tam_buffer;i++){	
	//||buffer[i]!='\n'
		if(buffer[i]!=' '){
		push(buffer[i]);
		}else{
		//se foi espaço, deve remover e imprimir os caracteres do topo de pilha e continuar depois
		while(n_pilha!=0){
		c= pop();
	 	printf("%c", c);
		}
		}
	
  	}
  return 0;
}
