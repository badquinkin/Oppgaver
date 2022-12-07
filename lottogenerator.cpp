int main(){

	
	srand((unsigned) time(NULL));

	
	for(int i=1; i<=7; i++){
		
		
		int random = 100 + (rand() % 101);

		
		cout<<random<<endl;
	}

	return 1;
}