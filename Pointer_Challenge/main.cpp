#include <iostream>

using namespace std;

int *apply_all (int *array1, size_t size1, int *array2, size_t size2 ){
    int *new_array{nullptr};
    size_t size_new {size1*size2},n{0};
    new_array = new int [size_new]; //A pointer is pointing at a memory dynamically created in the heap
    
    for (size_t i {0}; i< size1; i++){
        for (size_t j {0}; j < size2; j++){
           
            *(new_array + n) = (array1[i]) * (array2[j]);
             n++;
        }
    }
    return new_array;
}

void print( int *results, int results_size){
    for(size_t i{0}; i<results_size; i++){
        cout<<*results<<" ";
        results++;
    }
}

int main() {
    size_t array1_size {0};
    size_t array2_size {0};
    cout<<"Size of array 1: ";
    cin>>array1_size;
    cout<<"\nSize of array 2: ";
    cin>>array2_size;
    int array1[],  array2[];
    
    cout<<"\nEnter array 1 elements: ";
    for(size_t i{0}; i<array1_size; i++){
            cin>>array1[i];
    }
    
      cout<<"\nEnter array 2 elements: ";
    for(size_t k{0}; k<array2_size; k++){
            cin>>array1[k];
    }
    
   
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    cout<<endl;
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    cout<<endl;
   cout << "Result: " ;
    print(results, results_size);
    
    delete [] results;
    
    cout << endl;

    return 0;
}