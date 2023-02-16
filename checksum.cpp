#include <iostream>
#include <climits>

unsigned int add_checksum(unsigned int n);
bool verify_checksum( unsigned int n );
void add_checksum( unsigned int array[], std::size_t capacity );
unsigned int remove_checksum( unsigned int n );
void remove_checksum( unsigned int array[], std::size_t capacity );
#ifndef MARMOSET_TESTING
int main();
#endif


#ifndef MARMOSET_TESTING
int main() {
	unsigned int value_to_protect{12345678};
	unsigned int protected_value = add_checksum(value_to_protect);
	std::cout << "The value " << value_to_protect
		<< " with the checksum added is " << protected_value
		<< "." << std::endl;
	
	if (verify_checksum(protected_value))
	{
		std::cout << "The checksum is valid." << std::endl;
	}
	else   {
		std::cout << "The checksum is invalid." << std::endl;
	} 
	const std::size_t QTY_VALUES {3};
	unsigned int value_series[QTY_VALUES] {20201122, 20209913, 20224012};
	
	add_checksum(value_series, QTY_VALUES);
	
	std::cout << "Series with checksums added: ";
	for (std::size_t series_index {0};
		series_index < QTY_VALUES; series_index++)
	{
		std::cout << value_series[series_index] << " ";
	}

    std::cout << std::endl;
    return 0;
}
#endif

unsigned int add_checksum(unsigned int n){
    if (n>99999999) return UINT_MAX;
	int array[8]={0,0,0,0,0,0,0,0};
    int a=n;
	for(int i{7};i>=0;i--){
		array[i]=n%10;
		n=n/10;
		
	}

    int sum{0};
    for(int k{0};k<=7;++k){
        
        
        if(k%2!=0){
            if((array[k]*2)<10){
                sum+=array[k]*2;
                   }
            else{
                sum+=((array[k]*2)%10)+1;
            }
      
            
        }
        else{
            sum+=array[k];
       }
        
    }

	return (a*10+sum*9%10);

}
bool verify_checksum( unsigned int n ){
    if(n<1000000000&&(n%10)==(add_checksum(n/10))%10){
        
        return true;
    }
    else{
        return false;
    }
    }
    
void add_checksum( unsigned int array[], std::size_t capacity ){
    for(int c{0};c<capacity;++c){
        array[c]=add_checksum(array[c]);
    }

}
unsigned int remove_checksum( unsigned int n ){
      if(n>999999999){

            return UINT_MAX;
    }
    if(verify_checksum(n)){

        return (n/10);
    }else {
        return UINT_MAX;
    }
}

void remove_checksum( unsigned int array[], std::size_t capacity ){
    for(int c{0};c<capacity;++c){
        array[c]=remove_checksum(array[c]);
    }
}