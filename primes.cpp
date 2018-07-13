#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

bool is_prime(int num){
		//check if divisible by two
		if(num%2==0) return false;	
		
		int mid = ceil(sqrt(num));
		for(int j=mid; j>1; j--){
			
			if(num%j == 0){
				return false;
			}
		}
		return true;	
}


int main(){
	clock_t t;
	t=clock();
	//print primes
	int i=0;
	long long sum = 1; 
	int percent = 0;
	while(i<2000000){
		i++;
		if(is_prime(i)){
			sum+=i;
		}
		
	}
	cout<<"sum:"<<sum<<endl;
	t=clock()-t;
	printf("Runtime: %f secs \n",(float)t/CLOCKS_PER_SEC);
	return 0;
}
